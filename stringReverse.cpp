#include<iostream>
using namespace std;
#define MAX 100
void reverse(int arr[], int n){
  int start = 0;
  int end = n-1;
  while(start < end){
    int t = arr[start];
    arr[start] = arr[end];
    arr[end] = t;
    start ++;
    end --;
  }
}

void printArray(int arr[],int n){
  for(int i=0; i<n; i++) 
      cout<<arr[i]<< " ";
  cout<< endl;    
}

int main(){
  int arr[MAX];
  int n;
  cin >> n;
  cout << "Enter array:"<<endl;
  for (int i=0; i<n; i++){
    cin >> arr[i];
  }
  reverse(arr, n);
  printArray(arr,n);
  return 0;
}
