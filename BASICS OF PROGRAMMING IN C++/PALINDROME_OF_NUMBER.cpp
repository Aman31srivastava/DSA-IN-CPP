#include<iostream>
using namespace std;

int main() {
int n;
cout<<"enter a number: ";
cin>>n;

int reversed =0;
while(n>0){
    int ld=n%10;
    reversed = reversed * 10 + ld; n /= 10;
}
if(reversed==n){
    cout << "The number is a palindrome." << endl;
    cout << "The reversed number is: " << reversed << endl;

}
else{
    cout << "The number is not a palindrome." << endl;
}
cout<<reversed;

}