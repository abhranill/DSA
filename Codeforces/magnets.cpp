#include<iostream>
#include<string>
using namespace std;
int main(){
     int n,ans=1;
     cin>>n;
     string a,b;
     cin>>a;
     for(int i=1;i<n;i++){
         cin>>b;
         if(a!=b){
             ans++;
         }
         a=b;
     }
     cout<<ans<<endl;
       return 0;
    }