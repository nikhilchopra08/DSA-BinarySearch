#include<iostream>
using namespace std;

int BinarySearch(int arr[] , int n , int key){
    //binary search complexity O(logn);
    int start = 0;
    int end = n-1;

    int mid = start + (end - start) /2;

    while(start <= end){
        if(arr[mid] == key){
            return mid;
        }
        else if(key > arr[mid]){
            start = mid +1;
        }
        else{
            end = mid -1;
        }

        // mid = (start + end)/2;
        mid = start + (end - start) /2;

        // mid = s + (e - s)/2; //better formula as it doesnt exceed the range of int 
        //used for optimisation of code
    }
    return -1;
}

int main(){
    int arr[5] = {1,2,3,4,5};
    int brr[6] = {1,2,3,4,5,7};

    int target = 7;

    cout << BinarySearch(arr , 5 , target) << endl;

    cout << BinarySearch(brr , 6 , target) << endl;
}