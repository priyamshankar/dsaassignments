
//to find the largest and smallest no. in the array

#include <iostream>
using namespace std;
int main()
{
    int arr[5], large, i, n, j, t;
    i == 1;
    for (i = 0; i < 5; i++)
    {
        cout << "enter the nos. in the arrays";
        cin >> arr[i];
    }
    
    large = arr[0];
    for (j > 0; i < 5; j++)
    {

        for (i = 1; i < 5; i++)
        {
            if (arr[i] > large)
            {
                large = arr[i];
                n++;
            }
        }
        t = arr[j];

        arr[j] = large;
        arr[n] = t;
        cout << arr[j];
    }
    // for (i>0;i<5;i++){
    //     cout<<arr[i];
    //}
    return 0;
}