#include<iostream>
using namespace std;
class complex
{	float x,y;
	public:
	complex(){}
	complex(float a){x=y=a;	}
	complex(float real, float imag)
	{x= real; y= imag;}
	void sum(complex,complex);
	void show();
};
void complex::sum (complex c1, complex c2)
{	x = c1.x + c2.x;
	y= c1.y + c2.y;
}
void complex::show()
{
	cout<<x<<"+i"<<y<<"\n";
}
int main()
{
	complex A(2.7,3.5);
	complex B(1.6);
	complex C;
	C.sum(A,B);	
	cout<<"A="; A.show();
	cout<<"B=";B.show();
	cout<<"C=";C.show();
    cout << "Programmed by Pierce" << endl;
}
