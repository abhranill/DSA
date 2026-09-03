#include<iostream>
#include<vector>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n;
long long x,y;
cin>>n>>x>>y;
vector<long long> a(n);
for(int i=0;i<n;i++){
cin>>a[i];
}
long long total_transfers=0;
for(int i=0;i<n;i++){
total_transfers+=a[i]/x;
}
long long ans=0;
//make each bank to final bank
for(int i=0;i<n;i++){
long long my_transfers=a[i]/x;
long long other_transfers=total_transfers-my_transfers;
long long final_money=a[i]+other_transfers*y;
ans=max(ans,final_money);
}
cout<<ans<<endl;
}
return 0;
}