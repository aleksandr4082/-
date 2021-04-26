#include <iostream>

using namespace std;

class X
{
    protected:
        int x1=0,x2=0;
    public:
        X(int a,int b)
        {
            x1=a;
            x2=b;
        }
        ~X()
        {
            cout<<"THE END OF X"<<endl;
        }
        virtual void print()
        {
            cout<<"x1="<<x1<<endl<<"x2="<<x2<<endl;
        }
        virtual void set(int a, int b)
        {
            x1=a;
            x2=b;
        }
};

class Y: public X
{
        int y=0;
    public:
        Y(int a,int b, int c): X(a,b)
        {
            y=c;
        }
        ~Y()
        {
            cout<<"THE END OF Y"<<endl;
        }
        void print()
        {
            cout<<"x1="<<x1<<endl<<"x2="<<x2<<endl<<"y="<<y<<endl;
        }
        virtual void set(int a, int b, int c)
        {
            x1=a;
            x2=b;
            y=c;
        }
        void run()
        {
            cout<<(x1+x2)*y<<endl;
        }
};


int main()
{
    cout<<"Dvoelozhkov"<<endl<<"Variant 6"<<endl;
    Y a(1,2,3);
    X *p;
    p=&a;
    p->print();
    (Y*) p;
    p->print();
    a.run();
}
