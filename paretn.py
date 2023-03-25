def check(cadena): 
    brackets = ['()'] 
    while any(x in cadena for x in brackets): 
        for br in brackets: 
            cadena = cadena.replace(br, '') 
    return not cadena 
   
string = str(input())

if check(string) == True:
    print('SI')
else:
    print('NO')