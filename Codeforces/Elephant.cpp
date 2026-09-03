#include<iostream>
using namespace std;
int main(){
   int n,a,b;
   cin>>n;
   if(n>5){
       if(n%5!=0){
      a= n/5;
      b= a+1;
       cout<<b<<endl;
       }
       else{
           a=n/5;
           cout<<a<<endl;
       }
   }
   else if(n>0 && n<=5){
       cout<<1<<endl;
   }
   
    return 0;
}