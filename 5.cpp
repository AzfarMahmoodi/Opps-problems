#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    friend complex lsum(complex x, complex y);
    void setdata(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printnumber()
    {
        cout << "the complex number is " << a << " + " << b << "i" << endl;
    }
};
complex lsum(complex x, complex y)
{
    complex z;
    z.setdata((x.a + y.a), (x.b + y.b));
    return z;
}
int main()
{
    complex c1, c2, sum;
    c1.setdata(1, 2);
    c2.setdata(3, 4);
    c1.printnumber();
    c2.printnumber();
    sum = lsum(c1, c2);
    sum.printnumber();
    return 0;
}
