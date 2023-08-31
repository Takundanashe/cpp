#include<iostream>
using namespace std;

void selectionSort(int n,int arr[]){
  for(int i=0;i<n;i++){
    int minIndex = i;
    for(int j=i+1;j<n;j++){
      if(arr[j]<arr[minIndex]){
        minIndex = j;
      }
    }
    if(minIndex != i){
      swap(arr[i],arr[minIndex]);
    }
  }
}
int main(){
  int arr[100];
  int n;
  cout<<"enter size of array: ";
  cin>>n;
  cout<<"enter elements: ";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  selectionSort(n,arr);
cout<<"Sorted array: ";
for(int i=0;i<n;i++){
  cout<<arr[i]<<" ";
}
return 0;
}
//takundanashe
