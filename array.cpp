#include<iostream>
using namespace std;
int main(){
    //declaration array
    int number[10];
    //accessing of array
    cout<<"value at 7 index is"<<number[7]<<endl;
   //initialization of arrry
    int first[5]={1,2,9,8,7};
    //accessing an element
    cout<<"value at 1 index is"<<first[1]<<endl;
    //print array
    int second[15]={7,8};
    int n=15;
    cout<<"printing tthe array"<<endl;
    for(int i=0;i<n;i++){
        cout<<second[i]<<" ";
    }
    //initialising all location by zero
    int third[10]={0};
     n=10;
     cout<<"printing all zero"<<endl;
    for(int i=0;i<n;i++){
        cout<<third[i]<<" ";
    }
}