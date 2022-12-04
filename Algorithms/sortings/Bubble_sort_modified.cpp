#include <iostream>
using namespace std;
class Sorting
{
    int* arr , n = 0 ;
    public:
        Sorting(int);
        void input();
        void sort();
        void display();
};
Sorting::Sorting(int x)
{
    n = x;
    arr = new int[n];
}
void Sorting::input()
{
    cout<<"Enter the elements of the array: "<<endl;
    for (int i = 0; i < n; i++)
    {
        //cout<<"Enter number: ";
        cin>>arr[i];
    }
}
void Sorting::sort()
{
    int f = 0;
    for (int i = 0; i < n-1; i++)
    {
        f = 0;
        for (int j = 0; j < n-1-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                f = 1;
            }
        }
        /*if( f == 0)
            cout<<"\nArray already sorted!"<<endl;
        */
    }
}
void Sorting::display()
{
    //cout<<"The array: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;    
}
int main()
{
    Sorting ob(5);
    ob.input();
    cout<<"The given array: "<<endl;
    ob.display();
    ob.sort();
    cout<<"The sorted array: "<<endl;
    ob.display();
    return 0;
}