// question 1;
#include<iostream>
using namespace std;
int main(){
    float C, F;
    char Temp;
    char f, c;
    cout<<"Enter(Yes/No) Your Desired Unit to measure Temperature: "<<endl;
    cin>>Temp;
    if (Temp == c)
    {
        cout<<"Eneter Temperature in F: "<<endl;
        cin>>F;
        cout<<"Tempetaure in C: "<< (32*F - 32)*5/9;

    }
    else
    {
        cout<<"Your Tempetature in F: "<<(C*5/9)+32;

    }

}


// Question 4
#include <iostream>
using namespace std;
int main()
{
    int year, leap_year;
    // If number is Divisible by 4 then it is a leap year
    cout << "Enter Year Starting from 1000 onwards: " << endl;
    cin >> year;
    leap_year = year%4;
    if (leap_year == 0)
    {
        cout<<"It is a leap year"<<endl;
    }
    else
    {
        cout<<"It is not a leap year"<<endl;
    }

}


// Question 7 Part 1
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "enter value of a: " << endl;
    cin >> a;
    cout << "enter value of b: " << endl;
    cin >> b;
    cout << "enter value of c: " << endl;
    cin >> c;
    if (a < b && b < c)
    {
        cout << ("a < b < c") << endl;
    }
    if (a < b && b > c || a < c)
    {
        cout << ("a < c < b") << endl;
    }
    if (a > b && b > c)
    {
        cout << ("a > b > c") << endl;
    }
    if (a == b && b == c)
    {
        cout << ("a = b = c") << endl;
    }
    if (a > b && b < c || a < c)
    {
        cout << ("b < a < c") << endl;
    }

    else
    {
        cout << "Invalid Operation" << endl;
    }
}


// Question 7 Part 2
#include <iostream>
using namespace std;
int main()
{
    float a, b, c;
    cout<< "Enter a: " << endl;
    cin >> a;
    cout<< "Enter b: " << endl;
    cin >> b;
    cout<< "Enter c: " << endl;
    cin >> c;
    if (a<b<c)
    {
        cout<<"a < b < c"<<endl;
        
    }
    else
    {
        cout<<"Operator Not Found"<<endl;
    }
    
}


// Question 8
#include <iostream>
using namespace std;
int main()
{
    float length, breadth;
    cout<<"Enter Length: "<<endl;
    cin>>length;
    cout<<"Enter breadth: "<<endl;
    cin>>breadth;
    float area = length*breadth;
    float peremeter = 2*(length+breadth);
    if (length != breadth)
    {
        cout<<"It is a rectangle."<<endl;
        cout<<"Area of rectangle = "<<area<<endl;
        cout<<"Peremeter of rectangle = "<<peremeter<<endl;
        if (area > peremeter)
        {
            cout<<"area > peremeter"<<endl;
        }
        else{
            cout<<"peremeter > area"<<endl;
        }
    }
    else{
        cout<<"It is a Square."<<endl;
    }
    


}
