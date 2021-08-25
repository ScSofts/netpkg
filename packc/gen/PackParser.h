
// Generated from Pack.g4 by ANTLR 4.9

#pragma once


#include "antlr4-runtime.h"




class  PackParser : public antlr4::Parser {
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

  enum {
    RuleHexConstant = 0, RuleType = 1, RuleDecoratorDef = 2, RuleDecoratorCall = 3, 
    RuleExpression = 4, RuleArguement = 5, RulePackBlock = 6, RulePackLine = 7, 
    RulePackDef = 8, RuleStart = 9, RuleInnerFunction = 10
  };

  explicit PackParser(antlr4::TokenStream *input);
  ~PackParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class HexConstantContext;
  class TypeContext;
  class DecoratorDefContext;
  class DecoratorCallContext;
  class ExpressionContext;
  class ArguementContext;
  class PackBlockContext;
  class PackLineContext;
  class PackDefContext;
  class StartContext;
  class InnerFunctionContext; 

  class  HexConstantContext : public antlr4::ParserRuleContext {
  public:
    HexConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HexStart();
    antlr4::tree::TerminalNode *HexEnd();
    std::vector<antlr4::tree::TerminalNode *> HexByte();
    antlr4::tree::TerminalNode* HexByte(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HexConstantContext* hexConstant();

  class  TypeContext : public antlr4::ParserRuleContext {
  public:
    TypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *U8();
    antlr4::tree::TerminalNode *U16();
    antlr4::tree::TerminalNode *U32();
    antlr4::tree::TerminalNode *U64();
    antlr4::tree::TerminalNode *I8();
    antlr4::tree::TerminalNode *I16();
    antlr4::tree::TerminalNode *I32();
    antlr4::tree::TerminalNode *I64();
    antlr4::tree::TerminalNode *Hex();
    antlr4::tree::TerminalNode *Str();
    antlr4::tree::TerminalNode *Pack();
    antlr4::tree::TerminalNode *Bin();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeContext* type();

  class  DecoratorDefContext : public antlr4::ParserRuleContext {
  public:
    DecoratorDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DecoratorName();
    antlr4::tree::TerminalNode *BraceLeft();
    antlr4::tree::TerminalNode *BraceRight();
    PackBlockContext *packBlock();
    antlr4::tree::TerminalNode *Private();
    antlr4::tree::TerminalNode *Public();
    std::vector<ArguementContext *> arguement();
    ArguementContext* arguement(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DecoratorDefContext* decoratorDef();

  class  DecoratorCallContext : public antlr4::ParserRuleContext {
  public:
    DecoratorCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *At();
    antlr4::tree::TerminalNode *DecoratorName();
    antlr4::tree::TerminalNode *BraceLeft();
    antlr4::tree::TerminalNode *BraceRight();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DecoratorCallContext* decoratorCall();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    HexConstantContext *hexConstant();
    antlr4::tree::TerminalNode *NumberConstant();
    antlr4::tree::TerminalNode *StringConstant();
    antlr4::tree::TerminalNode *ArguemnetName();
    InnerFunctionContext *innerFunction();
    antlr4::tree::TerminalNode *BitReserve();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *BraceLeft();
    antlr4::tree::TerminalNode *BraceRight();
    antlr4::tree::TerminalNode *BitXOr();
    antlr4::tree::TerminalNode *BitAnd();
    antlr4::tree::TerminalNode *BitOr();
    antlr4::tree::TerminalNode *Multiply();
    antlr4::tree::TerminalNode *Divide();
    antlr4::tree::TerminalNode *Add();
    antlr4::tree::TerminalNode *Minus();
    antlr4::tree::TerminalNode *Mod();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionContext* expression();
  ExpressionContext* expression(int precedence);
  class  ArguementContext : public antlr4::ParserRuleContext {
  public:
    ArguementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ArguemnetName();
    TypeContext *type();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArguementContext* arguement();

  class  PackBlockContext : public antlr4::ParserRuleContext {
  public:
    PackBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<PackLineContext *> packLine();
    PackLineContext* packLine(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PackBlockContext* packBlock();

  class  PackLineContext : public antlr4::ParserRuleContext {
  public:
    PackLineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    ExpressionContext *expression();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PackLineContext* packLine();

  class  PackDefContext : public antlr4::ParserRuleContext {
  public:
    PackDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DecoratorCallContext *decoratorCall();
    antlr4::tree::TerminalNode *Pack();
    antlr4::tree::TerminalNode *ArguemnetName();
    PackBlockContext *packBlock();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PackDefContext* packDef();

  class  StartContext : public antlr4::ParserRuleContext {
  public:
    StartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<PackDefContext *> packDef();
    PackDefContext* packDef(size_t i);
    std::vector<DecoratorDefContext *> decoratorDef();
    DecoratorDefContext* decoratorDef(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StartContext* start();

  class  InnerFunctionContext : public antlr4::ParserRuleContext {
  public:
    InnerFunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RandBin();
    antlr4::tree::TerminalNode *RandU8();
    antlr4::tree::TerminalNode *RandI8();
    antlr4::tree::TerminalNode *RandU16();
    antlr4::tree::TerminalNode *RandI16();
    antlr4::tree::TerminalNode *RandU32();
    antlr4::tree::TerminalNode *RandI32();
    antlr4::tree::TerminalNode *RandU64();
    antlr4::tree::TerminalNode *RandI64();
    antlr4::tree::TerminalNode *Len();
    antlr4::tree::TerminalNode *LenNext();
    antlr4::tree::TerminalNode *TimeStamp();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InnerFunctionContext* innerFunction();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool expressionSempred(ExpressionContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

