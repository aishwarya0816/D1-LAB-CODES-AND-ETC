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
	
	Complex operator >> (Complex &obj)  {
	               cout<<"enter real part"<<endl;
	               cin>>real;
	               cout<<"enter imaganary part"<<endl;
	               cin>>imag;
	               cout<<"enter real part"<<endl;
	               cin>>obj.real;
	               cout<<"enter imaganary part"<<endl;
	               cin>>obj.imag;
	               }
	Complex operator << (Complex  &obj) { 
	 
		cout << real << " + i" << imag << endl;
		} 
}; 

int main() 
{        
	Complex c1, c2; 
	c1>>c2;
	cout<<"Enter a choice"<<endl;
	char c;
	cin>>c;
	if(c=='*')
	{Complex c3 = c1*c2; 
	c3<<c1; }
	else
	{Complex c3 = c1+c2; 
	c3<<c1; }
	
} 

