#ifndef NOTATIONS_H
#define NOTATIONS_H
#include "../common/stack.h"
#include "../common/queue.h"
#include "expressionpart.h"
namespace romanovich
{
  void getPostfixFromInfix(Queue< ExpPart > &queue, Stack< ExpPart > &pStack, Queue< ExpPart > &pQueue);
  void calcPostfixExpression(Queue< ExpPart > &postfixQueue, Stack< ExpPart > &stack, Stack< ExpPart > &pStack);
  Queue< ExpPart > splitLine(const std::string &string);
}
#endif
