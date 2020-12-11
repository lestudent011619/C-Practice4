//Practice4.2:
//To write a program and input two integers in main and
 //pass them to default constructor of the class.
 //And Show the result of the additon of two numbers.


#include <iostream>

using namespace std;


class operation
{
private:

    int k;
    int a;

public:

    void Create(int k, int a);

    // Addition of my children alphabets
    int add (){return k + a;}

};

void operation::Create(int k, int a)
{
    this->k = k;
    this->a = a;
}

int main ()
{

    operation f;

    f.Create(3, -1); //The printed the two children
    cout <<"The sum of the 2 terms is " << f.add()<< "." << endl;

    return 0;
}
