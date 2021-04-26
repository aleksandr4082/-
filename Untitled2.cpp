#include <iostream>
using namespace std;
class A{
	public:f(){cout<<"A"<< endl;}};
class B:public virtual A{
	public:f(){cout<<"B"<< endl;}};
class C:public virtual A{
	public:f() {cout<<"C"<<endl;}};
class E:public virtual C{
	public:f() {cout<<"E"<<endl;}};
class D: public virtual C, public virtual E{
	public:f(){cout<<"D"<< endl;}};
class F: public virtual E, public virtual D, public virtual C
    {};
	 
	 int main() {
	 	setlocale(LC_ALL,"RUSSIAN");
	 	F object;
	 	object.f();
	 	return 0;
	 }	
	
	



	


