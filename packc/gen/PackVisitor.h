
// Generated from Pack.g4 by ANTLR 4.9

#pragma once


#include "antlr4-runtime.h"
#include "PackParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by PackParser.
 */
class  PackVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by PackParser.
   */
    virtual antlrcpp::Any visitHexConstant(PackParser::HexConstantContext *context) = 0;

    virtual antlrcpp::Any visitType(PackParser::TypeContext *context) = 0;

    virtual antlrcpp::Any visitDecoratorDef(PackParser::DecoratorDefContext *context) = 0;

    virtual antlrcpp::Any visitDecoratorCall(PackParser::DecoratorCallContext *context) = 0;

    virtual antlrcpp::Any visitExpression(PackParser::ExpressionContext *context) = 0;

    virtual antlrcpp::Any visitArguement(PackParser::ArguementContext *context) = 0;

    virtual antlrcpp::Any visitPackBlock(PackParser::PackBlockContext *context) = 0;

    virtual antlrcpp::Any visitPackLine(PackParser::PackLineContext *context) = 0;

    virtual antlrcpp::Any visitPackDef(PackParser::PackDefContext *context) = 0;

    virtual antlrcpp::Any visitStart(PackParser::StartContext *context) = 0;

    virtual antlrcpp::Any visitInnerFunction(PackParser::InnerFunctionContext *context) = 0;


};

