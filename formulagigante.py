#formula
x,y,z = map(float, input().split())


dominador = (((2*x+y)/z)*(y**3-z))
denominador = (((x+2*y+3*z)/(z-2*y-3*x)) + x**2 + z**2)


total = dominador/denominador
print(total)