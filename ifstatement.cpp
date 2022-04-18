#include<iostream>

using namespace std;

int main ()
{
    int time=0;
    cout<<"Enter time: ";
    cin>>time;
    if(time<12){
        cout<<"GOOD MORNING";
    }
    else if(time>=12&&time<16){
        cout<<"GOOD EVENING";
    }
    else if(time>=16&&time<20){
        cout<<"GOOD EVENING";
    }
    else{
        cout<<"GOOD NIGHT";
     }
}
    
