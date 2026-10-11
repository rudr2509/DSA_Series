#include<bits/stdc++.h>
using namespace std;
int main() {
    int n=5;
    int arr[n]={13,24,46,20,9};
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            if (arr[j]>arr[i]) {
                int temp=arr[j];
                 arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    for (int i=0;i<n;i++) {
        cout<<arr[i]<<",";
    }
}