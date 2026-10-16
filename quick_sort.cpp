#include <bits/stdc++.h>
using namespace std;
void qs(int arr[],int low,int high) {
    if (low<high) {
        partition=f(arr,low,high);
        qs(arr,low,partition-1);
        qs(arr,partition+1,high);
    }
}
int f(int arr[],low,high) {
    pivot=arr[low];
    i=low;
    j=high;
    while (i<j) {
        while (arr[i]<=arr[pivot] && i<=high) {
            i++;
        }
        while (arr[j]>arr[pivot] && j>=low) {
            j--;
        }
        if (i<j) {
            swap(arr[i],arr[j]);
        }
    }
        swap(arr[low],arr[j]);
    return j;
}