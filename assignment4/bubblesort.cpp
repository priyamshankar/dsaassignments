#include <iostream>
using namespace std;
int main()
{
    int arr[10];
    int i,t,x,j,n;
    i=n;
    n=5;

    cout << "enter the nos in the array"
         << ":";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
for (i=0;i<n;i++){
    for (j=0;j<n;j++){
        if (arr[j]>arr[j+1]){
            t=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=t;
            //cout<<arr[i];
            t=0;
        }
    }
}
for (i=0;i<n;i++){
    //arr[i];
    cout<<arr[i]<<",";
}

    return 0;
}