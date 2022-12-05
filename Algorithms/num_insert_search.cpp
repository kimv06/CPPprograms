#include <iostream>
using namespace std;
int main()
{
    int arr[50], n = 0, index = -1, key = 0;
    cout << "Enter size: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter number: ";
        cin >> arr[i];
    }
    cout << "Enter key: ";
    cin >> key;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            index = i;
            break;
        }
    }
    if (index == -1)
    {
        n++;
        for (int i = 0; i < n; i++)
        {
            if (key > arr[i])
            {
                index = i + 1;
            }
            else if (key < arr[i])
            {
                index = i;
                break;
            }
        }
    }
    cout << "index = " << index;
    return 0;
}