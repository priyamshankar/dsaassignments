#include <iostream>
using namespace std;
int main()
{
    int arr[10];
    int i, t, x, j, n;
    i = n;
    n = 5;

    cout << "enter the nos in the array"
         << ":";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (i = 1; i < n +1; i++)
    {
        j=i;
        while (j > 0 && arr[j] < arr[j - 1])
        {

            t = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = t;
            j--;
            //cout<<arr[i];
            
        }
    }
    for (i = 0; i < n; i++)
    {
        //arr[i];
        cout << arr[i] << ",";
    }

    return 0;
}