#include<bits/stdc++.h>
using namespace std;
int main() {
    //Pattern 1
    cout<<"Pattern 1"<<endl;
for (int  i=0;i<4;i++) {
    for (int j=0;j<4;j++) {
        cout<<"*";
    }
    cout<<endl;
}
    cout<<"Pattern 2"<<endl;
    //Pattern 2->Right angle triangle
    for (int  i=0;i<5;i++) {
        for (int j=0;j<i+1;j++) {
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<"pattern 3"<<endl;
    //Pattern 3
    for (int  i=0;i<6;i++) {
        for (int j=1;j<i+1;j++) {
            cout<<j;
        }
        cout<<endl;
    }
    cout<<"Pattern 4"<<endl;
    //Patteern 4
    for (int  i=1;i<=5;i++) {
        for (int j=1;j<i+1;j++) {
            cout<<i;
        }
        cout<<endl;
    }
    //Pattern 5
    cout<<"Pattern 5"<<endl;
    for (int  i=0;i<=4;i++) {
        for (int j=0;j<4-i+1;j++) {
            cout<<"*";
        }
        cout<<endl;
    }
    //Pattern 6
    cout<<"Pattern 6"<<endl;
    for (int  i=0;i<=5;i++) {
        for (int j=1;j<5-i+1;j++) {
            cout<<j;
        }
        cout<<endl;
    }
}