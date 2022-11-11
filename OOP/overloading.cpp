
#include <iostream>
using namespace std;
class sum
{
    int a ,b,c;
    
    
    public:
    void add(int a,int b)
    {
        cout<<a+b<<endl;
    }
    void add(int a, int b,int c)
    {
        cout<<a+b+c;
    }
  
};
int main()
{
    sum obj;
    obj.add(2,3);
    obj.add(2,3,4);
    return 0;
}
