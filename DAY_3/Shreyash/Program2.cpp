


// Code
#include<iostream>
using namespace std;

int upto_even(int num)
{
    if(num<=0){
      cout<<"Enter greater greater than 0";
    }
    else{
      for(int i = 1;i<=num*2;i++)
    {
      if(i%2==0){
        cout<<i<<" ";
      }
    }
    }
    
  return 0;

}

int main(){
  int num;
  cout<<"Enter num :";
  cin>>num;
  cout<<upto_even(num);
  return 0;
}
