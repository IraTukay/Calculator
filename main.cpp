#include <iostream>
#include "inputOutputFunctions.h"

using namespace std;

int main() {
    cout << "   Calculator Console Application" << endl << endl;

    int typeOfOperation;
    cout << "       What operation:" << endl << "Binary(2)   or    Unary(1) ?" << endl << endl;
    cin >> typeOfOperation;
    
  char oper;
      cout << "Please enter the operation to perform. "
           << endl;
      cin >> oper;
      operations sign;
      sign = static_cast<operations>(oper);
      char typeOfNumber;
      cout << "Please enter the type of number"
           << endl;
      cout << "double - d        int - i"
           << endl;
      cin >> typeOfNumber;


      if (typeOfOperation == 1){
          if (typeOfNumber == 'i') {
              int x = 0;
              cout << " enter x" << endl;
              cin >> x;
              cout << UnaryResult(x, sign);
          }
          else if (typeOfNumber == 'd') {
              double x1 = 0.0;
              cout << " enter x" << endl;
              cin >> x1;
              cout << UnaryResult(x1, sign);
          }
      }
      else if (typeOfOperation == 2) {

          if (typeOfNumber == 'i') {
              cout << "Please enter x and y:"
                   << endl;
              int x, y;
              cin >> x ;
              cout << endl;
              cin >> y;
              cout << BinaryResult(x, y, sign);
          }
          if (typeOfNumber == 'd') {
              double x, y;
              cout << "Please enter x and y:"
                   << endl;

              cin >> x ;
              cout << endl;
              cin >> y;
              cout << BinaryResult(x, y, sign);
          }
      }


    return 0;
}

