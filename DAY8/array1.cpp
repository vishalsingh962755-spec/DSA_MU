#include<iostream>
using namespace std;
int main(){
    int arr[]={1,1,0,1,1,0};
    int n=6;
    int i=0,j=n-1;
    while(i<j){
        if(arr[i]==0){
            i++;
        }else if(arr[j]==1){
            j--;
        }else{
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}