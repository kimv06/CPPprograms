#include<iostream>

using namespace std;

int main (){ 
    int N=0;
    int i=0;
    int j=0;
    cout<<"Enter the size of array:";
    cin>>N;
    int a[N]={0};
    cout<<"Enter the values to be stored inside the array: \n";
    for (i=0;i<N;i++){
        cout<<"Enter a number: ";
        cin>>a[i];
    }
    cout<<"\n\n";
    int frequency[N]={0};
    for(i=0;i<N;i++){
        if(frequency[i]==1)
        continue;
        int count=0;
        for(j=0;j<N;j++){
            if(a[i]==a[j]){
                frequency[j]=1;
                count++;
            }
        }
        cout<<"Frequency of"<<a[i]<<":"<<count<<"\n";
    }
}