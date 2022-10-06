#include<iostream>
#include<stdlib.h>
#include<climits>
using namespace std;

void ReverseArray(int array[],int size){
    int start = 0;
    int end = size-1;
    while(start<=end){
        swap(array[start],array[end]);
        start++;
        end--;
    }
}

void PrintArray(int array[],int size){
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}


int main()
{
int size;
cin>>size;
int array[100];
for(int i=0;i<size;i++){
    cin>>array[i];
}
//int array[5]={1,2,3,4,5}

ReverseArray(array,size);
cout<<"Reverse Array :"<<endl;
PrintArray(array,size)

return 0;
}
