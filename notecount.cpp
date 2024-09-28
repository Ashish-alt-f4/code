#include<iostream>
using namespace std;
int main(){
    int rupee;
    cin>>rupee;
    int rnvalv = 1;
    int note = 0; 
    switch(rnvalv){
        case 1 : {
            note = rupee / 500;
            rupee = rupee - (note * 500);
            cout<<note<<endl;
        }
        case 2 : {
            note = rupee / 100;
            rupee = rupee - (note * 100);
            cout<<note<<endl;
        }
        case 3 : {
            note = rupee / 50;
            rupee = rupee - (note * 50);
            cout<<note<<endl;
        }
        case 4  : {
            note = rupee / 20;
            rupee = rupee - (note * 20);
            cout<<note<<endl;
        }
        case 5 : {
            note = rupee / 2;
            rupee = rupee - (note * 2);
            cout<<note<<endl;
        }
    }
    return 0;
}
