import random

def main():
    numeros = [random.randint(1, 20) for _ in range(15)]

    print("Números generados:")
    for i, num in enumerate(numeros, start=1):
        print(f"Numero {i} : {num}")

    for i in range(len(numeros) - 1):
        for j in range(len(numeros) - 1 - i):
            if numeros[j] > numeros[j + 1]:
                numeros[j], numeros[j + 1] = numeros[j + 1], numeros[j]

    print("\nNúmeros ordenados:")
    for i, num in enumerate(numeros, start=1):
        print(f"Numero {i} : {num}")

if __name__ == "__main__":
    main()
