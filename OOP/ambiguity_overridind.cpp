#include <iostream>
using namespace std;
class parent
{
    int a , b;
    public:
    void math(int a, int b)
    {
        cout<<a*b<<endl;
    }
};
class child : public parent
{
    public:
    void math(int a , int b)
    {
        cout<<a + b<<endl;
    }
};
int main()
{
    child d;
    d.math(2,3);
    d.parent::math(2,3);

    return 0;
}
