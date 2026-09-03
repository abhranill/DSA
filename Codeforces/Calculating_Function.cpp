#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
   //if n is even f(n) returns n/2 and in case of odd f(n) returns -(n+1)/2//
       if(n%2==0){
           cout<<n/2<<endl;
       } 
       else{
           cout<<(-(n+1)/2)<<endl;
       }
       return 0;
    }