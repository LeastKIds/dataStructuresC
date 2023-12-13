#include <iostream>
#include <stdio.h>

using namespace std;

class Rectangle
{
    public: 
        int length;
        int breadth;

        void initialise(int l, int b) {
            length = l;
            breadth = b;
        }

        int area() {
            return length * breadth;
        }

        int perimeter() {
            int p;
            p = 2 * (length + breadth);

            return p;
        }

};



int main() {

    // int length = 0, breadth = 0;
    // Rectangle r = {0, 0};
    Rectangle r;


    int l, b;

    printf("Enter Length and Breadth");
    cin>>l>>b;

    r.initialise(l, b);

    int a = r.area();
    int peri = r.perimeter();

    printf("Aread = %d \nPerimeter = %d \n", a, peri);
    

    return 0;
}