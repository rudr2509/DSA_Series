#include<bits/stdc++.h>
using namespace std;
int main() {
    int n=5;
    //Pattern 1
    cout<<"Pattern 1"<<endl;
    for (int i=0;i<n;i++) {
        for (int j=0;j<n-i-1;j++) {
            cout<<" ";
        }
        for (int j=0;j<2*i+1;j++) {
            cout<<"*";
        }
        for (int j=0;j<n-i-1;j++) {
            cout<<" ";
        }
        cout<<endl;
    }

    //Pattern 2
    cout<<"Pattern 2"<<endl;
    for (int i=0;i<n;i++) {
        for (int j=0;j<i;j++) {
            cout<<" ";
        }
        for (int j=0;j<2*n -(2*i+1);j++) {
            cout<<"*";
        }
        for (int j=0;j<i;j++) {
            cout<<" ";
        }
        cout<<endl;
    }
    //Pattern 3
    cout<<"Pattern 3"<<endl;
    for (int i=0;i<2*n-i;i++) {
        int stars=i;
        if (i>n) stars=2*n-i;
            for (int j=0;j<=stars;j++) {
                cout<<"*";
            }
        for (int j=)
        cout<<endl;
    }
}