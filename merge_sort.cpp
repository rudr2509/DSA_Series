#include<bits/stdc++.h>
using namespace std;
void merge(vector<int> &arr,int low,int mid, int high) {
    vector<int> temp;
    int left=low;
    int right=mid+1;
    while (left<=mid && right<=high) {
        if (arr[left]<= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while (left<=mid) {
        temp.push_back(arr[left]);
        left++;
    }
    while (right<=high) {
        temp.push_back(arr[right]);
        right++;
    }
    for (int i=low;i<=high;i++) {
        arr[i]=temp[i-low];
    }
   return;
}
void ms(vector<int> &arr,int low,int high) {
    if (low==high) return;
    int mid=(low+high)/2;
    ms(arr,low,mid);
    ms(arr,mid+1,high);
    merge(arr,low,mid,high);
    return arr[];
}
void mergeSort(vector<int> &arr,int n) {
    ms(arr,0,n-1);
    for (int i=0;i<=n-1;i++) {
        cout<<arr[i]<<",";
    }
}
int main() {
    vector<int> v;
    v.push_back(10);
    v.push_back(1);
    v.push_back(9);
    v.push_back(5);
    v.push_back(7);
    ms(v,0,5);

}