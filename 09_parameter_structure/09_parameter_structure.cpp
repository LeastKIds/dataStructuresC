#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

// void fun(struct Rectangle *p) {
//     p -> length = 20;
//     cout<<"Length: "<<p -> length<<endl<<"Breadth: "<<p -> breadth<<endl;
// }

struct Rectangle *fun() {
    struct Rectangle *p;
    // c++
    p = new Rectangle;
    // c
    // p = (struct Rectangle *)malloc(sizeof(struct Rectangle));

    p -> length = 15;
    p -> breadth = 7;
    return p;
}

int main() {

    // struct Rectangle r = {10, 5};
    // fun(&r);

    // printf("Length: %d \nBreadth: %d \n", r.length, r.breadth);

    struct Rectangle * ptr = fun();

    cout<<"Length: " << ptr->length << endl << "Breadth: " << ptr->breadth << endl;

    return 0;
}
