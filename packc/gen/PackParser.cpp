
// Generated from Pack.g4 by ANTLR 4.9


#include "PackVisitor.h"

#include "PackParser.h"


using namespace antlrcpp;
using namespace antlr4;

PackParser::PackParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

PackParser::~PackParser() {
  delete _interpreter;
}

std::string PackParser::getGrammarFileName() const {
  return "Pack.g4";
}

const std::vector<std::string>& PackParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& PackParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- HexConstantContext ------------------------------------------------------------------

PackParser::HexConstantContext::HexConstantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PackParser::HexConstantContext::HexStart() {
  return getToken(PackParser::HexStart, 0);
}

tree::TerminalNode* PackParser::HexConstantContext::HexEnd() {
  return getToken(PackParser::HexEnd, 0);
}

std::vector<tree::TerminalNode *> PackParser::HexConstantContext::HexByte() {
  return getTokens(PackParser::HexByte);
}

tree::TerminalNode* PackParser::HexConstantContext::HexByte(size_t i) {
  return getToken(PackParser::HexByte, i);
}


size_t PackParser::HexConstantContext::getRuleIndex() const {
  return PackParser::RuleHexConstant;
}


antlrcpp::Any PackParser::HexConstantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PackVisitor*>(visitor))
    return parserVisitor->visitHexConstant(this);
  else
    return visitor->visitChildren(this);
}

PackParser::HexConstantContext* PackParser::hexConstant() {
  HexConstantContext *_localctx = _tracker.createInstance<HexConstantContext>(_ctx, getState());
  enterRule(_localctx, 0, PackParser::RuleHexConstant);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(22);
    match(PackParser::HexStart);
    setState(26);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PackParser::HexByte) {
      setState(23);
      match(PackParser::HexByte);
      setState(28);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(29);
    match(PackParser::HexEnd);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

PackParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PackParser::TypeContext::U8() {
  return getToken(PackParser::U8, 0);
}

tree::TerminalNode* PackParser::TypeContext::U16() {
  return getToken(PackParser::U16, 0);
}

tree::TerminalNode* PackParser::TypeContext::U32() {
  return getToken(PackParser::U32, 0);
}

tree::TerminalNode* PackParser::TypeContext::U64() {
  return getToken(PackParser::U64, 0);
}

tree::TerminalNode* PackParser::TypeContext::I8() {
  return getToken(PackParser::I8, 0);
}

tree::TerminalNode* PackParser::TypeContext::I16() {
  return getToken(PackParser::I16, 0);
}

tree::TerminalNode* PackParser::TypeContext::I32() {
  return getToken(PackParser::I32, 0);
}

tree::TerminalNode* PackParser::TypeContext::I64() {
  return getToken(PackParser::I64, 0);
}

tree::TerminalNode* PackParser::TypeContext::Hex() {
  return getToken(PackParser::Hex, 0);
}

tree::TerminalNode* PackParser::TypeContext::Str() {
  return getToken(PackParser::Str, 0);
}

tree::TerminalNode* PackParser::TypeContext::Pack() {
  return getToken(PackParser::Pack, 0);
}

tree::TerminalNode* PackParser::TypeContext::Bin() {
  return getToken(PackParser::Bin, 0);
}


size_t PackParser::TypeContext::getRuleIndex() const {
  return PackParser::RuleType;
}


antlrcpp::Any PackParser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PackVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}

PackParser::TypeContext* PackParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 2, PackParser::RuleType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(31);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << PackParser::U8)
      | (1ULL << PackParser::U16)
      | (1ULL << PackParser::U32)
      | (1ULL << PackParser::U64)
      | (1ULL << PackParser::I8)
      | (1ULL << PackParser::I16)
      | (1ULL << PackParser::I32)
      | (1ULL << PackParser::I64)
      | (1ULL << PackParser::Pack)
      | (1ULL << PackParser::Hex)
      | (1ULL << PackParser::Str)
      | (1ULL << PackParser::Bin))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DecoratorDefContext ------------------------------------------------------------------

PackParser::DecoratorDefContext::DecoratorDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PackParser::DecoratorDefContext::DecoratorName() {
  return getToken(PackParser::DecoratorName, 0);
}

tree::TerminalNode* PackParser::DecoratorDefContext::BraceLeft() {
  return getToken(PackParser::BraceLeft, 0);
}

tree::TerminalNode* PackParser::DecoratorDefContext::BraceRight() {
  return getToken(PackParser::BraceRight, 0);
}

