#include <iostream>
using namespace std;

// ================>>>  Traversing  <<<====================

// int main(){
//     int arr[5] = {10, 0, 20, 0, 30};
//     for(int i=0; i<5; i++){
//         cout<<arr[i]<<endl;
//     }
//     return 0;
// }


//===============>> Insertion <<==================


// int main() {
//     int arr[50] = {10, 30, 40, 50, 60};
//     int num, pos;
//     cout<<"Enter num and Pos : ";
//     cin>>num>>pos;

//     // Shift elements to the right to make space for the new element
//     for (int i = 5; i > pos; i--) {
//         arr[i] = arr[i - 1];
//     }

//     // Insert the new element at the specified position
//     arr[pos] = num;

//     cout << "The New Array is:" << endl;
//     for (int i = 0; i < 6; i++) {
//         cout << "index " << i << " : "<< arr[i] << endl;
//     }

//     return 0;
// }

//===============>>  Deletion <<======================

int main(){
    int arr[5] = {3, 4, 6, 8, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int elem;
    int pos = 0;
    cout<<"Enter your Elem : ";
    cin>>elem;
    for(int i=0; i<n; i++){
        if(elem == arr[i]){
            pos = i;
        }
    }
    for(int i=pos; i<5; i++){
        arr[i] = arr[i+1];
    }
    for(int i=0; i<4; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}