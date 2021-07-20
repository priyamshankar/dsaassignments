#include <iostream>
using namespace std;
int main()
{
    int arr[10], i, n, p,x;
    for (i = 0; i < 10; i++)
    {
        arr[i] = i;
        cout << arr[i];
    }
    cout<<endl;
cout<<"enter the position to delete"<<endl;
cin>>x;
    for (i = 0; i < 10; i++)
    {
        if (i==p)
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