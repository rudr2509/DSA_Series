#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> v(0);
    v.push_back(4);
    v.push_back(3);
    v.push_back(5);
    v.push_back(6);
    v.push_back(9);
    auto it= v.begin();
    cout<<*(it)<<endl;
    it++;
    cout<<*(it)<<endl;
    cout<<v[0]<<" "<<v.at(0)<<endl;
    for ( auto it :v) {
        cout<<it;
    }
    cout<<endl;
    v.erase(v.begin()+2,v.begin()+4);
    for (auto it:v) {
        cout<<it;
    }
    cout<<endl<<v.empty();
    cout<<endl;
    list<int> ls;
    ls.push_back(1);
    ls.push_back(3);
    ls.push_back(5);
    ls.push_back(7);
    for (auto it:ls) {
        cout<<it;
    }
    cout<<endl;
    stack<int> s;
    s.push(5);
    s.push(8);
    s.push(10);
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    cout<<endl;
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.pop();
    cout<<q.front()<<"  "<<q.back()<<endl;
}