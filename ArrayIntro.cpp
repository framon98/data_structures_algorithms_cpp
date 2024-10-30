#include<iostream>
// using namespace std;

const int ARRAY_SIZE = 10;

int main(){

/*     int a[10];
    a[0] = 2;
    a[4] = 5;

    cout<<a[0]<<" "<<a[4]<<endl; 
*/

/*     int a[10] = {1, 2, 3, 4}; /// Initializing the array
    // cout<<a[0]<<a[1]<<a[2]<<a[3]<<endl; /// Printing the values of the array

    for(int idxi = 0; idxi < 10; idxi++){ /// More efficient way of printing the array
        cout<<a[idxi]<<" ";
    } 
*/
   
    int arr[ARRAY_SIZE];
    for(int idxi = 0; idxi < 10; idxi++){
        arr[idxi] = idxi * idxi;
        std::cout<<arr[idxi]<<" ";
    }

    std::cout<<std::endl;

    int arrb;
    std::cout<<sizeof(arrb)<<std::endl;

    return 0;
}