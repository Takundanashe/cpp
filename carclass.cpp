#include<iostream>
using namespace std;
//define the class Car
class Car{
//specify the access specifier eg public ,protected or private
    public:
    //data members
    string make;
    string model;
};
int main(){
    // create the instance of the class

    Car myCar;
    myCar.make="Toyota";
    myCar.model="Camry";

    cout<<"Make: "<<myCar.make<<", Model: "<<myCar.model<<endl;
    return 0;
    
}
