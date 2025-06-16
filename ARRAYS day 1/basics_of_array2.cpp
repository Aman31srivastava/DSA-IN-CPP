#include<iostream>
using namespace std;

int main()
{


    int size=5;
    string cars[5];
    

    for(int i=0;i<size;i++){
        cout<<"enter the names of cars:";
        cin>>cars[i];
    }
    for(int i=0;i<size;i++){
        cout<<cars[i]<<endl;
    }
    return 0;
}