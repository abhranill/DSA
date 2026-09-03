#include<iostream>
using namespace std;
int main(){
    long double n;
    cin>>n;
    long double sum=0,x;
    for(int i=0;i<n;i++){
        cin>>x;
        sum+=x;
    }
    long double avg=sum/n;
    cout<<avg<<endl;
    return 0;
}