El codigo recibe un texto y se utiliza ese texto para genera el codigo en HTML para poner el texto en estilo Italica y Negrita:
<i>
    <b>
        textoIngresado
    </b>
</i>

**El codigo fue compilado en: https://paiza.io/ **

#Renombrando clases
Ht -> HtmlText
I -> Italic (estilo italica)
B -> Bold (estilo negrita)
Basic -> BasicText (texto introducido)


#Renombrando atributos y metodos en la clases
En: Ht -> HtmlText
        Ht() -> HtmlText()
        funcion() -> print() 
En: I -> Italic
        Ht* text1 -> HtmlText* htmlText;
        I(Ht* t) -> Italic(HtmlText* t);
	    funcion() -> print();
En: B -> Bold
        Ht* text2 -> HtmlText* htmlText;
        B(Ht* t) -> Bold(HtmlText* t);
	    funcion() -> print();
En: Basic -> BasicText
        string atributo -> string text;
        Basic(string t) -> BasicText(string t);
	    funcion() -> print();

#Atributos publicos fueron cambiados en privados

En: I -> Italic
        Ht* text1 -> HtmlText* htmlText;(publico a privado)

En: B -> Bold
        Ht* text2 -> HtmlText* htmlText;(publico a privado)

En: Basic -> BasicText
        string atributo -> string text;(publico a privado)


#Separando la logica en archivos
Para: Ht -> HtmlText
        Html.h
        Html.cpp
Para: I -> Italic
        Italic.h
        Italic.cpp
Para: B -> Bold
        Bold.h
        Bold.cpp
Para: Basic -> BasicText
        BasicText.h
        BasicText.cpp

#Tal vez no sea codeSmell pero el texto era siempre el mismo para cambiar
eso se agrego codigo para que el usuario pueda ingresar su propio texto
Antes:
   int main()
    {
        Ht* t = new I(new B(new Basic("DirtyCode")));
        t->funcion();
        return 0;
    }

Despues:
    int main()
    {
        string text;
        cout<<"introduzca el texto a estilar:"<<endl;
        getline(cin, text);
        HtmlText* t = new Italic(new Bold(new BasicText(text)));
        t->print();
        return 0;
    }

        