PackParser::PackBlockContext* PackParser::DecoratorDefContext::packBlock() {
  return getRuleContext<PackParser::PackBlockContext>(0);
}

tree::TerminalNode* PackParser::DecoratorDefContext::Private() {
  return getToken(PackParser::Private, 0);
}

tree::TerminalNode* PackParser::DecoratorDefContext::Public() {
  return getToken(PackParser::Public, 0);
}

std::vector<PackParser::ArguementContext *> PackParser::DecoratorDefContext::arguement() {
  return getRuleContexts<PackParser::ArguementContext>();
}

PackParser::ArguementContext* PackParser::DecoratorDefContext::arguement(size_t i) {
  return getRuleContext<PackParser::ArguementContext>(i);
}


size_t PackParser::DecoratorDefContext::getRuleIndex() const {
  return PackParser::RuleDecoratorDef;
}


antlrcpp::Any PackParser::DecoratorDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PackVisitor*>(visitor))
    return parserVisitor->visitDecoratorDef(this);
  else
    return visitor->visitChildren(this);
}

PackParser::DecoratorDefContext* PackParser::decoratorDef() {
  DecoratorDefContext *_localctx = _tracker.createInstance<DecoratorDefContext>(_ctx, getState());
  enterRule(_localctx, 4, PackParser::RuleDecoratorDef);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(33);
    _la = _input->LA(1);
    if (!(_la == PackParser::Private

    || _la == PackParser::Public)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(34);
    match(PackParser::DecoratorName);
    setState(35);
    match(PackParser::BraceLeft);
    setState(44);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PackParser::ArguemnetName) {
      setState(36);
      arguement();
      setState(41);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == PackParser::T__0) {
        setState(37);
        match(PackParser::T__0);
        setState(38);
        arguement();
        setState(43);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(46);
    match(PackParser::BraceRight);
    setState(47);
    packBlock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DecoratorCallContext ------------------------------------------------------------------

PackParser::DecoratorCallContext::DecoratorCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PackParser::DecoratorCallContext::At() {
  return getToken(PackParser::At, 0);
}

tree::TerminalNode* PackParser::DecoratorCallContext::DecoratorName() {
  return getToken(PackParser::DecoratorName, 0);
}

tree::TerminalNode* PackParser::DecoratorCallContext::BraceLeft() {
  return getToken(PackParser::BraceLeft, 0);
}

tree::TerminalNode* PackParser::DecoratorCallContext::BraceRight() {
  return getToken(PackParser::BraceRight, 0);
}

std::vector<PackParser::ExpressionContext *> PackParser::DecoratorCallContext::expression() {
  return getRuleContexts<PackParser::ExpressionContext>();
}

PackParser::ExpressionContext* PackParser::DecoratorCallContext::expression(size_t i) {
  return getRuleContext<PackParser::ExpressionContext>(i);
}


size_t PackParser::DecoratorCallContext::getRuleIndex() const {
  return PackParser::RuleDecoratorCall;
}


antlrcpp::Any PackParser::DecoratorCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PackVisitor*>(visitor))
    return parserVisitor->visitDecoratorCall(this);
  else
    return visitor->visitChildren(this);
}

