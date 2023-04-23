/* If Else and Switch Case Statement
   C++ Control Structure
1.)Sequence Structure Entry --> Action1 --> Action2 --> Exit
2.)Selection Structure --> Entry --> T/F --> Action --> Exit
3.)Loop Structure --> Entry --> condition --> Action --> loop
*/
/*
1.) if - else statement -->
if(i<3)
{
    cout<<"i";
    i++;
}
2.) if-else ladder -->
3.) Switch case -->
switch(expression)
{
    case 1:
    {
        action1;
    }
    default
    {

    }
}
*/
// Selection Controlled Structure
#include <iostream>
using namespace std;
int main()
{
    int age;
    // cout << "This is a tutorial of control statement";
    cout << "Tell me your age: " << endl;
    cin  >> age;
    if ((age < 18) && (age>0))
    {
        cout << "You cannot come to my party" << endl;
    }
    else if (age == 18)
    {
        cout << "You can attain party with kid pass" << endl;
    }
    else if (age<1)
    {
        cout<<"you are not yet born"<<endl;
    }

    else
    {
        cout << "You can attian party" << endl;
    }

    return 0;
}


// Selection Control structure: Switch Case
// switch (age)
// {
// case 18:
//     cout<<"You are 18";
//     break;

// default:
//     break;
// }
/****************Switch Case*************/
#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter Your age: "<<endl;
    cin>>age;
    switch (age)
    {
    case 18:
    cout<<"Your age is 18"<<endl;
        break;
    case 22:
    cout<<"Your age is 22"<<endl;
        break;
    case 69:
    cout<<"Your age is 69"<<endl;
        break;

    default:
    cout<<"Your are is not given above"<<endl;
        break;
    }
    cout<<"Thanks"<<endl;
}

