from ast import Expression
from pythoned.basicas.pila import Pila

def verificarParentesis(cadenaSimbolos):
    p = Pila()
    balanceados = True
    indice = 0
    while indice < len(cadenaSimbolos) and balanceados:
        simbolo = cadenaSimbolos[indice]
        if simbolo == "(":
            p.incluir(simbolo)
        else:
            if p.estaVacia():
                balanceados = False
            else:
                p.extraer()

        indice = indice + 1

    if balanceados and p.estaVacia():
        return True
    else:
        return False
        

expresion = str(input()) 
if(verificarParentesis(expresion) == True):
    print("SI")
else:
    print("NO")    

