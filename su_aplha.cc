#include<bits/stdc++.h>
using namespace std;

void check_alpha(char ch){
if(ch <= '0'&& ch >='9')cout << "Digit"<<endl;
else if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch=='u')cout << "Vowel"<<endl;
else cout << "Consonants"<<endl;
}

int sum_array(int arr[],int n){
int sum =0;
for(int i =0;i<n;i++){
sum = sum + arr[i];
}
return sum;
}

int main(){
        int arr[] = {1,2,3,4,5,6};
        int n = sizeof(arr)/sizeof(arr[0]);
        cout << "the sum of array is : "<< sum_array(arr,n)<< endl;
check_alpha('5');
return 0;
}
