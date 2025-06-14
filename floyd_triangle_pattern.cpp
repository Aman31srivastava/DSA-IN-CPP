#include<iostream>
using namespace std;

int main(){

    int n=1;
    for(int i=1;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<n;
            n++;
        }
        cout<<endl;
    }
    return 0;
}