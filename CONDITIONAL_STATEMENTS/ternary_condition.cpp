#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"enter your age: ";
    cin>>age;

    cout<<(age>=18) ? "you are adult" : "you are not adult";
}