#include<iostream>
using namespace std;
const int max_size =100;
void deleteElement(int n,int arr[])
{
    int b[100],i,j;
    cout<<"enter element you want to delete: ";
    int ele;
    cin>>ele;

    for(i=0,j=0;i<n;i++)
    {
        if(arr[i] != ele)
        {
            b[j++] = arr[i];

        }
        if(j==n)
        {
            cout<<"element no present.";
            exit(0);

        }
    }
    cout<<"Updated array: ";

    for(i=0;i<j;i++)
    {
        cout<<b[i]<<" ";

    }
}
int main()
{
    int n;
    cout<<"how many elements you want to enter: ";
    cin>>n;
    cout<<"enter elements: ";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    deleteElement(n,arr);
    return 0;
}
//takundanashe
