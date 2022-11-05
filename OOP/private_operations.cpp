#include <iostream>
using namespace std;
class A
{
    int a,b;
    private:
    void priv()
    {
        cout<<"private function hai"<<endl;
    }
    public:
    void display()
    {
        priv();
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
    }
    A(int x, int y)
    {
        a = x;
        b = y;
    }
};
int main()
{
    A obj(2,4);
    
    obj.display();

    return 0;
}
