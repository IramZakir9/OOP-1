#include <iostream>
using namespace std;
class B 
{
private:
int age;
public:
int roll_no;
void getdata() 
    {
cout<<"Enter age";
cin>>age;
cout<<"Enter roll_no";
cin>>roll_no;
}
void Name() 
{
cout<<"Name"<<endl;
}
void Age() 
{
cout<<"Age"<<endl;
}
void RollNo() 
{
cout<<"RollNo"<<endl;
}
};
class D : private B 
{
private:
string colour;
public:
void getdata()
{
B::getdata(); 
cout<<"Enter colour";
cin>>colour;
}
void Taste() 
{
cout<<"Taste"<<endl;
}
void Name()
{
B::Name();
}
void Age()
{
B::Age();
}
void RollNo()
{
B::RollNo();
}
};
int main()
{
D a1,a2;
a1.getdata();
a1.Taste();
a1.Name();
a2.getdata();
a2.Name();
a2.Age();
a2.RollNo();
return 0;
}