f, c = 3, 3
twoDarr = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
]

print("PROGRAMA DE RECORRIDO DE COLUMNAS")

for j in range(c):
    print("Columna", j+1, ":", end=" ")
    for i in range(f):
        print(twoDarr[i][j], end=" ")
    print()
