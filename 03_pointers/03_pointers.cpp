#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};


int main() {
    // // int A[5] = {2,4,6,8,10};
    // int *p;
    // // hip에 생성된 배열 c의 방법
    // // p = (int *)malloc(5*sizeof(int));
    // // c++의 방법
    // p = new int[5];
    // p[0]=10;
    // p[1]=15;
    // p[2]=14;
    // p[3]=21;
    // p[4]=31;
    // // p = A;

    // for(int i=0; i<5; i++)
    //     // cout<<A[i]<<endl;
    //     cout<<p[i]<<endl;

    // // c
    // // free(p);

    // // c++
    // delete [ ] p;

    int *p1;    // 4바이트
    char *p2;   // 1바이트 ..
    float *p3;
    double *p4;
    struct Rectangle *p5;

    cout<<sizeof(p1)<<endl; // 최신 컴파일러의 포인터는 무조건 8바이트
    cout<<sizeof(p2)<<endl;
    cout<<sizeof(p3)<<endl;
    cout<<sizeof(p4)<<endl;
    cout<<sizeof(p5)<<endl;

    return 0;
}