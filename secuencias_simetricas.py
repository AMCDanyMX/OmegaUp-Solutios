a, b, c, d = input().split() 

arreglo =  [] 
arreglo.append(a)
arreglo.append(b)
arreglo.append(c)
arreglo.append(d)

for i in arreglo:
    if arreglo[0] == arreglo[-1]:
        print(1)
        break
    else:
        print(0)
        break
