#include<bits/stdc++.h>
using namespace std;

int main(){

stack<int> s;

int i = 9;

while(i){
s.push(i);
i--;
}

while(!s.empty()){
cout<<s.top()<<" ";
s.pop();

}

return 0;

}
