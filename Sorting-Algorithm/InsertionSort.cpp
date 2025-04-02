#include<iostream>
using namespace std;


void insertIth(int a[], int n, int i){

    int key = a[i];
    int j = i-1;

    while(j>=0 && a[j]>key){
        a[j+1] = a[j];
        j = j-1;
    }
    a[j+1] = key;
}


void insSort(int a[], int n){

    int i = 1;

    while(i<n){
        insertIth(a, n, i);
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
    insSort(arr, size);
    display(arr, size);



    return 0;
}