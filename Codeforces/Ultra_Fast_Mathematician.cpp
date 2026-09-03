#include<iostream>
#include<string>
using namespace std;
int main(){
    string s,n;
    cin>>s;
    cin>>n;
    for(int i=0;i<s.length();i++){
        if(s[i]==n[i]){
            cout<<0;
        }
        else{
            cout<<1;
        }
    }
    
    return 0;
}