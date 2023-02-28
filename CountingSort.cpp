#include <iostream>
using namespace std;

void CountingSort(int arr[] , int n , int range){
    int count[range + 1];
    for(int i = 0; i <= range; i++) count[i] = 0;

    for(int i = 0; i < n; i++) count[arr[i]]++;
    for(int i = 1; i <= range; i++) count[i] += count[i - 1];

    int out[n];
    for(int i = 0; i < n; i++) out[i] = 0;

    for(int i = n - 1; i >= 0; i--){
        out[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    for(int i = 0; i < n; i++) arr[i] = out[i];
}

int main(){
    int n , range = 0;
    cin >> n;

    int A[n];
    for(int i = 0; i < n; i++){
        cin >> A[i];
        if(range < A[i]) range = A[i];
    }

    CountingSort(A , n , range);

    for(int i = 0; i < n; i++) cout << (i ? " " : "") << A[i];
    cout << endl;

    return 0;
}