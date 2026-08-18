#include<iostream>
using namespace std;
    void sumit(){
        cout<<"hi Sumit"<<endl;
    }
    void arjun(){
        sumit();
        cout<<"Hi Arjun"<<endl;
    }
    void anu(){
        cout<<"Hi anu"<<endl;
        arjun();
    }
    int main(){
        anu();
    }

