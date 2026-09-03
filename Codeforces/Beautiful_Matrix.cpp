#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int x,row, column ;
  for(int i=1;i<=5;i++){
      for(int j=1;j<=5;j++){
          cin>>x;
          if(x==1){
              row=i;
              column=j;
          }
      }
  }
int no_of_moves;
   no_of_moves= abs(row-3) + abs(column-3);
   cout <<no_of_moves<<endl;
    return 0;
}
