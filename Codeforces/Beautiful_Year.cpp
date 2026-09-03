#include<iostream>
#include<string>
using namespace std;
int main(){
    int yr;
    cin>>yr;
    while(true){
        yr++;
        string s= to_string(yr);
        if(s[0]!=s[1] && s[0]!=s[2] && s[0]!=s[3] && s[1]!=s[2] && s[1]!=s[3] && s[2]!=s[3]){
            cout<<yr<<endl;
            break;
        }
    }
    
    return 0;
}