#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

struct nodo{
      char dato;
      struct nodo *sgte;
};

typedef struct nodo *TPila;

/*                      Crear Nodo
--------------------------------------------------------------------*/

TPila crearNodo(char x)
{
      TPila newNodo = new(struct nodo);
      newNodo->dato = x;
      return newNodo;
}
/*                      Apilar
--------------------------------------------------------------------*/
void push(TPila &top, char x)
{
     TPila aux = crearNodo(x);
     aux->sgte = top;
     top = aux;
}
/*                      Desapilar
---------------------------------------------------------------------*/
char pop(TPila &top)
{
     int c ;
     TPila aux;
     
     aux = top ;
     c = aux->dato;   // asignamos el primer vamor de la pila
     top = aux->sgte ;
     delete(aux);
     return c;
}
/*                      Balanceo de simbolos de agrupacion
---------------------------------------------------------------------*/
void balanceoSimbolos( TPila &p, string cad)
{
    TPila aux;
    int i = 0;
    while( cad[i] != '\0'){
            if( cad[i]=='('){
                push( p, cad[i] );          
            }
            else if( cad[i]==')'){
                 aux = p;
                 
                 if(aux!=NULL)
                 {
                      if( cad[i]==')' )
                      {
                           if( aux->dato == '(')
                              pop( p );
                      }
                      else if( cad[i]==']' )
                      {
                           if( aux->dato == '[')
                              pop( p );
                      }
                      else if( cad[i]=='}' )
                      {
                           if( aux->dato == '{')
                              pop( p );
                      }        
                 }
                 else
                     push( p, cad[i] );
            }
            i++;           
     }
     
     if(p==NULL)
         cout<<"\n\tBalanceo CORRECTO..."<<endl;
     else
         cout<<"\n\t Balanceo INCORRECTO, faltan simbolos de agrupacion..."<<endl;          
     
     
}

/*                   FUNCION PRNCIPAL
-------------------------------------------------------------------*/

int main()
{
    TPila pila = NULL;    // creando Pila
    string cad;
    
    cout<<"\n\t\tBALANCEO DE SIMBOLOS DE AGRUPACION \n\n";
    cout<<" Ejemplo: \n\n";
    cout<<"      { [ x+y] + z + (a+b) }   Balanceo Correcto  "<<endl;
    cout<<"      { [ x+y + z + (a+b) }    Balanceo Incorrecto "<<endl<<endl;
    
    cout << " Ingrese expresion: ";
    getline(cin, cad);
    
    balanceoSimbolos( pila, cad );
    
    cout<<"\n\n";
    system("pause");
    return 0;
}