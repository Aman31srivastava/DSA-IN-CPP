#include<iostream>

using namespace std;

int main(){

    int marks;
    cout <<"enter your marks student: ";
    cin>>marks;

    if(marks>=95){
        cout<<"A++";
    }

    else if(marks>=90 && marks<95){
        cout<<"A+";
    }

    else if(marks>=85 && marks<90){
        cout<<"A";
    }

    else if(marks>=80 && marks<85){
        cout<<"B+";
    }

    else{
        cout<<"work hard...";
    }

  
    return 0;



}