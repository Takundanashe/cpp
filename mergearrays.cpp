#include <iostream>
using namespace std;

int main()
{
    int a[10],b[10],c[20];
    int i=0,j=0,k=0;
    int n1,n2;
    cout<<"enter range of the first array: ";
    cin>>n1;
    cout<<"enter the elements in sorted in form: ";
    for(i=0;i<n1;i++)
    {
        cin>>a[i];

    }
    cout<<"enter the range of the sec array: ";
    cin>>n2;
    cout<<"enter the elements of the sec array in sorted form: ";
    for(i=0;i<n2;i++)
    {
        cin>>b[i];

    }
    i=0;
    while(i<n1 && j<n2)
    {
        if(a[i]<b[j])
        {
            c[k++]=a[i++];
        }
        if(b[j]< a[i])
        {
            c[k++]=b[j++];
        }
    }
    while(i<n1)
    {
        c[k++]=a[i++];
    }
    while(j<n2)
    {
        c[k++] = b[j++];

    }
    cout<<"Merged array: ";
    for(i=0;i<(n1+n2);i++)
    {
        cout<<c[i]<<" ";
    }
    return 0;
}
//takundanashe
