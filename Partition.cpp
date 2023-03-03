#include <iostream>
#include <algorithm>
using namespace std;

void partition(int A[] , int begin , int end , int criterion){
    if(criterion != end) swap(A[criterion] , A[0]);

    int i = begin - 1 , j;
    for(j = begin; j < end; j++){
        if(A[j] <= A[end]){
            i++;
            swap(A[i] , A[j]);
        }
    }
    swap(A[end] , A[i + 1]);
}

int main(){
    int n;
    cin >> n;

    int A[n];
    for(int i = 0; i < n; i++) cin >> A[i];

    partition(A , 0 , n - 1 , A[n - 1]);

    for(int i = 0; i < n; i++) cout << (i ? " " : "") << A[i];
    cout << endl;

    return 0;
}
