#include<iostream>
using namespace std;

class Rect{
    private:
    
    int area1;
    int w1,w2;
    int h1,h2;
    int area2;
    public:
    void rect1(int x,int y){
        this->w1=x;
        this->h1=y;
        this->area1=(x*y);

    }
    void rect2(int x,int y)
    {
        this->area2=(x*y);
        this->w2=x;
        this->h2=y;

    }
    void compare(){
        if(w1==w2 && h1==h2)
        {
            cout<<"rectangles have the same dimensions\n";
            cout<<area1<<" "<<area2<<endl;

        }else
        {
            cout<<"Rectangles have diff dimensions\n";
            cout<<area1<<" "<<area2<<endl;
        }
    }


};


int main()
{
    int w1,h1,w2,h2;
    cout<<"enter width and height for first and sec rect :";
    cin>>w1>>h1>>w2>>h2;
    Rect obj;
    obj.rect1(w1,h1);
    obj.rect2(w2,h2);
    obj.compare();
    return 0;

}
//takundanashe
