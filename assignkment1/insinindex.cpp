#include <iostream>
using namespace std;
int main(){
int arr[10],i,n,p;
for (i=0;i<10;i++){
    arr[i]=i;
cout<<arr[i]<<endl;
}
cout<<"  enter the no. to be put::";
cin>>n;
cout<<"\ninsert the position of the array::";
cin>>p;
arr[p]=n;
for (i=0;i<10;i++){
    //arr[i]=i;
cout<<arr[i]<<endl;
}

    return 0;
}