#include <iostream>
#include "arithmeticAndLogicOperators.h"
#include "mathFunctions.h"
#include "bitWise.h"
#include "comparison.h"
#include "trigometricFunctions.h"
using namespace std;
enum operations {
    add = '+',
    subtract = '-',
    multiply = '*',
    divide = '/',
    remainder = '%',
    unary_plus = '+',
    unary_minus = '-',
    negation = '!',
    conjuntion = '^',
    disjuntion = 'v',
    exclusive_Or = 'o',
    conjunction_Negation = 'c',
    disjunction_Negation = 'n',

    absolute_value = '|',
    sqr_root = 'V',
    reciprocal = 'r',

    bitwise_Not = '~',
    bitwise_And = '&',
    bitwise_Or = '|',
    bitwise_ExclusiveOr = 'O',
    bitwise_ConjunctionNegation = 'C',
    bitwise_DisjunctionNegation = 'D',
    left_Shift = '<',
    right_Shift = '>',
    fact = 'f',
    powab = 'p',
    Cosinus = '1',
    Sinus = '2',
    tangens = 't',
    Cotangens = 'k',
    Loge = 'e',
    Ascending = 'a',
    Descending = 'd',
    is_Equal = 'q',
    is_NotEqual = '!',
};
int BinaryResult(int a, int b, operations sign) {
    switch (sign) {
        case operations::add:
            return sum(a,b);
        case operations::subtract:
            return sub(a,b);
        case operations::multiply:
            return mult(a,b);
        case operations::divide:
            return division(a,b);
        case operations::remainder:
            return mod(a,b);
        case operations::conjuntion:
            return conjunction(a,b);
        case operations::disjuntion:
            return disjunction(a,b);
        case operations::exclusive_Or:
            return exclusiveOr(a,b);
        case operations::conjunction_Negation:
            return conjunctionNegation(a,b);
        case operations::disjunction_Negation:
            return disjunctionNegation(a,b);

        case operations::bitwise_And:
            return bitwiseAnd(a,b);
        case operations::bitwise_Or:
            return bitwiseOr(a,b);
        case operations::bitwise_ExclusiveOr:
            return bitwiseExclusiveOr(a,b);
        case operations::bitwise_ConjunctionNegation:
            return bitwiseConjunctionNegation(a,b);
        case operations::bitwise_DisjunctionNegation:
            return bitwiseDisjunctionNegation(a,b);

        case operations::left_Shift:
            return leftShift(a,b);
        case operations::right_Shift:
            return rightShift(a,b);
        case operations::powab:
            return pow(a, b);
        case operations::Ascending:
            return ascending(a,b);
        case operations::Descending:
            return descending(a,b);
        case operations::is_NotEqual:
            return isNotEqual(a,b);
        case operations::is_Equal:
            return isEqual(a,b);
    }
}

bool BinaryResult(double a, double b, operations sign) {
    switch (sign) {
        case operations::Ascending:
            return ascending(a, b);
        case operations::Descending:
            return descending(a, b);
        case operations::is_NotEqual:
            return isNotEqual(a, b);
        case operations::is_Equal:
            return isEqual(a, b);
        case operations::add:
            return sum(a,b);
        case operations::subtract:
            return sub(a,b);
        case operations::multiply:
            return mult(a,b);
        case operations::divide:
            return division(a,b);

    }
}

    int UnaryResult(int a, operations sign) {
        switch (sign) {
            case operations::unary_plus:
                return unaryPlus(a);
            case operations::unary_minus:
                return unaryMinus(a);
            case operations::negation:
                return Negation(a);
            case operations::absolute_value:
                return absolute(a);

            case operations::bitwise_Not:
                return bitwiseNot(a);
            case operations::fact:
                return factorial(a);

        }
    }
    double UnaryResult(double a, operations sign) {
        switch (sign) {
            case operations::unary_plus:
                return unaryPlus(a);
            case operations::unary_minus:
                return unaryMinus(a);
            case operations::negation:
                return Negation(a);
            case operations::absolute_value:
                return absolute(a);
            case operations::sqr_root:
                return sqrt(a);
            case operations::reciprocal:
                return reciprocalFunction(a);
            case operations::fact:
                return factorial(a);
            case operations::Cosinus:
                return cosin(a);
            case operations::Sinus:
               return sinus(a);
            case operations::tangens:
               return tan(a);
            case operations::Cotangens:
                return cotan(a);
            case operations::Loge:
                return ln(a);

        }
    }





