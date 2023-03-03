#include <iostream>
#include <algorithm>
using namespace std;

int partition(int A[] , int begin , int end , int criterion){
    if(criterion != end) swap(A[criterion] , A[0]);

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

int main(){
    int n , q;
    cin >> n;

    int A[n];
    for(int i = 0; i < n; i++) cin >> A[i];

    q = partition(A , 0 , n - 1 , A[n - 1]);

    for(int i = 0; i < n; i++){
        if(i) cout << " ";
        if(i == q) cout << "[";
        cout << A[i];
        if(i == q) cout << "]";
    }
    cout << endl;

    return 0;
}