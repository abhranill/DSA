#include<iostream>
using namespace std;
int main(){
    int n,k,l,m=0,c=0;
    cin>>n>>k;
    l=240-k;
    for(int i=1;i<=n;i++){
       // int m=0;
       m+=(i*5);
        if(m<=l){
           c++; 
        }
    }
    cout<<c<<endl;
    return 0;
}