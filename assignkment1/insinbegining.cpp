#include <iostream>
using namespace std;
int main(){
int arr[10],i,n;
for (i=0;i<10;i++){
    arr[i]=i;
cout<<arr[i];
}
cout<<"  enter the no. to be put at the begining:";
cin>>n;
arr[0]=n;
for (i=0;i<10;i++){
    //arr[i]=i;
cout<<arr[i];
}

    return 0;
}