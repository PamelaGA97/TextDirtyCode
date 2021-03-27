El codigo recibe un texto y se utiliza ese texto para genera el codigo en HTML para poner el texto en estilo Italica y Negrita:
<i>
    <b>
        textoIngresado
    </b>
</i>

**El codigo fue compilado en: https://paiza.io/ **

#Renombrando clases

Ht -> HtmlText (linea 5)

I -> Italic (estilo italica) (Linea 50)

B -> Bold (estilo negrita) (linea 31)

Basic -> BasicText (texto introducido) (linea 15)


#Renombrando atributos y metodos en la clases

En: Ht -> HtmlText

	Ht() -> HtmlText() (Linea 8)
	
        funcion() -> print() (Linea 9)
	
En: I -> Italic

        Ht* text1 -> HtmlText* htmlText; (Linea 53)
	
        I(Ht* t) -> Italic(HtmlText* t); (Linea 54)
	
	    funcion() -> print(); (Linea 55)
	    
En: B -> Bold

        Ht* text2 -> HtmlText* htmlText; (Linea 34)
	
        B(Ht* t) -> Bold(HtmlText* t); (Linea 35)
	
	    funcion() -> print(); (Linea 36)
	    
En: Basic -> BasicText

        string atributo -> string text; (Linea 18)
	
        Basic(string t) -> BasicText(string t); (Linea 19)
	
	    funcion() -> print(); (Liena 20)

#Atributos publicos fueron cambiados en privados

En: I -> Italic

        Ht* text1 -> HtmlText* htmlText;(publico a privado) (Linea 53)

En: B -> Bold

        Ht* text2 -> HtmlText* htmlText;(publico a privado) (Linea 34)

En: Basic -> BasicText

        string atributo -> string text;(publico a privado) (Linea 18)


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

        
