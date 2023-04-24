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


// Question 5
 #include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float a, b, c, d;
    // d = b*b - (4*a*c)
    // For Roots --> (-b + sqrt(d))/2*a, (-b - sqrt(d))/2*a
    cout << "Enter Value of a: " << endl;
    cin >> a;
    cout << "Enter Value of b: " << endl;
    cin >> b;
    cout << "Enter Value of c: " << endl;
    cin >> c;
    d = b * b - (4 * a * c);
    float Root_1 = (-b + sqrt(b * b - 4 * a * c)) / 2 * a;
    float Root_2 = (-b - sqrt(d)) / 2 * a;
    cout << "Root 1 of given quadratic equation is: " << Root_1 << endl;
    cout << "Root 2 of given quadratic equation is: " << Root_2 << endl;
    if (d < 0)
    {
        cout << "Imaginary Roots" << endl;
    }
    if (d == 0)
    {
        cout << "Equal Roots" << endl;
    }
    if (d > 0)
    {
        cout << "Real Roots" << endl;
    }
}

// Question 4
#include <iostream>
using namespace std;
int main()
{
    char c;
    cout << "Enter a Character: " << endl;
    cin >> c;
    cout << "ASCII value of your enterd corrector is: " << int(c) << endl;
    if (65 >= int(c) || int(c) <= 90)
    {
        cout << " Capital letter " << endl;
        if (97 >= int(c) <= 122)
        {
            cout << " Small letter " << endl;
        }
    }
    // if (97 >= int(c) <= 122)
    // {
    //     cout<<" Small letter "<<endl;
    // }
    // else
    // {
    //     cout<<" Other Character "<<endl;
    // }
}


// Question 3
// #include <iostream>
// using namespace std;
// int main()
// {
//     /*   sales              comm. rate
//       30001 onwards              15%
//       22001-30000                10%
//       12001-22000                7%
//       5001-12000                 3%
//        0-5000                    0% */
//     int sales;
//     cout << "Enter Your Sales of last Month in Rupees: " << endl;
//     cin >> sales;
//     if (sales >= 30001)
//     {
//         cout << "Your Comm. rate is 15% "
//              << "and you earned " << (sales * 0.15) << endl;
//     }
//     else if (sales >= 22001 && sales <= 30000)
//     {
//         cout << "Your Comm. rate is 10% "
//              << "and you earned " << (sales * 0.10) << endl;
//     }
//     else if (sales >= 12001 && sales <= 22000)
//     {
//         cout << "Your Comm. rate is 7% "
//              << "and you earned " << (sales * 0.07) << endl;
//     }
//     else if (sales >= 5001 && sales <= 12000)
//     {
//         cout << "Your Comm. rate is 3% "
//              << "and you earned " << (sales * 0.03) << endl;
//     }
//     else if (sales >= 0 && sales <= 5000)
//     {
//         cout << "Your Comm. rate is 0% "
//              << "and you earned " << (sales * 0.0) << endl;
//     }
//     else
//     {
//         cout << "Your are of no use to our organisation. Hence You are fired." << endl;
//     }
// }


