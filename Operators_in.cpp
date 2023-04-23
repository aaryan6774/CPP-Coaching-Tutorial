/* Operator in CPP
A) Unary operator

Increament operator
increment operator --> ++ Increase the integer value of variable by one.
decrement operator --> -- Decrease the integer value of variable by one.
*/

#include <iostream>
using namespace std;
int main()
{
    int a, b;
    // double a = 10, b = 15;
    cout<<"Enter Value of a: "<<endl;
    cin>>a;
    cout<<"Enter Value of b: "<<endl;
    cin>>b;
    cout << "a++ is " << a++ << endl;
    cout << "++a is " << ++a << endl;
    cout << "b-- is " << b-- << endl;
    cout << "--b is " << --b << endl;
}

// Binary Operator
#include <iostream>
using namespace std;
int main()
{
    int a = 12, b = 4;
    cout << "a / b " << a / b << endl;
    cout << "a % b " << a % b << endl;
}


// Relational Operator
/*Is-Equal-To --> == Checks if both operands are equal --> int a = 3, b = 6 a == b return false
  Greater - Than --> > Checks if first operand is greater than the second operand
  Greater - Than - or Equal - to >= --> Checks if first operaand is greater than or equal to second operand
  Less - than --> < Checks if first operand is lesser than second operand
  Less - than - or - equal - to --> <= Checks if first operand is lesser than or equal to second operand
  Not - Equal - To --> != Checks if both operand are not equal
*/

#include <iostream>
using namespace std;
int main()
{
    int a = 6, b = 4;
    cout << "a == b is " << (a == b) << endl;
    cout << "a > b is  " <<  (a > b) << endl;
    cout << "a >= b is " << (a >= b) << endl;
    cout << "a < b is  " <<  (a < b) << endl;
    cout << "a <= b is " << (a <= b) << endl;
    cout << "a != b is " << (a != b) << endl;
}

/*
                              LOGICAL OPERATOR
  && --> retuen true only if all operands are true or non - zero. --> logical AND
  || --> Return true if either of operands is true or non - zero. --> logical OR
  !  --> return true if the operand is false or zero.             --> logical NOT 

*/

#include<iostream>
using namespace std;
int main(){
    int a = 6, b = 4;
    cout<<"a && b is "<<(a&&b)<<endl;
    cout<<"a || b is "<<(a||b)<<endl;
    cout<<"!b is "<<(!b)<<endl;
}
