#include<iostream>
using namespace std;
int main(){
    int a[100];
    int n;
    cout<<"enter the number of array elements you want to add: ";
    cin>>n;
    cout<<"enter the array elements: ";

    for (int i=0;i<n;i++)
    {
        cout<<"element "<<i+1<<": ";
        cin>>a[i];

    }
    cout<<"entered elements: ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";

    }
    return 0;
}
//takundanashe
