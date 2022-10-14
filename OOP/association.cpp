#include<bits/stdc++.h>
using namespace std;
class car
{public:
 string name;
 int mileage;
 char brandname[];
 public:
 car()
 {
     cout<<"enter the car name:";
     cin>>name;
     cout<<"enter the car mileage:";
     cin>>mileage;
     cout<<"enter the brandname:";
     cin>>brandname;
 }
};
class Driver
{
    public:
    string name;
    int age;
    void drive( car &a)
    {
        cout<<name<<" drives the "<<a.name<<" of "<<a.brandname;
    }
    Driver(string Name,int Age)
    {
        name = Name;
        age = Age;
    }
};
int main()
{
    car obj1;
    Driver obj("eminem",99);
    obj.drive(obj1);
}
