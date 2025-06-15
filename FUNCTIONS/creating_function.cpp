#include<iostream>
using namespace std;

//function definition
void printHello(){
    cout<<"eligible\n";
}

int main(){
    int age;
    cout<<"enter your age: ";
    cin>>age;
    if(age>=18){
        printHello();  //invoking or calling a function
    }
    else{
        cout<<"not eligible";
    }
    return 0;
}