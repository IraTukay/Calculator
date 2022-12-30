
#include "arithmeticAndLogicOperators.h"

int sum(int a, int b){
    return a+b;
}
int sub (int a, int b){
    return a-b;
}
int mult(int a, int b) {
    return a*b;
}
int division(int a, int b) {
    return a / b;
}
int mod(int a, int b) {
    return a % b;
}
int unaryPlus(int a) {
    return a;
}
int unaryMinus(int a) {
    return a*(-1);
}
double sum(double a, double b){
    return a+b;
}
double sub (double a, double b){
    return a-b;
}
double mult(double a, double b) {
    return a*b;
}
double division(double a, double b) {
    return a / b;
}
double unaryPlus(double a) {
    return a;
}
double unaryMinus(double a) {
    return a*(-1);
}


bool Negation(bool a) {
    return !a;
}
bool conjunction(bool a, bool b)  {
    return (a && b);
}
bool disjunction(bool a, bool b) {
    return (a || b);
}
int exclusiveOr(bool a, bool b) {
    return (a && !b) || (!a && b);
}
int conjunctionNegation(bool a, bool b) {
    return ( !a || !b );
}
int disjunctionNegation(bool a, bool b) {
    return ( !a && !b );
}
