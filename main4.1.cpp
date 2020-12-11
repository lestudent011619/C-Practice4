#include <iostream>

using namespace std;

// //Practice4.1:
//To write a class with two private variables and one member function to return the area of a rectangle.

class rectangle
{
private:

    float length;
    float width;

public:

    // An Area of a rectangle

    float area (float length, float width){return length * width;}

};

int main ()
{
    rectangle Kashaf;
    cout <<"The area of the rectangle is " << Kashaf.area(3, 4)<< "." << endl;

    return 0;
}
