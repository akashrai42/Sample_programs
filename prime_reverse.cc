#include<bits/stdc++.h>
using namespace std;

void even_odd(int n){
if(n%2==0)cout << "even"<<endl;
else cout << "odd"<<endl;
}

bool prime(int n){
for(int i=2;i<n;i++){
if(n%i==0)return false;
}
return true;
}

void reverse(string st){
int s =0;
int e = st.size()-1;
while(s<e){
swap(st[s],st[e]);
s++;
e--;
}
cout << st <<endl;
}

int main(){
cout << prime(7)<<endl;
reverse("CELEBAI");
return 0;
}
