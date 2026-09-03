#include <iostream>
using namespace std;
int main() {
 int n;
 cin>>n;
 int x=0;
 string s;
 for(int i=0;i<n;i++){
     cin>>s;
     if(s[0]== '+' || s[2]=='+'){
         x=x+1;
     }
     else{
         x=x-1;
     }
 }
 cout<<x<<endl;
    return 0;
}
