#include <iostream>
using namespace std;
int main()
{
    int arr[50] , n = 0, count = 0;
    cout<<"Enter size: ";
    cin>>n;
    for(int i = 0 ; i < n ; i++)
    {
        cout<<"Enter number: ";
        cin>>arr[i];
    }
    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i] < 0)
            count++;
    }
    cout<<"number of negative numbers = "<<count;
    return 0;
}