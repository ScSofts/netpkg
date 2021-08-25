
// Generated from Pack.g4 by ANTLR 4.9

#pragma once


#include "antlr4-runtime.h"
#include "PackVisitor.h"


/**
 * This class provides an empty implementation of PackVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  PackBaseVisitor : public PackVisitor {
public:

  virtual antlrcpp::Any visitHexConstant(PackParser::HexConstantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType(PackParser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDecoratorDef(PackParser::DecoratorDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDecoratorCall(PackParser::DecoratorCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression(PackParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArguement(PackParser::ArguementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPackBlock(PackParser::PackBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPackLine(PackParser::PackLineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPackDef(PackParser::PackDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStart(PackParser::StartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInnerFunction(PackParser::InnerFunctionContext *ctx) override {
    return visitChildren(ctx);
  }


};

