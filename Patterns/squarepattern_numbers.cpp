#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    for(int i=1;i<=n;i++){  //outer loop
        for(int j=1;j<=n;j++){ //inner loop
            cout<<j<< " ";
        }
        return 0;
    }
}