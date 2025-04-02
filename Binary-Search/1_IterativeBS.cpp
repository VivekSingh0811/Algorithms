// BINARY SEARCH : Only works on sorted list...
// it is a good example of divide and conquer algorithm...


#include<iostream>
using namespace std;




int BinarySearch(int A[], int n,int x){
    int start = 0;
    int end = n-1;
    int mid = 0;

    while(start<=end){

        // mid = (start + end) / 2;
        mid = start + (end - start)/2; //Thi one is better so use this only...it handles the condition of overflowing of limit of integer variable...

        if(A[mid] == x) return 1;

        else if (x<A[mid]) end = mid-1;
        
        else start = mid+1;
    }
    return -1;
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


    if(BinarySearch(A, n, x) == 1){
        cout << "Key Found" << endl;
    }
    else{
        cout << "Key not Found" << endl;
    }
        

    return 0;
}