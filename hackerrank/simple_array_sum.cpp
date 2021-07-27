#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int a,b;
    b=0;
    
    for (a=0;a<n;a++){
     cin>>arr[a];   
    }
    for (a=0;a<n;a++){
     b=arr[a]+b;
    }
    cout<<b;
    return 0;
    }
