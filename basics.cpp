//class and objects.....................
#include<stdio.h>
#include<iostream>
using namespace std;
/*
class book
{
	public://access modifier............
	float price;//member class
	int page;//member class
	string name;//member class
	void data()//member function............... 
	{
	cout<<"Price:"<<price<<"\n"<<"Name:"<<name<<"\n"<<"Pages:"<<page<<endl;
		
	}
};
main()
{
	book b;//object.............
	b.price=600;
	b.page=300;
	b.name="harry potter";
	//cout<<"Price:"<<b.price<<"\n"<<"Name:"<<b.name<<"\n"<<"Pages:"<<b.page<<endl;
	b.data();//function calling.............................
}
*/
/*
//Default constructors..............................
class car
{
	public:
		car()//constructors..................
		{
			cout<<"hello we are in the constructors";
		}
	};
	main()
	{
		car c;//In the case of the constructors member function is called automatically..........................
		return 0;
		
	}
	*/
	/*
	//Parameterized constructors..................................it will contains parameters.....................
	class add//class name
	{
		public:
			add(int a,int b)//constructors............
			{
				cout<<"sum"<<"="<<a+b<<endl;
			
			}
			};
			main()
			{
				add obj(7,2);
			    return 0;
			}
			*/
			/*
		//Destructors...........................
			
		class book
		{
			public:
				book()//constructors
				{
					cout<<"1.we are in the constructors!!";
				}
				~book()//destructors- they always come last at the end of the program...................
				{
					cout<<"\n4.we are in the destructors!!";
				}
				void memeber()
				{
					cout<<"\n2.Im the memeber fuction";
				}
			};
			main()
			{
				book b1;
				b1.memeber();
				cout<<"\n3.I came before this destructors\n";
		}
		*/
		/*
		//Inheritance............(single inheritance)...................
		class student//parent class or base class..............
		{
			public:
				string name;//member class
				int roll;//member class
				void data()//member function
				{
					cout<<"Name"<<"="<<name<<"\n"<<"Roll"<<"="<<roll<<endl;
				}
				};
				class record:public student//child class or derived class(inheritance concept...........)
				{
				public:
				
				
		};
		main()
		{
			student s;//object............
			s.name="mohit";
			s.roll=57;
			s.data();//function calling................
		}
		*/
		/*
		//Multi-level Inheritance........................(c inherits B and B inherits A)
		class A
		{
			public:
				A()
				{
					cout<<"construcotrs of A";
				}
		};
		class B:public A // (B inherits A)
		{
			public:
				B()
				{
					cout<<"\nconstructors of B";
				}
			};
			class C:public B  // (C inherits B)
			{
				public:
					c()
					{
						cout<<"\nconstructors of c";
					}
			};
			main()
			{
				C c1;
				//B obj;
				//A a1;
				return 0;
			}
			*/
			/*
			//Inheritance.......................................................
			//Multiple inheritance.........C inherits both A and B..............
			class A
		{
			public:
				A()
				{
					cout<<"construcotrs of A";
				}
		};
		class B
		{
			public:
				B()
				{
					cout<<"\nconstructors of B";
				}
			};
			class C:public A,public B // (C inherits both A and B)
			{
				public:
					c()
					{
						cout<<"\nconstructors of c";
					}
			};
			main()
			{
				C c1;
				//B obj;
				//A a1;
				return 0;
			}
			*/
			//Heirarichical Inheritance..................one parent class have two or more child class.........................
			/*
		class A
		{
			public:
				A()
				{
					cout<<"construcotrs of A";
				}
		};
		class B:public A // (B inherits A)
		{
			public:
				B()
				{
					cout<<"\nconstructors of B";
				}
			};
			class C:public A  // (C inherits A)
			{
				public:
					c()
					{
						cout<<"\nconstructors of c";
					}
			};
			main()
			{
				C c1;
				//B obj;
				//A a1;
				return 0;
			}
			*/
			/*
		//Hybrid Inheritance=(Multi-level+Multiple+Heirarichical inheritance)
		
		//Polymorphism...............(compile time-function overloading)..............................
		class add
		{
			public:
			add(int a,int b)//first function.............(construtors)
			{
			     cout<<"Sum is:"<<a+b;
			}
			add(int a,int b,int c)//Second function...................(Constructors)
			{
				 cout<<"sum is"<<"="<<a+b+c;
			}
		};
		main()
		{
			add s1(2,3,6);//Second function will be called........
			add s1(3,4);//first  function will be called.........
			
			
		}
		*/
		/*
		//Run-time Polymorphism.........................(Function overriding..........................)
		class A
		{
			public:
				void display()
				{
					cout<<"This is a parent class";
				}
				
			};
			class B:public A
			{
				public:
					void display()
					{
						cout<<"This is a child class";
					}
			};
			main()
			{
				//A a1;
				//a1.display();
				B b1;
				b1.display();
			}
		*/
		
		
		
		
		
		
	


