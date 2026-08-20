#include<iostream>
using namespace std;
int min(int a,int b,int c){
    if(a<=b && a<=c) return a;
    else if(b<=a && b<=c) return b;
    else return c;
}
int main(){
    cout<<min(45,75,85)<<endl;
}