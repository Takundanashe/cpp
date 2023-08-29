#include<iostream>
using namespace std;
void swapValues(int &x,int &y)
{
  int temp;
  temp = x;
  x=y;
  y=temp;
}
int main(){
  int a,b;
  a =10 ;
  b=20;

  cout<<"Value of a before swapping: "<<a<<endl;
  cout<<"Value of b before swapping: "<<b<<endl;
  swapValues(a,b);
  cout<<"Value of a before swapping: "<<a<<endl;
  cout<<"Value of b before swapping: "<<b<<endl;
return 0;
}
//takundanashe
