#include <iostream>
using namespace std;
int main()
{
    int arr[5], large, i, x;
    int arr2[6];
    i == 1;
    for (i = 0; i < 5; i++)
    {
        cout << "enter the nos. in the arrays";
        cin >> arr[i];
    }
    large = arr[0];
    for (x = 0; x < 5; x++)
    {

        for (i = 1; i < 5; i++)
        {
            if (arr[i] > large)
            {
                large = arr[i];

                //cout<<"large spotted"<<endl;
            }
        }
        //cout<<large;
        arr2[x] = large;

        cout << arr[x] << endl;
    }

    return 0;
}