#include<iostream>
#include<iomanip>
#include<bitset>

using namespace std;
int main()
{
  int c;
  cout<<"enter number you want to convert:";
  cin>>c;

  cout<<"Hexadecimal: "<<hex<<c<<endl;
  cout<<"Octal: "<<oct<<c<<endl;
  cout<<"Binary: "<<bitset<8>(c)<<endl;
return 0;
}
