//вариант-6
#include <iostream>
#include <math.h>
using namespace std;
 // pow-   abs- модуль 
class a
{
    float x=0,y=0,z=0,b1=0;
    public:
    void set(float a,float b, float c);
    void run();
    void print();
};

    void a::set(float a, float b, float c)
    {
        x=a;
        y=b;
        z=c;
    }

    void a::run()
    {
        b1=pow(10*(pow(x,1/3)+pow(x,y+2)),1/2)*(pow(asin(z),2)-abs(x-y));
    }
    void a::print ()
   
    {
        cout<<"b1="<<b1<<endl;
    }

int main()
{
    cout<<"dvoelozhkov"<<endl<<"Variant 6"<<endl;
    a obj1;
    a *obj2=new a;
    a* p1;
    p1=&obj1;
    obj1.set(16.55*pow(10,-3),-2.25,0.75);
    obj2->set(1.0,2.0,3.0);
    p1->run();
    obj2->run();
    obj1.print();
    obj2->print();
    delete obj2;
}
