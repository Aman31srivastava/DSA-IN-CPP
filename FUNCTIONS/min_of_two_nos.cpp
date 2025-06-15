#include<iostream>
using namespace std;

int min(int a,int b){
    if(a>b){
        return b;
    }
    else{
        return a;
    }
}

int main(){
    int x,y;
    cout<<"enter two numbers: ";
    cin>>x>>y;

    cout<<min(x,y)<<endl;
}