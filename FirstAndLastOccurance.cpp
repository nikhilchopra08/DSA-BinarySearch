#include<iostream>
using namespace std;

int firstOcc(int arr[] , int n , int key){
    int start = 0;
    int end = n-1;
    int mid = start + (end - start)/2;

    int ans = -1;

    while(start <= end){
        if(arr[mid] == key){
            ans = mid;
            end = mid -1;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else if(arr[mid] > key){
            end = mid -1;
        }

        mid = start + (end - start)/2;
    }
    return ans;
}

int LastOcc(int arr[] , int n , int key){
    int start = 0;
    int end = n-1;
    int mid = start + (end - start)/2;

    int ans = -1;

    while(start <= end){
        if(arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else if(arr[mid] > key){
            end = mid -1;
        }

        mid = start + (end - start)/2;
    }
    return ans;
}

int main(){
    int arr[6] = {3,6,6,6,6,12};

    cout << "the first occurance of 6 is at " << firstOcc(arr , 6 , 6) << endl;
    cout << "last occurance " << LastOcc(arr , 6 , 6) << endl;

    return 0;
}