#include<iostream>
using namespace std;
int main(){
    int arr[]={34,48,54,22,28,53,68};
    int n=7;
    int i,j;
  int maxprofit=0;
  int currprofit=0;
  for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        currprofit=arr[j]-arr[i];
        if(currprofit>maxprofit){
            maxprofit=currprofit;
        }
    }
  }
  return 0;

}