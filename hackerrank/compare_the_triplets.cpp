#include <iostream>
using namespace std;
int main(){
    int x,y,i,p,q;
    x=3;
    y=3;
    p=0;
    q=0;
    int a[x];
    int b[y];
    for (i=0;i<x;i++){
        cin>>a[i];
    }
        for (i=0;i<x;i++){
            cin>>b[i];
        }
            for (i=0;i<x;i++){
                if (a[i]>b[i]){
                    p++;
                }
                if (a[i]<b[i]){
                    q++;
                }
                else{
                    continue;
                }
            }
            cout<<p<<" "<<q;
    return 0;
}
