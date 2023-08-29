#include<iostream>
using namespace std;
class Myclass{
    friend void printMessageLoop(Myclass& obj,int count);
    int data;
    public:
    int  getData(){
        return data;

    }

};
void printMessageLoop(Myclass& obj,int count){
    for(int i=0;i<count;++i){
        cout<<"Hello from friend function!"<<endl;

    }
}
int main(){
    Myclass obj;
    int loopcount =3;
    printMessageLoop(obj,loopcount);
    return 0;
    }
