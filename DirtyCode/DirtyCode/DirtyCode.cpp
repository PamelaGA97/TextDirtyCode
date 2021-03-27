#include "Html.h"
#include "Italic.h"
#include "Bold.h"
#include "BasicText.h"
using namespace std;

int main()
{
	string text;
    cout<<"introduzca el texto a estilar:"<<endl;
    getline(cin, text);
	HtmlText* t = new Italic(new Bold(new BasicText(text)));
	t->print();
	return 0;
}
