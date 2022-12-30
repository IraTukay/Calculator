#include "mathFunctions.h"
int absolute(int a) {
    if (a>=0)
        return a;
    else
        return -a;
}
double absolute(double a) {
    if (a>=0)
        return a;
    else
        return -a;
}
double reciprocalFunction(double a) {
    return (1/a);
}
double factorial(double a){
    double n=1.0;
    double i;
    for (i=1; i<=a; i++)
        n*=i;
    return n;
}
int factorial(int a){
    int n=1;
    int i;
    for (i=1; i<=a; i++)
        n*=i;
    return n;
}
int pow(int a, int b) {
    int n=1;
    for (int i=1; i<=b; i++ )
        n*=a;
    return n;
}
double pow(double a, double b) {
    double n=1.0;
    for (int i=1; i<=b; i++ )
        n*=a;
    return n;
}

double sqrt(double a) {
    if (a<0)
        throw "Error";
    else {
        double k = 0.5;
        double n = 1.0;
        double i = 1.0;
        while (i <= 20) {
            k *= (0.5 - i);
            n += k * pow(a - 1, i) / factorial(i);
            i += 1.0;
        }

        return n;
    }
}

double ln(double a) {
    double n=0.0;
    double i=1.0;
    while(i<11.0) {
        n += pow(-1.0, i - 1.0) * pow((a-1), 2.0 * i) / i;
        i+=1.0;
    }
    return n;
}

