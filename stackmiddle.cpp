#include <bits/stdc++.h>
using namespace std;

void deletemiddle(stack<int>&s,int count,int size){

    if(count==size/2){
        s.pop();return;
    }
    int num=s.top();
    s.pop();
    deletemiddle(s,count+1,size);
    s.push(num);
}

int main()
{
stack<int>s;


s.push(1);
s.push(2);
s.push(3);
s.push(4);
s.push(5);
int count=0;
deletemiddle(s,count,s.size());
while (!s.empty())
{
    cout<<s.top();s.pop();
}


}