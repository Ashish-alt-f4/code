#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    int i = 1;
    while(i <= num){
        int x = 1;
        while(x <= i - 1){
            cout<<" ";
            x++;
        }
        int j = 1;

        while(j <= num + 1 - i){
            cout<< j + i -1 ;
            j++;
        }
        cout<<endl;
        i++;
    }
return 0;
}