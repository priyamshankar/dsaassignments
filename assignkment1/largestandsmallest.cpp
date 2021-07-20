
//to find the largest and smallest no. in the array

#include <iostream>
using namespace std;
int main(){
int arr[5],small,large,i;
i==1;
for (i=0;i<5;i++){
    cout<<"enter the nos. in the arrays";
    cin>>arr[i];
}
small=arr[0];
large=arr[0];

for (i=1;i<5;i++){
    if (arr[i]>large){
        large=arr[i];
        //cout<<"large spotted"<<endl;
    }
    //else{large=arr[0];}
    //cout<<"loop check"<<endl;
}
for (i=1;i<5;i++){
    if (arr[i]<small){
        small=arr[i];
        //cout<<"large spotted"<<endl;
    }
    //else{small=arr[0];}
    //cout<<"loop check"<<endl;
}
cout<<"smallest no. is : "<<small<<endl;
cout<<"largest no. is : "<<large<<endl;
    return 0;
}