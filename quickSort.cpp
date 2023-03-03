#include <iostream>
#include <algorithm>
using namespace std;

int partition(int A[] , int begin , int end){
    int i = begin - 1 , j;
    for(j = begin; j < end; j++){
        if(A[j] <= A[end]){
            i++;
            swap(A[i] , A[j]);
        }
    }
    swap(A[end] , A[i + 1]);

    return i + 1;
}

void quickSort(int A[] , int n , int p , int r){
    if(p < r){
        int q = partition(A , p , r);
        quickSort(A , n , p , q - 1);
        quickSort(A , n , q + 1 , r);
    }
}

int main(){
    int n , q;
    cin >> n;

    int A[n];
    for(int i = 0; i < n; i++) cin >> A[i];

    quickSort(A , n , 0 , n - 1);

    for(int i = 0; i < n; i++) cout << (i ? " " : "") << A[i];
    cout << endl;

    return 0;
}