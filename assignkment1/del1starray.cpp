#include <iostream>
using namespace std;
int main()
{
    int arr[10], i, n, p;
    for (i = 0; i < 10; i++)
    {
        arr[i] = i;
        cout << arr[i];
    }
    cout<<endl;
    for (i = 0; i < 10; i++)
    {
        if (i >0)
        {
            cout << arr[i];
        }
        else
        {
            
            continue;
        }
    }

    return 0;
}