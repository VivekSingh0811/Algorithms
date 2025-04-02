#include<iostream>
using namespace std;


void swap(int a[], int x, int y){
    int temp = a[x];
    a[x] = a[y];
    a[y] = temp;
}


void bubble(int a[], int n){

    int i = n-1;

    while(i>0){
        if(a[i] < a[i-1]){
            swap(a, i, i-1);
        }
        i--;
    }
}

// actual Bubble Sort Function...
void bubbleSort(int a[], int n){

    int i = 0;

    while(i < n-1){
        bubble(a, n);
        i++;
    }
}

void display(int a[], int n){

    int i = 0;

    while(i<n){
        cout << a[i] << " ";
        i++;
    }
    cout << endl;
}


int main(){

    int arr[] = {9, 8, 7, 6, 5, 4, 3, 1, 2};
    
    int size = sizeof(arr)/sizeof(int);

    display(arr, size);
    bubbleSort(arr, size);
    display(arr, size);
    

    return 0;
}