//oops concept in c++..................................
// 1.class and objects..................................
#include<stdio.h>
#include<iostream>
using namespace std;
/*
class book//class name.....
{
	public://access modifier....
	string name;//member class
	int pages;//member class
	float price;//member class
	void data()//function.................
	{
		cout<<"Name="<<name<<"\n"<<"Pages="<<pages<<"\n"<<"Price="<<price<<endl;
	}
};
main()//main function..............
{
	book b;//object of a class...........
	//b.name="harry potter";
	//b.pages=900;
	//b.price=8000;
	//cout<<b.name<<"\n"<<b.pages<<"\n"<<b.price<<endl;
	cout<<"enter the values\n";// for user input...............
	cin>>b.name>>b.pages>>b.price;
	b.data();//fuction calling................
	return 0;
}
*/

//2.CONSTRUCTORS IN C++ OOPS............THEY ARE THE SPECIAL MEMBER FUNCTION..............
/*
class car//class name..............
{
	public://access modifier..................................
	car()//constructors function...//name is same as the class name...........................
	{
		cout<<"hello world you are in the constructors";
	}
};
main()//main function.........
{
	car c;//when object is created then the constructors is automatically called by thier own.....................
	return 0;
	
}
*/
/*
//3.USES OF THE CONSTRUCTORS..........
class book//class name............
{
	public://acccess modifier
		book(string x)//constructors
		{
			setName(x);
		}
		void setName(string x)//setter function..........
		{
			
			name=x;
		}
		string getName()//getter function.........
		{
			return name;
		}
		private:
			string name;//member class
		};
		main()
		{
			book b1("C++ tutorials");//object created....................
		cout<<b1.getName()<<endl;
	
		}
		*/
		//4.SETTER AND GETTER FUNCTION..................it is mainly used with private access modifier.....................
		/*
		
		class car
	{
		public:
			void setName(string x)//setter function
			{
				name=x;
			}
			string getName()//getter function
			{
				return name;
			}
			private://access modifier
				string name;
			};
			main()
			{
				car c;//object of the class
				c.setName("ferrari");//call setter function...........
				c.getName();//call getter function.....................
				cout<<c.getName();
				
			}
			*/
			/*
		//5.DESTRUCTORS....................THEY DESTROY THE OBJECT WHEN IT GOES OUT OF THE RANGE.................
			class book
			{
				public:
				book()//consturctors..............
				{
					cout<<"we are in constructors"<<endl;
				}
			~book()//~(destructors).......................
			{
				cout<<"we are in destructors"<<endl;
			}
		};
		main()
		{
			book b2;//object created.............
			cout<<"hello world"<<endl;
			cout<<"!!welcome to the world of the programming!!"<<endl;
			;
			return 0;
		}
		*/
		//6.INHERITANCE..........................IN THIS CASE DERIVED CLASS  INHERIT PROPERTIES OF THE BASE CLASS.............................
		// AREA OF THE TRIANGLE............USING INHERITANCE...................
		/*
		class shape//base class..............
		{
			public:
				void setValue(int a,int b)//setter function.................
				{
					base=a;//member variable.............
					height=b;//member variable............
				}
				protected://access modifier..................
					int base ;
					int height;
				};
				
				
					class triangle :public shape//derived class............(inherited class)
					{
						public:
					
					int area()
					{
						return (0.5*base*height);
					}
			
				};
				main()//main function
				{
					triangle t1;//object created.....................
					t1.setValue(2,3);//set values.....................
					cout<<"Area of the triangle"<<"="<<t1.area()<<endl;
				}
				*/
