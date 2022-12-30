
#ifndef CALCULATOR_ARITHMETICANDLOGICOPERATORS_H
#define CALCULATOR_ARITHMETICANDLOGICOPERATORS_H
#include "arithmeticAndLogicOperators.cpp"

int sum(int, int);
int sub(int, int);
int mult(int, int);
int division(int, int);
int mod(int, int);
int unaryPlus(int);
int unaryMinus(int);

bool Negation(bool);
bool conjunction(bool, bool);
bool disjunction(bool, bool);
int exclusiveOr(bool, bool);
int conjunctionNegation(bool, bool);
int disjunctionNegation(bool, bool);

#endif //CALCULATOR_ARITHMETICANDLOGICOPERATORS_H
