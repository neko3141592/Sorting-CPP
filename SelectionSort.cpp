#include <iostream>
using namespace std;

void selectionSort(int A[] , int n){
    int MIN;
    for(int i = 0; i < n - 1; i++){
        MIN = i;
        for(int j = i; j < n; j++){
            if(A[MIN] > A[j]) MIN = j;
        }
        swap(A[i] , A[MIN]);
    }
}

int main(){
    int n;
    cin >> n;

    int A[n];
    for(int i = 0; i < n; i++) cin >> A[i];

    selectionSort(A , n);

    for(int i = 0; i < n; i++) cout << (i ? " " : "") << A[i];
    cout << endl;

    return 0;
}