#include <string>
#include <iostream>
using namespace std;

class Ht
{
public:
	Ht();
	virtual void funcion() = 0;
};
Ht::Ht()
{
}

class Basic : public Ht
{
public:
	string atributo;
	Basic(string t);
	void funcion();
};
Basic::Basic(string t)
{
	atributo = t;
}
void Basic::funcion()
{
	cout << atributo << endl;
}

class B : public Ht
{
public:
	Ht* text2;
	B(Ht* t);
	void funcion();
};
B::B(Ht* t)
{
	text2 = t;
}

void B::funcion()
{
	cout << "<b>" << endl;
	text2->funcion();
	cout << "</b>" << endl;
}

class I : public Ht
{
public:
	Ht* text1;
	I(Ht* t);
	void funcion();
};
I::I(Ht* t)
{
	text1 = t;
}
void I::funcion()
{
	cout << "<i>" << endl;
	text1->funcion();
	cout << "</i>" << endl;
}

int main()
{
	Ht* t = new I(new B(new Basic("DirtyCode")));
	t->funcion();
	return 0;
}