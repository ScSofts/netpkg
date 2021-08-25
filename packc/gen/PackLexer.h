
// Generated from Pack.g4 by ANTLR 4.9

#pragma once


#include "antlr4-runtime.h"




class  PackLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, Space = 6, Blank = 7, 
    Comment = 8, Private = 9, Public = 10, U8 = 11, U16 = 12, U32 = 13, 
    U64 = 14, I8 = 15, I16 = 16, I32 = 17, I64 = 18, Pack = 19, Hex = 20, 
    Str = 21, Bin = 22, LenNext = 23, Len = 24, TimeStamp = 25, RandBin = 26, 
    RandU8 = 27, RandU16 = 28, RandU32 = 29, RandU64 = 30, RandI8 = 31, 
    RandI16 = 32, RandI32 = 33, RandI64 = 34, At = 35, Add = 36, Minus = 37, 
    Multiply = 38, Divide = 39, Mod = 40, BitAnd = 41, BitXOr = 42, BitReserve = 43, 
    BitOr = 44, ArguemnetName = 45, DecoratorName = 46, HexStart = 47, HexEnd = 48, 
    BraceLeft = 49, BraceRight = 50, HexByte = 51, NumberConstant = 52, 
    StringConstant = 53
  };

  explicit PackLexer(antlr4::CharStream *input);
  ~PackLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

