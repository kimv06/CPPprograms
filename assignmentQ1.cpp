#include<iostream>

using namespace std;

int main (){
    int a;
    int b;
    char c;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    cout<<"Enter the operation to be performed: ";
    cin>>c;
    switch(c)
    {
        case '+': cout<<a+b;
        break;
        case '-': cout<<a-b;
        break;
        case '*': cout<<a*b;
        break;
        case '/': 
        if(b==0){
            cout<<"OPERATION NOT POSSIBLE.";
            break;
        }
        else
        cout<<a/b;
        break;
        default: cout<<"WRONG INPUT";
    }
}