PackParser::DecoratorCallContext* PackParser::decoratorCall() {
  DecoratorCallContext *_localctx = _tracker.createInstance<DecoratorCallContext>(_ctx, getState());
  enterRule(_localctx, 6, PackParser::RuleDecoratorCall);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(49);
    match(PackParser::At);
    setState(50);
    match(PackParser::DecoratorName);
    setState(51);
    match(PackParser::BraceLeft);
    setState(60);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << PackParser::T__1)
      | (1ULL << PackParser::LenNext)
      | (1ULL << PackParser::Len)
      | (1ULL << PackParser::TimeStamp)
      | (1ULL << PackParser::RandBin)
      | (1ULL << PackParser::RandU8)
      | (1ULL << PackParser::RandU16)
      | (1ULL << PackParser::RandU32)
      | (1ULL << PackParser::RandU64)
      | (1ULL << PackParser::RandI8)
      | (1ULL << PackParser::RandI16)
      | (1ULL << PackParser::RandI32)
      | (1ULL << PackParser::RandI64)
      | (1ULL << PackParser::BitReserve)
      | (1ULL << PackParser::HexStart)
      | (1ULL << PackParser::BraceLeft)
      | (1ULL << PackParser::NumberConstant)
      | (1ULL << PackParser::StringConstant))) != 0)) {
      setState(52);
      expression(0);
      setState(57);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == PackParser::T__0) {
        setState(53);
        match(PackParser::T__0);
        setState(54);
        expression(0);
        setState(59);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(62);
    match(PackParser::BraceRight);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

PackParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PackParser::HexConstantContext* PackParser::ExpressionContext::hexConstant() {
  return getRuleContext<PackParser::HexConstantContext>(0);
}

tree::TerminalNode* PackParser::ExpressionContext::NumberConstant() {
  return getToken(PackParser::NumberConstant, 0);
}

tree::TerminalNode* PackParser::ExpressionContext::StringConstant() {
  return getToken(PackParser::StringConstant, 0);
}

tree::TerminalNode* PackParser::ExpressionContext::ArguemnetName() {
  return getToken(PackParser::ArguemnetName, 0);
}

PackParser::InnerFunctionContext* PackParser::ExpressionContext::innerFunction() {
  return getRuleContext<PackParser::InnerFunctionContext>(0);
}

tree::TerminalNode* PackParser::ExpressionContext::BitReserve() {
  return getToken(PackParser::BitReserve, 0);
}

std::vector<PackParser::ExpressionContext *> PackParser::ExpressionContext::expression() {
  return getRuleContexts<PackParser::ExpressionContext>();
}

PackParser::ExpressionContext* PackParser::ExpressionContext::expression(size_t i) {
  return getRuleContext<PackParser::ExpressionContext>(i);
}

tree::TerminalNode* PackParser::ExpressionContext::BraceLeft() {
  return getToken(PackParser::BraceLeft, 0);
}

tree::TerminalNode* PackParser::ExpressionContext::BraceRight() {
  return getToken(PackParser::BraceRight, 0);
}

tree::TerminalNode* PackParser::ExpressionContext::BitXOr() {
  return getToken(PackParser::BitXOr, 0);
}

tree::TerminalNode* PackParser::ExpressionContext::BitAnd() {
  return getToken(PackParser::BitAnd, 0);
}

tree::TerminalNode* PackParser::ExpressionContext::BitOr() {
  return getToken(PackParser::BitOr, 0);
}

tree::TerminalNode* PackParser::ExpressionContext::Multiply() {
  return getToken(PackParser::Multiply, 0);
}

tree::TerminalNode* PackParser::ExpressionContext::Divide() {
  return getToken(PackParser::Divide, 0);
}

tree::TerminalNode* PackParser::ExpressionContext::Add() {
  return getToken(PackParser::Add, 0);
}

tree::TerminalNode* PackParser::ExpressionContext::Minus() {
  return getToken(PackParser::Minus, 0);
}

tree::TerminalNode* PackParser::ExpressionContext::Mod() {
  return getToken(PackParser::Mod, 0);
}


size_t PackParser::ExpressionContext::getRuleIndex() const {
  return PackParser::RuleExpression;
}


antlrcpp::Any PackParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PackVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}


PackParser::ExpressionContext* PackParser::expression() {
   return expression(0);
}

PackParser::ExpressionContext* PackParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  PackParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  PackParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 8;
  enterRecursionRule(_localctx, 8, PackParser::RuleExpression, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(77);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PackParser::HexStart: {
        setState(65);
        hexConstant();
        break;
      }

      case PackParser::NumberConstant: {
        setState(66);
        match(PackParser::NumberConstant);
        break;
      }

      case PackParser::StringConstant: {
        setState(67);
        match(PackParser::StringConstant);
        break;
      }

      case PackParser::T__1: {
        setState(68);
        match(PackParser::T__1);
        setState(69);
        match(PackParser::ArguemnetName);
        break;
      }

      case PackParser::LenNext:
      case PackParser::Len:
      case PackParser::TimeStamp:
      case PackParser::RandBin:
      case PackParser::RandU8:
      case PackParser::RandU16:
      case PackParser::RandU32:
      case PackParser::RandU64:
      case PackParser::RandI8:
      case PackParser::RandI16:
      case PackParser::RandI32:
      case PackParser::RandI64: {
        setState(70);
        innerFunction();
        break;
      }

      case PackParser::BitReserve: {
        setState(71);
        match(PackParser::BitReserve);
        setState(72);
        expression(7);
        break;
      }

      case PackParser::BraceLeft: {
        setState(73);
        match(PackParser::BraceLeft);
        setState(74);
        expression(0);
        setState(75);
        match(PackParser::BraceRight);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(96);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(94);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(79);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(80);
          match(PackParser::BitXOr);
          setState(81);
          expression(5);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(82);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(83);
          _la = _input->LA(1);
          if (!(_la == PackParser::BitAnd

          || _la == PackParser::BitOr)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(84);
          expression(5);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(85);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(86);
          _la = _input->LA(1);
          if (!(_la == PackParser::Multiply

          || _la == PackParser::Divide)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(87);
          expression(4);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(88);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(89);
          _la = _input->LA(1);
          if (!(_la == PackParser::Add

          || _la == PackParser::Minus)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(90);
          expression(3);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(91);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(92);
          match(PackParser::Mod);
          setState(93);
          expression(1);
          break;
        }

        default:
          break;
        } 
      }
      setState(98);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ArguementContext ------------------------------------------------------------------

PackParser::ArguementContext::ArguementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PackParser::ArguementContext::ArguemnetName() {
  return getToken(PackParser::ArguemnetName, 0);
}

PackParser::TypeContext* PackParser::ArguementContext::type() {
  return getRuleContext<PackParser::TypeContext>(0);
}


size_t PackParser::ArguementContext::getRuleIndex() const {
  return PackParser::RuleArguement;
}


antlrcpp::Any PackParser::ArguementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PackVisitor*>(visitor))
    return parserVisitor->visitArguement(this);
  else
    return visitor->visitChildren(this);
}

