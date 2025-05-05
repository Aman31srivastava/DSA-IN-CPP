#include<iostream>
using namespace std;

int main(){

    string name;
    cout<<"enter your name: ";
    cin>>name;
    int age;
    cout<<"enter your age: ";
    cin>>age;

    if(age>=18){
        cout<<"yes you are an adult and eligible to vote...";
    }
    else{
        cout<<"not eligible";
    }

    return 0;
}