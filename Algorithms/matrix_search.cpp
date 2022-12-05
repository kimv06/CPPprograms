#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int arr[50][50] , m = 0, n = 0;
    int key = 0;
    cout<<"row: ";
    cin>>m;
    cout<<"column: ";
    cin>>n;
    cout<<"Enter: ";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"Key: ";
    cin>>key;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(key == arr[i][j])
            {
                cout<<"true";
                //break;
            }
        }
    }
    cout<<"false";
    return 0;
}