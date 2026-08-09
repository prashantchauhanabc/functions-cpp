#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter a number: ";
    cin>>a;
    for(int i=1; i<=a; i++){
        for(int j=1; j<=a; j++){
            cout<<(char)(j+64)<<" ";
        }
        cout<<endl;
    }
    return 0;
}