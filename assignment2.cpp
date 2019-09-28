#include<iostream> 
using namespace std; 

class Complex { 
public:
	int real, imag; 
 
	Complex(int r = 0, int i =0) {real = r; imag = i;} 
	

	Complex operator + (Complex  &obj) { 
		Complex res; 
		res.real = real + obj.real; 
		res.imag = imag + obj.imag; 
		return res; 
	} 
	Complex operator * (Complex  &obj) { 
		Complex res; 
		res.real = real*obj.real-imag*obj.imag; 
		res.imag = imag*obj.real+real*obj.imag; 
		return res; 
	} 
	void print() { cout << real << " + i" << imag << endl; } 
}; 

int main() 
{        
	Complex c1, c2; 
	cout<<"enter real part of first no"<<endl;
	cin>>c1.real;
	cout<<"enter image part of first no"<<endl;
	cin>>c1.imag;
	cout<<"enter real part of second no"<<endl;
	cin>>c2.real;
	cout<<"enter real part of second no"<<endl;
	cin>>c2.imag;
	cout<<"Enter a choice"<<endl;
	char c;
	cin>>c;
	if(c=='*')
	{Complex c3 = c1*c2; 
	c3.print(); }
	else
	{Complex c3 = c1+c2; 
	c3.print(); }
} 

