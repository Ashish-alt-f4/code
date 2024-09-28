#include<iostream>
using namespace std;
int main(){
    int a,i = 2 ;
    cin>>a;
    while(i<a){
        if(a%i != 0){
            cout<<"the entered num is prime";
            break;
        }
        else
            cout<<"the entered num is not prime";
            break;
        i++;
    }
    return 0;
}
