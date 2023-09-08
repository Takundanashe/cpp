#include<iostream>
using namespace std;

void bubblesort(int n,int arr[])
{
    for (int i=0;i<n-1;i++)
    {
        bool swapped = false;
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(!swapped)
        {
            break;
        }
    }
}

void binarySearch(int n,int arr[])
{
    int num;
    cout<<"enter the number you want to search: ";
    cin>>num;
    int mid;
    int low =0;
    int high = n-1;
    while(low<=high)
    {
        mid = (low + high)/2;
        if(arr[mid]==num)
        {
            cout<<"element found on "<<mid+1<<" position";
            exit(0);
        }
        else if(num>arr[mid]){
            low = mid+1;

        }else if(num<arr[mid]){
            high = mid -1 ;

        }
    }
    cout<<"element no found";

}
int main()
{
    int n;
    cout<<"number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    bubblesort(n,arr);
    binarySearch(n,arr);

    return 0;
}
//takundanashe
