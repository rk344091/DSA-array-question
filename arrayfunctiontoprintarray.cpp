#include<iostream>
using namespace std;
void printarray(int array[],int size){
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
}
int main(){
    int first[10]={1,5,6,4,7,};
    printarray(first,10);
    cout<<endl;

    int second[15]={1};
    printarray(second,15);
}