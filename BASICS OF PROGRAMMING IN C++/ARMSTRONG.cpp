#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter a number:";
    cin>>n;
    int dup=n;
    int sum=0;
    int rev=0;
    while(n>0){
        int ld=n%10;
        sum=sum+(ld*ld*ld);
        rev=rev*10+ld;
        n=n/10;
    }
    if (sum==dup){
        cout << dup << " is an Armstrong number." << endl;
    }
    else {
        cout << dup << " is not an Armstrong number." << endl;
}
cout<<rev;
}