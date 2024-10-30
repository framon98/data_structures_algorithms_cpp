#include<iostream>
using namespace std;

int main(){

/*     int a[10];
    a[0] = 2;
    a[4] = 5;

    cout<<a[0]<<" "<<a[4]<<endl; */

    int a[4] = {1, 2, 3, 4}; /// Initializing the array
    // cout<<a[0]<<a[1]<<a[2]<<a[3]<<endl; /// Printing the values of the array

    for(int idxi = 0; idxi < 4; idxi++){ /// More efficient way of printing the array
        cout<<a[idxi]<<" ";
    }

    return 0;
}