
#include <iostream>
#include <stdlib.h>
using namespace std;
#include <math.h>
/*
int binarysearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + ((end - start)/2);
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else //key< arr[mid]
        {
            end = end - mid;
        }
        mid = start + ((end - start)/2);
    }
    return -1;
}

int main()
{
    system("CLS");

    int even[6] = {2, 5, 8, 12, 20, 24};
    int odd[7] = {3, 9, 14, 25, 30, 35, 53};
    int even_key , odd_key;
    cin>>even_key;
     
    int evenbinary = binarysearch(even,6,even_key);
    cout<<"Index of "<<even_key<<" is "<<evenbinary<<endl;
    
    cin>>odd_key;
    int oddbinary = binarysearch(odd,7,odd_key);
    cout<<"Index of "<<odd_key<<" is "<<oddbinary<<endl;


}

*/



//pivot element


int pivot(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+((e-s)/2);
    while(s<e){
        if(arr[mid]>arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+((e-s)/2);
     }
    return s;

}

int main(){
    system("CLS");
    int array[5]={7,9,1,2,3};
    cout<<"pivot index is "<<pivot(array,5)<<endl;
}