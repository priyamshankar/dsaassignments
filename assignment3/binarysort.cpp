#include <iostream>
using namespace std;
int main()
{
    int i, n, s, x, y, v;
    int arr[8];
    n = 1;
    for (i = 0; i < 8; i++)
    {
        n = n * 2;

        arr[i] = n;
        cout << arr[i] << ",";
    }
    x = 0;
    y = 7;
    //cout <<arr[(x+y)/2];
    cout << "\n enter the no. to search " << endl;
    cin >> s;
    i = 1;

    while (i != 0)

    {
        v = (x + y) / 2;
        if (arr[(x + y) / 2] == s)

        {
            cout << "entry exist at " << (((x + y) / 2) + 1) << endl;
            i = 0;
            //cout << "first if";
        }
        else if (arr[v] > s)
            ;
        {
            x = 7;
            y = v + 1;
            //cout << "second if" << x << "," << y;
            //break;
        }
        if (arr[(x + y) / 2] == s)

        {
            cout << "entry exist at " << (((x + y) / 2) + 1) << endl;
            i = 0;
            //cout << "first if";
        }
        else if (arr[v] < s)
            ;
        {
            x = 0;
            y = s - 1;
        }
    }

    return 0;
}