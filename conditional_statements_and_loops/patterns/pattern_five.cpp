/*
A
BB
CCC
DDDD
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    
    for(int i = 0; i<n; i++){
        char ch = 'A';
        ch = ch + i;
        for(int j = 0; j<i+1; j++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    return 0;
}