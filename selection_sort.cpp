#include <bits/stdc++.h>
using namespace std;
int main() {
    int n=5;
    int arr[n]={5,4,7,8,3};

    for (int i=0;i<=n-2;i++) {
        int min=i;
        for (int j=i;j<=n-1;j++) {
            if (arr[j]<arr[min]){
                min=j;

            }
        }
        int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
for (int i=0;i<n;i++) {
    cout<<arr[i];
}
    return 0;
}