#include<iostream>
using namespace std;
class A1 { int data;
public:
A1(int i = 10 ) : data(i){ cout << "I am constructing an A1 with: " << i << endl; }
A1(const A1& a1) : data(a1.data)
{ cout << "I am copy constructing an A1" << endl; }
~A1() { cout << "I am destroying an A1 with: " << data << endl; }
void change() { data = data * 10; } };
class A2 { int data;
public:
A2(int i = 20 ) : data(i)
{ cout << "I am constructing an A2 with: " << i << endl; }
A2(const A2& a2) : data(a2.data)
{ cout << "I am copy constructing an A2" << endl; }
~A2() { cout << "I am destroying an A2 with: " << data << endl; }
void change() { data = data * 20; } };
class A3 {
public:
A3() { cout << "I am constructing an A3" << endl; }
A3(const A3& a3)
{ cout << "I am copy constructing an A3" << endl; }
~A3() { cout << "I am destroying an A3" << endl; }
void change() { cout << "Nothing to change" << endl; } };
class A { A1 a1; A2 a2; A3 a3;
public:
A() { cout << "I am constructing an A" << endl; }
A(const A& a) : a1(a.a1)
{ cout << "I am copy constructing an A" << endl; }
~A() { cout << "I am destroying an A" << endl; }
A& operator=(const A& a)
{ cout << "I am performing a stupid assignment between As" << endl;
if (this != &a) a1 = a.a1;
return *this ;}
void change() { a1.change(); a2.change(); a3.change(); } };
class BigA { A data1; A& data2;
public:
BigA(A& a): data1(a), data2(a)
{ cout << "I just constructed a BigA" << endl; }
~BigA() { cout << "I am destroying a BigA" << endl; }
A get(int index) { if (index == 1) return data1;
else return data2; } };


//BigA volta(BigA& biga)
BigA& volta(BigA& biga)
{ cout << "Volta ta data?" << endl;
return biga; }


int main() {
A first; cout << "--\n"; A second(first);cout << "--\n"; A third = first;cout << "--\n";
third.change();cout << "--\n"; second = third;cout << "--\n";BigA biga(first);cout << "--\n";
volta(biga).get(2).change();cout << "--\n";
return 0; }
