#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter a number: ";
    cin>>n;

    int fact=1;

    if(n<0){
        cout<<"not possible to take out a factorial";
    }
    else{
        for(int i=1;i<=n;i++){
            fact*=i;;
        }
        cout<<fact;
    }

    return 0;

}