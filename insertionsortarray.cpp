#include<iostream>
using namespace std;

void insertionSort(int size,int arr[])
{
    //firstElement is in sorted position
    //if an element is smaller than the first element it moves to the left of the array and vice versa
    

    for(int i=0;i<size;i++)
    {
        int key = arr[i];

        int j = i- 1;

        while(j>=0 && arr[j]> key){
            arr[j+1] = arr[j];
            j--;

        }
        arr[j+1 ] =key;

    }
}
int main(){
    int arr[100];
    int n;
    cout<<"enter the size of array you want to sort: ";
    cin>>n;
    cout<<"array element: ";
    for(int i=0;i<n;i++)
    {
        cout<<i+1<<": ";
        cin>>arr[i];

    }
    cout<<"entered elements: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";

    }
    insertionSort(n,arr);

    cout<<"Sorted Array: ";
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;

}
//takundanashe
