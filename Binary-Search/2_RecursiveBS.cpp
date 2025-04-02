#include<iostream>
using namespace std;



int BinarySearch(int A[], int start, int end, int x){

    int mid = start + (end - start)/2;

    if(start>end) return -1; // 2nd Base Condition...This is important to stop the loop when we dont find the key, otherwise we will get Segmentation Fault (Core Dumped) error !!! ...

    if (x == A[mid]) return 1; // 1st Base Condition...
    else if (x < A[mid]) return BinarySearch(A, start, mid-1, x);
    else return BinarySearch(A, mid+1, end, x);
}



int main(){
   
    int n;
    int x;
    cout<< "Enter size of array: ";
    cin>>n;

    int A[n];
    
    for(int i=0; i<n; i++){
        A[i] = i+1;
    }

    cout<< "Enter key to find: ";
    cin>>x;

    int start = 0;
    int end = n-1;

    if(BinarySearch(A, start, end, x) == 1){
        cout << "Key Found" << endl;
    }
    else{
        cout << "Key not Found" << endl;
    }
        

    return 0;
}

// Time Complexity : O(logn)