PackParser::ArguementContext* PackParser::arguement() {
  ArguementContext *_localctx = _tracker.createInstance<ArguementContext>(_ctx, getState());
  enterRule(_localctx, 10, PackParser::RuleArguement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(99);
    match(PackParser::ArguemnetName);
    setState(100);
    match(PackParser::T__2);
    setState(101);
    type();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PackBlockContext ------------------------------------------------------------------

PackParser::PackBlockContext::PackBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PackParser::PackLineContext *> PackParser::PackBlockContext::packLine() {
  return getRuleContexts<PackParser::PackLineContext>();
}

PackParser::PackLineContext* PackParser::PackBlockContext::packLine(size_t i) {
  return getRuleContext<PackParser::PackLineContext>(i);
}


size_t PackParser::PackBlockContext::getRuleIndex() const {
  return PackParser::RulePackBlock;
}


antlrcpp::Any PackParser::PackBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PackVisitor*>(visitor))
    return parserVisitor->visitPackBlock(this);
  else
    return visitor->visitChildren(this);
}

PackParser::PackBlockContext* PackParser::packBlock() {
  PackBlockContext *_localctx = _tracker.createInstance<PackBlockContext>(_ctx, getState());
  enterRule(_localctx, 12, PackParser::RulePackBlock);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(103);
    match(PackParser::T__3);
    setState(107);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    while (alt != 1 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1 + 1) {
        setState(104);
        packLine(); 
      }
      setState(109);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    }
    setState(110);
    match(PackParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PackLineContext ------------------------------------------------------------------

PackParser::PackLineContext::PackLineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PackParser::TypeContext* PackParser::PackLineContext::type() {
  return getRuleContext<PackParser::TypeContext>(0);
}

PackParser::ExpressionContext* PackParser::PackLineContext::expression() {
  return getRuleContext<PackParser::ExpressionContext>(0);
}


size_t PackParser::PackLineContext::getRuleIndex() const {
  return PackParser::RulePackLine;
}


antlrcpp::Any PackParser::PackLineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PackVisitor*>(visitor))
    return parserVisitor->visitPackLine(this);
  else
    return visitor->visitChildren(this);
}

PackParser::PackLineContext* PackParser::packLine() {
  PackLineContext *_localctx = _tracker.createInstance<PackLineContext>(_ctx, getState());
  enterRule(_localctx, 14, PackParser::RulePackLine);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(112);
    type();
    setState(113);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PackDefContext ------------------------------------------------------------------

PackParser::PackDefContext::PackDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PackParser::DecoratorCallContext* PackParser::PackDefContext::decoratorCall() {
  return getRuleContext<PackParser::DecoratorCallContext>(0);
}

tree::TerminalNode* PackParser::PackDefContext::Pack() {
  return getToken(PackParser::Pack, 0);
}

tree::TerminalNode* PackParser::PackDefContext::ArguemnetName() {
  return getToken(PackParser::ArguemnetName, 0);
}

PackParser::PackBlockContext* PackParser::PackDefContext::packBlock() {
  return getRuleContext<PackParser::PackBlockContext>(0);
}


size_t PackParser::PackDefContext::getRuleIndex() const {
  return PackParser::RulePackDef;
}


antlrcpp::Any PackParser::PackDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PackVisitor*>(visitor))
    return parserVisitor->visitPackDef(this);
  else
    return visitor->visitChildren(this);
}

