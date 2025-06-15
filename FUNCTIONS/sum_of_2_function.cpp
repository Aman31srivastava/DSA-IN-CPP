#include<iostream>
using namespace std;

int sum(int a, int b){
    int s=a+b;
    return s;
}

int main(){
    int x,y;
    cout<<"enter two numbers: ";
    cin>>x>>y;
    cout<<sum(x,y)<<endl;
}