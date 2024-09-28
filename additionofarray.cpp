#include<iostream>
using namespace std;
int main(){
    int arr[7];
    int sum = 0;
    for(int i = 0 ; i < 7 ; i++){
            cin>>arr[i]
    }
    for(int j = 0 ; j < 7 ; j++){
        int dummy;
        dummy = arr[j];
        sum = sum + dummy;

    }
    cout<<endl<<sum;
    return 0; 
}