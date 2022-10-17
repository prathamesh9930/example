#include<iostream>
using namespace std;
class A
{
	   public:
	   	       a()
	   	       {
	   	       	cout<<"a is vowels"<<end1;
				  }
};
class B
{
	    public:
	    	 b()
	    	 {
	    	 	cout<<"b is constant"<<end1;
			 }
			
			
};
class c
{
	    public:
	    	  c()
	    	  {
	    	  	cout<<"c is constant"<<end1;
			  }
};
class D:public A,public B,public C
{
    public:
    	   d()
    	   {
    	   	  cout<<"d is constant"<<end1;
    	   	  
		   }
};
int main()
{
	D d;
	d.a();
	d.b();
	d.c();
	return 0;
}
		   
		   
		   
		   
		   
