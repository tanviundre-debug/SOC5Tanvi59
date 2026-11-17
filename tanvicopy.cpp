#include<iostream>
using namespace std;
class Book
{
 public:
 string name;
 int id;
 Book(string n,int i)
 {
  name=n;
  id=i;
 }
Book(Book &b)
{
 name=b.name;
 id=b.id;
}
void display()
{
 cout<<"The book name is"<<name<<endl;
 cout<<"The book ID is"<<id<<endl;
}
};
int main()
{
 Book b1("Atomic habits",1234);
 Book b2(b1);
 b1.display();
 b2.display();
 return 0;
}