PackParser::PackDefContext* PackParser::packDef() {
  PackDefContext *_localctx = _tracker.createInstance<PackDefContext>(_ctx, getState());
  enterRule(_localctx, 16, PackParser::RulePackDef);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(115);
    decoratorCall();
    setState(116);
    match(PackParser::Pack);
    setState(117);
    match(PackParser::ArguemnetName);
    setState(118);
    packBlock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StartContext ------------------------------------------------------------------

PackParser::StartContext::StartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PackParser::StartContext::EOF() {
  return getToken(PackParser::EOF, 0);
}

std::vector<PackParser::PackDefContext *> PackParser::StartContext::packDef() {
  return getRuleContexts<PackParser::PackDefContext>();
}

PackParser::PackDefContext* PackParser::StartContext::packDef(size_t i) {
  return getRuleContext<PackParser::PackDefContext>(i);
}

std::vector<PackParser::DecoratorDefContext *> PackParser::StartContext::decoratorDef() {
  return getRuleContexts<PackParser::DecoratorDefContext>();
}

PackParser::DecoratorDefContext* PackParser::StartContext::decoratorDef(size_t i) {
  return getRuleContext<PackParser::DecoratorDefContext>(i);
}


size_t PackParser::StartContext::getRuleIndex() const {
  return PackParser::RuleStart;
}


antlrcpp::Any PackParser::StartContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PackVisitor*>(visitor))
    return parserVisitor->visitStart(this);
  else
    return visitor->visitChildren(this);
}

PackParser::StartContext* PackParser::start() {
  StartContext *_localctx = _tracker.createInstance<StartContext>(_ctx, getState());
  enterRule(_localctx, 18, PackParser::RuleStart);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(124);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << PackParser::Private)
      | (1ULL << PackParser::Public)
      | (1ULL << PackParser::At))) != 0)) {
      setState(122);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case PackParser::At: {
          setState(120);
          packDef();
          break;
        }

        case PackParser::Private:
        case PackParser::Public: {
          setState(121);
          decoratorDef();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(126);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(127);
    match(PackParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InnerFunctionContext ------------------------------------------------------------------

PackParser::InnerFunctionContext::InnerFunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PackParser::InnerFunctionContext::RandBin() {
  return getToken(PackParser::RandBin, 0);
}

tree::TerminalNode* PackParser::InnerFunctionContext::RandU8() {
  return getToken(PackParser::RandU8, 0);
}

tree::TerminalNode* PackParser::InnerFunctionContext::RandI8() {
  return getToken(PackParser::RandI8, 0);
}

tree::TerminalNode* PackParser::InnerFunctionContext::RandU16() {
  return getToken(PackParser::RandU16, 0);
}

tree::TerminalNode* PackParser::InnerFunctionContext::RandI16() {
  return getToken(PackParser::RandI16, 0);
}

tree::TerminalNode* PackParser::InnerFunctionContext::RandU32() {
  return getToken(PackParser::RandU32, 0);
}

tree::TerminalNode* PackParser::InnerFunctionContext::RandI32() {
  return getToken(PackParser::RandI32, 0);
}

tree::TerminalNode* PackParser::InnerFunctionContext::RandU64() {
  return getToken(PackParser::RandU64, 0);
}

tree::TerminalNode* PackParser::InnerFunctionContext::RandI64() {
  return getToken(PackParser::RandI64, 0);
}

tree::TerminalNode* PackParser::InnerFunctionContext::Len() {
  return getToken(PackParser::Len, 0);
}

tree::TerminalNode* PackParser::InnerFunctionContext::LenNext() {
  return getToken(PackParser::LenNext, 0);
}

tree::TerminalNode* PackParser::InnerFunctionContext::TimeStamp() {
  return getToken(PackParser::TimeStamp, 0);
}


size_t PackParser::InnerFunctionContext::getRuleIndex() const {
  return PackParser::RuleInnerFunction;
}


antlrcpp::Any PackParser::InnerFunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PackVisitor*>(visitor))
    return parserVisitor->visitInnerFunction(this);
  else
    return visitor->visitChildren(this);
}

PackParser::InnerFunctionContext* PackParser::innerFunction() {
  InnerFunctionContext *_localctx = _tracker.createInstance<InnerFunctionContext>(_ctx, getState());
  enterRule(_localctx, 20, PackParser::RuleInnerFunction);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(129);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << PackParser::LenNext)
      | (1ULL << PackParser::Len)
      | (1ULL << PackParser::TimeStamp)
      | (1ULL << PackParser::RandBin)
      | (1ULL << PackParser::RandU8)
      | (1ULL << PackParser::RandU16)
      | (1ULL << PackParser::RandU32)
      | (1ULL << PackParser::RandU64)
      | (1ULL << PackParser::RandI8)
      | (1ULL << PackParser::RandI16)
      | (1ULL << PackParser::RandI32)
      | (1ULL << PackParser::RandI64))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool PackParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 4: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool PackParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 5);
    case 1: return precpred(_ctx, 4);
    case 2: return precpred(_ctx, 3);
    case 3: return precpred(_ctx, 2);
    case 4: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> PackParser::_decisionToDFA;
