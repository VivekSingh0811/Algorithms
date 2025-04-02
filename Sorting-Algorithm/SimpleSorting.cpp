#include<iostream>
#include<cstdlib>
using namespace std;

#define MAX 100

int main(){
    
    int n;
    int arr[MAX];

    cout << "Enter size of array: ";
    cin >> n;

    // creating the array of sixe n...
    for(int i=0; i<n; i++){
        arr[i] = rand();
    }

    // printing unsorted array
    for(int i=0; i<n; i++){ 
        cout << arr[i] << " ";
    }
    cout << endl;

    // Ascending Order...
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[i]){
                int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            }
            
        }
    }


    // // Descending order...
    // for(int i=0; i<n; i++){
    //     for(int j=i+1; j<n; j++){
    //         if(arr[j] > arr[i]){ //just this part is different...
    //             int temp = arr[i];
    //         arr[i] = arr[j];
    //         arr[j] = temp;
    //         }
            
    //     }
    // }

    //printig sorted array...
    for(int i=0; i<n; i++){ 
        cout << arr[i] << " ";
    }
    cout << endl;



    return 0;
}