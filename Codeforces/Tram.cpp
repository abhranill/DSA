#include<iostream>

using namespace std;
int main(){
   int n;
   cin>>n;
   int a,b,c=0,cap=0;
   for(int i=0;i<n;i++){
       cin>>a>>b;
       c=c+b-a;
       cap=max(cap,c);
   }
    cout<<cap<<endl;
    return 0;
}