atn::PredictionContextCache PackParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN PackParser::_atn;
std::vector<uint16_t> PackParser::_serializedATN;

std::vector<std::string> PackParser::_ruleNames = {
  "hexConstant", "type", "decoratorDef", "decoratorCall", "expression", 
  "arguement", "packBlock", "packLine", "packDef", "start", "innerFunction"
};

std::vector<std::string> PackParser::_literalNames = {
  "", "','", "'$'", "':'", "'{'", "'}'", "' '", "", "", "'private'", "'public'", 
  "'u8'", "'u16'", "'u32'", "'u64'", "'i8'", "'i16'", "'i32'", "'i64'", 
  "'pack'", "'hex'", "'str'", "'bin'", "'$$LenNext'", "", "'$$TimeStamp'", 
  "", "'$$RandU8'", "'$$RandU16'", "'$$RandU32'", "'$$RandU64'", "'$$RandI8'", 
  "'$$RandI16'", "'$$RandI32'", "'$$RandI64'", "'@'", "'+'", "'-'", "'*'", 
  "'/'", "'%'", "'&'", "'^'", "'~'", "'|'", "", "", "'['", "']'", "'('", 
  "')'"
};

std::vector<std::string> PackParser::_symbolicNames = {
  "", "", "", "", "", "", "Space", "Blank", "Comment", "Private", "Public", 
  "U8", "U16", "U32", "U64", "I8", "I16", "I32", "I64", "Pack", "Hex", "Str", 
  "Bin", "LenNext", "Len", "TimeStamp", "RandBin", "RandU8", "RandU16", 
  "RandU32", "RandU64", "RandI8", "RandI16", "RandI32", "RandI64", "At", 
  "Add", "Minus", "Multiply", "Divide", "Mod", "BitAnd", "BitXOr", "BitReserve", 
  "BitOr", "ArguemnetName", "DecoratorName", "HexStart", "HexEnd", "BraceLeft", 
  "BraceRight", "HexByte", "NumberConstant", "StringConstant"
};

dfa::Vocabulary PackParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> PackParser::_tokenNames;

PackParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x37, 0x86, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x3, 0x2, 0x3, 0x2, 0x7, 0x2, 0x1b, 0xa, 0x2, 
    0xc, 0x2, 0xe, 0x2, 0x1e, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x7, 
    0x4, 0x2a, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x2d, 0xb, 0x4, 0x5, 0x4, 0x2f, 
    0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0x3a, 0xa, 0x5, 0xc, 0x5, 0xe, 
    0x5, 0x3d, 0xb, 0x5, 0x5, 0x5, 0x3f, 0xa, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x50, 
    0xa, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x7, 0x6, 0x61, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 0x64, 
    0xb, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 
    0x7, 0x8, 0x6c, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0x6f, 0xb, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 0x7d, 0xa, 0xb, 0xc, 
    0xb, 0xe, 0xb, 0x80, 0xb, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0x6d, 0x3, 0xa, 0xd, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 
    0x10, 0x12, 0x14, 0x16, 0x2, 0x8, 0x3, 0x2, 0xd, 0x18, 0x3, 0x2, 0xb, 
    0xc, 0x4, 0x2, 0x2b, 0x2b, 0x2e, 0x2e, 0x3, 0x2, 0x28, 0x29, 0x3, 0x2, 
    0x26, 0x27, 0x3, 0x2, 0x19, 0x24, 0x2, 0x8d, 0x2, 0x18, 0x3, 0x2, 0x2, 
    0x2, 0x4, 0x21, 0x3, 0x2, 0x2, 0x2, 0x6, 0x23, 0x3, 0x2, 0x2, 0x2, 0x8, 
    0x33, 0x3, 0x2, 0x2, 0x2, 0xa, 0x4f, 0x3, 0x2, 0x2, 0x2, 0xc, 0x65, 
    0x3, 0x2, 0x2, 0x2, 0xe, 0x69, 0x3, 0x2, 0x2, 0x2, 0x10, 0x72, 0x3, 
    0x2, 0x2, 0x2, 0x12, 0x75, 0x3, 0x2, 0x2, 0x2, 0x14, 0x7e, 0x3, 0x2, 
    0x2, 0x2, 0x16, 0x83, 0x3, 0x2, 0x2, 0x2, 0x18, 0x1c, 0x7, 0x31, 0x2, 
    0x2, 0x19, 0x1b, 0x7, 0x35, 0x2, 0x2, 0x1a, 0x19, 0x3, 0x2, 0x2, 0x2, 
    0x1b, 0x1e, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x1a, 0x3, 0x2, 0x2, 0x2, 0x1c, 
    0x1d, 0x3, 0x2, 0x2, 0x2, 0x1d, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x1c, 
    0x3, 0x2, 0x2, 0x2, 0x1f, 0x20, 0x7, 0x32, 0x2, 0x2, 0x20, 0x3, 0x3, 
    0x2, 0x2, 0x2, 0x21, 0x22, 0x9, 0x2, 0x2, 0x2, 0x22, 0x5, 0x3, 0x2, 
    0x2, 0x2, 0x23, 0x24, 0x9, 0x3, 0x2, 0x2, 0x24, 0x25, 0x7, 0x30, 0x2, 
    0x2, 0x25, 0x2e, 0x7, 0x33, 0x2, 0x2, 0x26, 0x2b, 0x5, 0xc, 0x7, 0x2, 
    0x27, 0x28, 0x7, 0x3, 0x2, 0x2, 0x28, 0x2a, 0x5, 0xc, 0x7, 0x2, 0x29, 
    0x27, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x2b, 0x29, 
    0x3, 0x2, 0x2, 0x2, 0x2b, 0x2c, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2f, 0x3, 
    0x2, 0x2, 0x2, 0x2d, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x26, 0x3, 0x2, 
    0x2, 0x2, 0x2e, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x30, 0x3, 0x2, 0x2, 
    0x2, 0x30, 0x31, 0x7, 0x34, 0x2, 0x2, 0x31, 0x32, 0x5, 0xe, 0x8, 0x2, 
    0x32, 0x7, 0x3, 0x2, 0x2, 0x2, 0x33, 0x34, 0x7, 0x25, 0x2, 0x2, 0x34, 
    0x35, 0x7, 0x30, 0x2, 0x2, 0x35, 0x3e, 0x7, 0x33, 0x2, 0x2, 0x36, 0x3b, 
    0x5, 0xa, 0x6, 0x2, 0x37, 0x38, 0x7, 0x3, 0x2, 0x2, 0x38, 0x3a, 0x5, 
    0xa, 0x6, 0x2, 0x39, 0x37, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x3d, 0x3, 0x2, 
    0x2, 0x2, 0x3b, 0x39, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x3c, 0x3, 0x2, 0x2, 
    0x2, 0x3c, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x3b, 0x3, 0x2, 0x2, 0x2, 
    0x3e, 0x36, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x3f, 
    0x40, 0x3, 0x2, 0x2, 0x2, 0x40, 0x41, 0x7, 0x34, 0x2, 0x2, 0x41, 0x9, 
    0x3, 0x2, 0x2, 0x2, 0x42, 0x43, 0x8, 0x6, 0x1, 0x2, 0x43, 0x50, 0x5, 
    0x2, 0x2, 0x2, 0x44, 0x50, 0x7, 0x36, 0x2, 0x2, 0x45, 0x50, 0x7, 0x37, 
    0x2, 0x2, 0x46, 0x47, 0x7, 0x4, 0x2, 0x2, 0x47, 0x50, 0x7, 0x2f, 0x2, 
    0x2, 0x48, 0x50, 0x5, 0x16, 0xc, 0x2, 0x49, 0x4a, 0x7, 0x2d, 0x2, 0x2, 
    0x4a, 0x50, 0x5, 0xa, 0x6, 0x9, 0x4b, 0x4c, 0x7, 0x33, 0x2, 0x2, 0x4c, 
    0x4d, 0x5, 0xa, 0x6, 0x2, 0x4d, 0x4e, 0x7, 0x34, 0x2, 0x2, 0x4e, 0x50, 
    0x3, 0x2, 0x2, 0x2, 0x4f, 0x42, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x44, 0x3, 
    0x2, 0x2, 0x2, 0x4f, 0x45, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x46, 0x3, 0x2, 
    0x2, 0x2, 0x4f, 0x48, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x49, 0x3, 0x2, 0x2, 
    0x2, 0x4f, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x50, 0x62, 0x3, 0x2, 0x2, 0x2, 
    0x51, 0x52, 0xc, 0x7, 0x2, 0x2, 0x52, 0x53, 0x7, 0x2c, 0x2, 0x2, 0x53, 
    0x61, 0x5, 0xa, 0x6, 0x7, 0x54, 0x55, 0xc, 0x6, 0x2, 0x2, 0x55, 0x56, 
    0x9, 0x4, 0x2, 0x2, 0x56, 0x61, 0x5, 0xa, 0x6, 0x7, 0x57, 0x58, 0xc, 
    0x5, 0x2, 0x2, 0x58, 0x59, 0x9, 0x5, 0x2, 0x2, 0x59, 0x61, 0x5, 0xa, 
    0x6, 0x6, 0x5a, 0x5b, 0xc, 0x4, 0x2, 0x2, 0x5b, 0x5c, 0x9, 0x6, 0x2, 
    0x2, 0x5c, 0x61, 0x5, 0xa, 0x6, 0x5, 0x5d, 0x5e, 0xc, 0x3, 0x2, 0x2, 
    0x5e, 0x5f, 0x7, 0x2a, 0x2, 0x2, 0x5f, 0x61, 0x5, 0xa, 0x6, 0x3, 0x60, 
    0x51, 0x3, 0x2, 0x2, 0x2, 0x60, 0x54, 0x3, 0x2, 0x2, 0x2, 0x60, 0x57, 
    0x3, 0x2, 0x2, 0x2, 0x60, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x60, 0x5d, 0x3, 
    0x2, 0x2, 0x2, 0x61, 0x64, 0x3, 0x2, 0x2, 0x2, 0x62, 0x60, 0x3, 0x2, 
    0x2, 0x2, 0x62, 0x63, 0x3, 0x2, 0x2, 0x2, 0x63, 0xb, 0x3, 0x2, 0x2, 
    0x2, 0x64, 0x62, 0x3, 0x2, 0x2, 0x2, 0x65, 0x66, 0x7, 0x2f, 0x2, 0x2, 
    0x66, 0x67, 0x7, 0x5, 0x2, 0x2, 0x67, 0x68, 0x5, 0x4, 0x3, 0x2, 0x68, 
    0xd, 0x3, 0x2, 0x2, 0x2, 0x69, 0x6d, 0x7, 0x6, 0x2, 0x2, 0x6a, 0x6c, 
    0x5, 0x10, 0x9, 0x2, 0x6b, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x6f, 0x3, 
    0x2, 0x2, 0x2, 0x6d, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x6b, 0x3, 0x2, 
    0x2, 0x2, 0x6e, 0x70, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x6d, 0x3, 0x2, 0x2, 
    0x2, 0x70, 0x71, 0x7, 0x7, 0x2, 0x2, 0x71, 0xf, 0x3, 0x2, 0x2, 0x2, 
    0x72, 0x73, 0x5, 0x4, 0x3, 0x2, 0x73, 0x74, 0x5, 0xa, 0x6, 0x2, 0x74, 
    0x11, 0x3, 0x2, 0x2, 0x2, 0x75, 0x76, 0x5, 0x8, 0x5, 0x2, 0x76, 0x77, 
    0x7, 0x15, 0x2, 0x2, 0x77, 0x78, 0x7, 0x2f, 0x2, 0x2, 0x78, 0x79, 0x5, 
    0xe, 0x8, 0x2, 0x79, 0x13, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x7d, 0x5, 0x12, 
    0xa, 0x2, 0x7b, 0x7d, 0x5, 0x6, 0x4, 0x2, 0x7c, 0x7a, 0x3, 0x2, 0x2, 
    0x2, 0x7c, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x80, 0x3, 0x2, 0x2, 0x2, 
    0x7e, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x7f, 
    0x81, 0x3, 0x2, 0x2, 0x2, 0x80, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x81, 0x82, 
    0x7, 0x2, 0x2, 0x3, 0x82, 0x15, 0x3, 0x2, 0x2, 0x2, 0x83, 0x84, 0x9, 
    0x7, 0x2, 0x2, 0x84, 0x17, 0x3, 0x2, 0x2, 0x2, 0xd, 0x1c, 0x2b, 0x2e, 
    0x3b, 0x3e, 0x4f, 0x60, 0x62, 0x6d, 0x7c, 0x7e, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

PackParser::Initializer PackParser::_init;
