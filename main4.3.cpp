//Practice4.3:

//Perform  addition  operation  on  complex  data  using  class  and  object.
//The  program should ask for real and imaginary part of two complex numbers,
//and display the real and imaginary parts of their sum.

#include <iostream>

using namespace std;


class cmplx
{
private:

    int real;
    int img;

public:


    void is_sum_of(cmplx k1, cmplx k2)
    {
        this->real = k1.real + k2.real;
        this->img = k1.img + k2.img;
    }

    // To display complex number
    void display()
    {
        cout << real << "+" << img << "i";
    }

    // function to get the real and imaginary part of the complex number
    void get_comp_val()
    {
        cin>>real;
        cin>>img;
    }

};

int main ()
{

    cmplx k1, k2, k_sum;

    cout << "The real and imaginary part of the 1st addition are respectively: " << endl;
    k1.get_comp_val();

    cout << "The real and imaginary part of the 2nd addition are respectively: " << endl;
    k2.get_comp_val();

    k_sum.is_sum_of(k1, k2);
    cout << "The sum of the 2 complex numbers is: ";
    k_sum.display();
    cout << "." << endl;

    return 0;
}
