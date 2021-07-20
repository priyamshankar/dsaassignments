#include <iostream>
using namespace std;
int main(){

int arr[8];
int i;
int chk;
for (i=0;i<3;i++){
    cout<<"enter the no."<<endl;
    cin>>arr[i];
}
cout<<"enter the no. to search"<<endl;
cin>>chk;
for (i=0;i<3;i++){
    if (chk==arr[i]){
        cout<<chk<<" found"<<endl;
        break;
}
else{cout<<chk<<" not found"<<endl;}
}
    return 0;
}