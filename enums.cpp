#include<iostream>
using namespace std;

//create a class
class Myclass{
//name the specifier
public:
  enum class Color{
    Red,
    Green,
    Blue};
void displayColor(Color color){
  if(color == Color::Red)
  {
    cout<<"Color is Red"<<endl;
  }
    else if(color == Color::Blue)
    {
      cout<<"Color is blue"<<endl;
    }else if(color == Color::Green)
    {
      cout<<"Color is green"<<endl;
    }else{
      cout<<"Unknown color"<<endl;
    }
}
};
int main()
{
  Myclass obj;
obj.displayColor(Myclass::Color::Red);
return 0;
}
//takundanashe
