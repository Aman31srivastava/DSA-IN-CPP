#include<iostream>
using namespace std;
int main (){
    int num;
    cout<<"enter a number to count its digits: "<<endl;
    cin>>num;

    int count=0;
    while(num>0){
        int lastdigit=num%10;
        count=count+1;
        num=num/10;
    }
    cout<<count;
}