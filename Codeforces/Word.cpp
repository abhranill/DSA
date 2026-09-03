#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main(){
    string s;
    cin>>s;
    int up=0,low=0;
    for(int i=0;i<s.length();i++){
        if(s[i]>='A' && s[i]<='Z'){
            up++;
        }
        else{
            low++;
        }
    }
    for(int i=0;i<s.length();i++){
         if(up>low){
            s[i]=toupper(s[i]);
        }
         else{
            s[i]=tolower(s[i]);
        }
    }
    cout<<s<<endl;
    return 0;
}