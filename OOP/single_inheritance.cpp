// Online C++ compiler to run C++ program online
#include <iostream>
class A
{
    public:
    void add(int a, int b)
    {
        std::cout<<a + b<<std::endl;
    }
};
class B : public A
{
    public:
    void add(int a, int b,int c)
    {
        std::cout<<a + b + c<<"\n";
    }
};
int main() {
    B obj;
    obj.add(2,3,4);
    obj.A::add(2,3);

    return 0;
}
