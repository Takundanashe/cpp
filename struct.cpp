#include<iostream>
using namespace std;
struct emp//structure name emp
{
    string name;
    int emplid;

};
int main()
{
    cout<<"enter number of employees you want to enter: ";
    int n;
    cin>>n;
    emp e[n];
    int i;
    for(i=0;i<n;i++)
    {
        cout<<"Enter the name of employee"<<i+1<<": ";
        cin>>e[i].name;
        cout<<"Enter the id of employee "<<i+1<<": ";
        cin>>e[i].emplid;

    }
    cout<<"\nAll employees:\n";
    for(i=0;i<n;i++)
    {
        cout<<e[i].name<<" "<<e[i].emplid<<endl;
    }
    cout<<endl;
    return 0;
    
}
//takundanashe
