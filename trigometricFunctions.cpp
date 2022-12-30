#include "mathFunctions.h"
double cosin(double x){
    double n=1.0;
    double i=1.0;
    while(i<11.0) {
        n += pow(-1.0, i) * pow(x, 2.0 * i) / factorial(2.0 * i);
        i+=1.0;
    }
    return n;
}
double sinus(double x){
    double n=0.0;
    double i=1.0;
    while(i<11.0) {
        n += pow(-1.0, i - 1.0) * pow(x, 2.0 * i - 1.0) / factorial(2.0 * i - 1.0);
        i+=1.0;
    }
    return n;
}
double tan(double x) {
    double s = sinus(x);
    double c = cosin(x);
    return s/c;
}
double cotan(double x) {
    double s = sinus(x);
    double c = cosin(x);
    return c/s;
}