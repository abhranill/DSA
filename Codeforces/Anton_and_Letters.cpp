#include<iostream>
#include<set>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    set<char> st;
    for(int i=0; i<s.length();i++){
        if(s[i]>='a' && s[i]<='z'){
            st.insert(s[i]);
        }
    }
    cout<<st.size()<<endl;
    return 0;
}