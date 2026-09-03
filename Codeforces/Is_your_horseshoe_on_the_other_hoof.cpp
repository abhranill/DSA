#include<iostream>
using namespace std;
int main(){
  int a,b,c,d,e=0;
  cin>>a>>b>>c>>d;
  if(a==b){
      e++;
  }
  if(a==c || b==c){
      e++;
  }
  if(a==d || b==d || c==d){
      e++;
  }
    cout<<e<<endl;
    return 0;
}