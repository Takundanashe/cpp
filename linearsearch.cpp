#include<iostream>
using namespace std;
//linearsearch 

void linearSearch(int n,int arr[]){
    int ele;
    cout<<"enter the element you want to search: ";
    cin>>ele;
    int i;
    for( i=0;i<n;i++)
    {
        if(arr[i]==ele)
        {
            cout<<"Element found on "<<i+1<<" position.";
            break;
        }
    }
    if(i==n)
    {
        cout<<"element not present";

    }
}

int main()
{
    cout<<"range of the array: ";
    int n;
    cin>>n;
    int arr[n];
    cout<<"enter elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    linearSearch(n,arr);
    return 0;
}
//takundanashe
