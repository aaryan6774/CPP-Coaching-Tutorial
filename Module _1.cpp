// Question 1
/*#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter First Number: "<< endl;
    cin>>a;
    cout<<"Enter Second Number: "<< endl;
    cin>>b;
    cout<<"a + b: "<<a+b <<endl;
    cout<<"a - b: "<<a-b <<endl;
    cout<<"a * b: "<<a*b <<endl;
    cout<<"a / b: "<<a/b <<endl;
    cout<<"a % b: "<<a%b <<endl;
} */

// Question 2
/* #include<iostream>
using namespace std;
int main(){
    int P, R, T;
    cout<<"Enter Value Of P: "<<endl;
    cin>>P;
    cout<<"Enter Value Of R: "<<endl;
    cin>>R;
    cout<<"Enter Value Of T: "<<endl;
    cin>>T;
    cout<<"The Value Of S.I is: "<<(P*R*T)/100 << endl;

}
*/

// Question 3
/* #include<iostream>
using namespace std;
int main(){
    int item_number, price, quantity;
    cout<<"Enter Item Number of your desired Product: "<<endl;
    cin>> item_number;
    cout<<"Enter Quantity: "<<endl;
    cin>> quantity;
    price = 100;
    float discount;
    discount = (quantity*price) * 0.05;
    cout<<"Your Discounted Price: "<< (quantity*price) - discount <<endl;
}
*/

// Question 4
/* #include<iostream>
using namespace std;
int main(){
    float C, F;
    cout<<"Enter Temperature In Celcius: "<<endl;
    cin>>C;
    int temp = ( C * 9/5) + 32;
    cout<<"Your Body Temperature in Farenheit is: "<< temp;
}
*/

// Question 5
/*#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float height, base, hypo;
    cout << "Enter Height Dimension: " << endl;
    cin >> height;
    cout << "Enter Base Dimension: " << endl;
    cin >> base;
    hypo = sqrt(height * height + base * base);
    cout << "Height of hypo is: " << hypo;
}
*/

// Question 6
/*#include <iostream>
using namespace std;
int main(){
    int r;
    cout<<"enter radius: "<<endl;
    cin>>r;
    int area, parameter;
    area = 3.14*r*r;
    parameter = 2*3.14*r;
    cout<<"Area: "<< area<<endl;
    cout<<"Parameter: "<<parameter<<endl;
    return 0;
}
*/

// Question 7

/*#include<iostream>
using namespace std;
int main(){
    int a = 5;
    // cout<<"Enter Value of a: "<<endl;
    // cin>>a;
    cout<<"First: "<<a<<endl;
    cout<<"Second: "<<2*a<<endl;
    cout<<"third: "<<2*a - 1<<endl;
}
*/

// Question 8
/* #include <iostream>
using namespace std;
int main()
{
    cout << "Max Marks Per subject: 100" << endl;
    float sub1, sub2, sub3;
    cout << "Enter Marks of Subject 1: " << endl;
    cin >> sub1;
    cout << "Enter Marks of Subject 2: " << endl;
    cin >> sub2;
    cout << "Enter Marks of Subject 3: " << endl;
    cin >> sub3;
    cout << "Total marks Obtain: " << sub1 + sub2 + sub3;
    cout << "Total Marks Obtain: 300" << endl;
    float percentage = ((sub1 + sub2 + sub3) / 300) * 100;
    cout << "Your Percentage: " << percentage;
} */

// Question 9
/*#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, e, f;
    cout << "Enter 2 numbers" << endl;
    cin >> a;
    cin >> b;
    c = a * a;
    d = a * a * a;
    e = b * b;
    f = b * b * b;
    cout << "Your Result" << c << d << e << f << endl;
}
*/
// question 11
/*#include <iostream>
using namespace std;
int main()
{
    int area, base, height;
    cout << "Enter Height and Base of Triangle" << endl;
    cin >> height >> base;
    area = 0.5 * height * base;
    cout << "area of triangle is: " << area << " square cm ";
    return 0;
}
*/

// Question 13
/*#include <iostream>
using namespace std;
int main()
{
    int players;
    cout<<"Enter Total Numbers of players entered"<<endl;
    cin>>players;
    cout<<"Total players entered: " << (players/5) + 1 << endl;
    cout<<"Total Players Who did'nt played: "<<((players/5)+1)*5 - players;
}
*/
// Questiom 14

