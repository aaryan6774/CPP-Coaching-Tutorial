// Codesdope if else question
// Level 1
// Question 1
#include <iostream>
using namespace std;
int main()
{
    int length, breadth;
    cout << "Enter Length: " << endl;
    cin >> length;
    cout << "Enter Breadth: " << endl;
    cin >> breadth;
    if (length == breadth)
    {
        cout << "Area of Square is " << length * breadth << endl;
    }
    else
    {
        cout << "Area of Rectangle is " << length * breadth << " sq cm " << endl;
    }
}


// Question 2
#include <iostream>
using namespace std;
int main()
{
    float a, b;
    cout << "Enter First number: " << endl;
    cin >> a;
    cout << "Enter Second number: " << endl;
    cin >> b;
    if (a > b)
    {
        cout << "First Number > Second Number " << endl;
    }
    else
    {
        cout << "First Number < Second Number" << endl;
    }
}

