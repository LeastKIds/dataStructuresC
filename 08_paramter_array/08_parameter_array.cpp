#include<iostream>
#include<stdio.h>

using namespace std;

// void fun(int A[ ], int n) {
//     // cout<<sizeof(A)/sizeof(int)<<endl;
//     // for(int a: A) {
//     //     cout<<a<<endl;
//     // }
//     for(int i=0; i<5; i++) {
//         cout<<A[i]<<endl;
//     }
// }

// int main() {

//     int A[ ] = {2, 4, 6, 8, 10};
//     int n = 5;

//     fun(A, n);
//     cout<<sizeof(A)/sizeof(int)<<endl;

//     for (int x: A) {
//         cout<<x<<endl;
//     }

//     return 0;
// }

int * fun(int size) {
    int *p;
    p = new int[size];

    for(int i=0; i<size; i++) {
        p[i] = i+1;
    }

    return p;
}

int main() {

    int *ptr, sz = 5;
    ptr = fun(sz);
    
    for(int i=0; i<sz; i++) {
        cout<<ptr[i]<<endl;
    }

    return 0;
}