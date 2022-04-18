#include<iostream>

using namespace std;

int main ()
{ 
    int a;
    a=5;
    switch(a)
    {
        case 1: cout<<"blah";
        break;
        case 5: cout<<"correct";
        break;
        case 6: cout<<"fallthrough";
        break;
    }
}