#include<iostream>
#include<string>
#include<set>
#include<cctype>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
     cin>>s;
set<char> t;
for(int i=0;i<n;i++){
    char c=s[i];
   
    t.insert(tolower(c));
}
if(t.size()==26){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
return 0;
}