#include<iostream>
using namespace std;

int FactorialN(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        
        fact*=i;
    }
    return fact;
}

int main(){
    int x;
    cout<<"enter a number to find the factorial: ";
    cin>>x;
    cout<<FactorialN(x)<<endl;

}