#include "bitWise.h"
int bitwiseNot(int a) {
   return ~a;
}
int bitwiseAnd(int a, int b){
    return a & b;
}
int bitwiseOr(int a, int b) {
    return a | b;
}
int bitwiseExclusiveOr(int a, int b) {
    return a^b;
}
int bitwiseConjunctionNegation(int a, int b) {
    return !(bitwiseAnd(a, b));
}
int bitwiseDisjunctionNegation(int a, int b) {
    return  !(bitwiseOr(a, b)) ;
}
int leftShift(int number, int shift) {
    return number*pow(2,shift);
}
int rightShift (int number, int shift) {
    return number/pow(2,shift);
}
//int leftShift(int number, int shift, bool isLogic) {

//}
