arreglo = [10, 20, 30, 40, 50]
elemento_buscado = 30
encontrado = False

for i in range(len(arreglo)):
    if arreglo[i] == elemento_buscado:
        print(f"Elemento {elemento_buscado} encontrado en la posición {i}")
        encontrado = True
        break

if not encontrado:
    print("Elemento no encontrado")