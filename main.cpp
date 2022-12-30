#include <iostream>
#include "inputOutputFunctions.cpp"

int main() {
    cout << "   Calculator Console Application" << endl << endl;


    int typeOfOperation;

    char oper;
    cout << "       What operation:" << endl << "Binary(2)   or    Unary(1) ?" << endl << endl;
    cin >> typeOfOperation;

    if (typeOfOperation == 1) {
        cout << "Please enter the operation to perform. "
             << endl;
        cin >> oper;
        char typeOfNumber;
        cout << "Please enter the type of number"
             << endl;
        cout << "double - d        int - i"
             << endl;
        cin >> typeOfNumber;

        operations sign;
        sign = static_cast<operations>(oper);

        if (typeOfNumber == 'i') {
            int x = 0;
            cout << " enter x" << endl;
            cin >> x;
            cout << UnaryResult(x, sign);
        } else if (typeOfNumber == 'd') {
            double x1 = 0.0;
            cout << " enter x" << endl;
            cin >> x1;
            cout << UnaryResult(x1, sign);
        }
    }
    if (typeOfOperation == 2) {
        cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b"
             << endl;
        int x, y;
        cin >> x >> oper >> y;

        operations sign;
        sign = static_cast<operations>(oper);

        cout << BinaryResult(x, y, sign);
    }



    return 0;
}
