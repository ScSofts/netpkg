grammar Pack;

Space: ' ' -> skip;
Blank:  (Space|[\t\b\r\n])+ -> skip;
Comment: '#' .*? [\n] -> skip;
Private: 'private';
Public: 'public';

U8:  'u8';
U16: 'u16';
U32: 'u32';
U64: 'u64';

I8:  'i8';
I16: 'i16';
I32: 'i32';
I64: 'i64';
Pack: 'pack';
Hex: 'hex';
Str: 'str';
Bin: 'bin';

LenNext: '$$LenNext';
Len:    '$$Len('ArguemnetName')';
TimeStamp: '$$TimeStamp';
RandBin: '$$RandBin(' NumberConstant ')';
RandU8:  '$$RandU8';
RandU16: '$$RandU16';
RandU32:  '$$RandU32';
RandU64: '$$RandU64';

RandI8:  '$$RandI8';
RandI16: '$$RandI16';
RandI32:  '$$RandI32';
RandI64: '$$RandI64';

At: '@';
Add: '+';
Minus: '-';
Multiply:'*';
Divide: '/';
Mod:    '%';

BitAnd:     '&';
BitXOr:     '^';
BitReserve: '~';
BitOr:      '|';

ArguemnetName:      [a-z][A-Za-z0-9_]*;
DecoratorName: [A-Za-z_][A-Za-z_0-9]*;   

HexStart: '[';
HexEnd:   ']';

BraceLeft: '(';
BraceRight:')';

fragment Num: [0-9A-F];
HexByte: Num Num;
NumberConstant: ('0x')?Num+;

hexConstant: HexStart HexByte* HexEnd;

fragment Char
    :   ~["\\]
    |   '\\\n'   // Added line
    |   '\\\r\n' // Added line
    ;
StringConstant: '"' Char*? '"';
type
    : U8
    | U16
    | U32
    | U64
    | I8
    | I16
    | I32
    | I64
    | Hex
    | Str
    | Pack
    | Bin
    ;

decoratorDef
    : (Private|Public) DecoratorName '(' (arguement (','arguement)* )? ')' packBlock
    ;

decoratorCall
    : At DecoratorName '(' (expression (',' expression)* )? ')'
    ;

// TODO: Add functionCall
expression
    : hexConstant// Hex Expression
    | NumberConstant
    | StringConstant
    | '$' ArguemnetName
    | innerFunction
    | BitReserve expression
    | BraceLeft expression BraceRight
    | <assoc=right> expression BitXOr expression
    | expression (BitAnd | BitOr) expression
    | expression (Multiply|Divide) expression
    | expression (Add|Minus) expression
    | <assoc=right>expression Mod expression
    ;

arguement
    : ArguemnetName ':' type
    ;

packBlock
    : '{' packLine*?  '}'
    ;
packLine
    :  type  expression
    ;

packDef
    : decoratorCall 'pack' ArguemnetName packBlock
    ;

start
    : (packDef|decoratorDef)* EOF;

innerFunction
    : RandBin
    | RandU8
    | RandI8
    | RandU16
    | RandI16
    | RandU32
    | RandI32
    | RandU64
    | RandI64
    | Len
    | LenNext
    | TimeStamp
    ;