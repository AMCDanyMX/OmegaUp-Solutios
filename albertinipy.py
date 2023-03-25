datosArreglo = []

datos = int(input())

for i in range(datos):
    x = int(input())
    datosArreglo.append(x)
    
datosArreglo.sort()
print(datosArreglo)