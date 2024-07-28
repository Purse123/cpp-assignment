#include<iostream>
using namespace std;
class item{
	
	 static int X ;
		public:
		void get()
		{   
			cout<<"X = "<<X<<"\n";
			X++;
    	}
		
	
};

int item :: X;//definition of static data member. can also be initialized as
			// int item :: count = 10;
int main()
{
	item a,b,c;
	
	a.get();
	b.get();
	c.get();
    cout << "Programmed by Pierce" << endl;
}
