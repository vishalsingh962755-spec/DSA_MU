#include<iostream>
using namespace std;
int main(){
    float principal,rate,time;
    cout<<"enter principal amount:";
    cin>>principal;
    cout<<"enter rate of interest:";
    cin>>rate;
    cout<<"enter time:";
    cin>>time;
    float SI= (principal*rate*time)/100;
    cout<<"simple interest="<<SI<<endl;
    return 0;
}