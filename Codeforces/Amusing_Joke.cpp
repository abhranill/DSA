#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    string t;
    cin>>t;
    string u;
    cin>>u;
    string c=s+t;
    sort(c.begin(),c.end());
    sort(u.begin(),u.end());
    if(c==u){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}