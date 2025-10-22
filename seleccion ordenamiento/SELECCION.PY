def SELECCION(a):
    n = len(a)
    for i in range(n):
        min_idx = i
        for j in range(i + 1, n):
            if a[j] < a[min_idx]:
                min_idx = j
        a[i], a[min_idx] = a[min_idx], a[i]

def print_array(a):
    for x in a:
        print(x, end=" ")
    print()

arr = [65, 26, 13, 23, 12]
print("Arreglo antes de ordenar:")
print_array(arr)

SELECCION(arr)

print("Arreglo después de ordenar:")
print_array(arr)
