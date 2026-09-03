#include<iostream>
using namespace std;
int main (){
int t;
cin>>t;
while(t--){
long long n,w;
cin>>n>>w;
long long groups=n/w;
long long remaining=n%w;
long long removed=groups*(w-1);
if(remaining<w){
removed+=remaining ;
}
else{
removed+=(w-1);
}
cout<<removed<<endl;
}
return 0 ;
}