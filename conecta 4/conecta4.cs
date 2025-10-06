using System;

class Conecta4
{
    const int Fil = 6;
    const int Colu = 7;

    static void Inicializar(char[,] tablero)
    {
        for (int i = 0; i < Fil; i++)
        {
            for (int j = 0; j < Colu; j++)
            {
                tablero[i, j] = ' ';
            }
        }
    }

    static void Mostrar(char[,] tablero)
    {
        Console.WriteLine();
        for (int i = 0; i < Fil; i++)
        {
            Console.Write("|");
            for (int j = 0; j < Colu; j++)
            {
                Console.Write(tablero[i, j] + "|");
            }
            Console.WriteLine();
        }
        Console.WriteLine(" 1 2 3 4 5 6 7");
        Console.WriteLine();
    }

    static bool PonerFicha(char[,] tablero, int col, char ficha)
    {
        col -= 1;
        if (col < 0 || col >= Colu) return false;
        
        for (int i = Fil - 1; i >= 0; i--)
        {
            if (tablero[i, col] == ' ')
            {
                tablero[i, col] = ficha;
                return true;
            }
        }
        return false;
    }

    static bool Ganador(char[,] t, char f)
    {
        for (int i = 0; i < Fil; i++)
        {
            for (int j = 0; j < Colu - 3; j++)
            {
                if (t[i, j] == f && t[i, j + 1] == f && t[i, j + 2] == f && t[i, j + 3] == f)
                    return true;
            }
        }

        for (int i = 0; i < Fil - 3; i++)
        {
            for (int j = 0; j < Colu; j++)
            {
                if (t[i, j] == f && t[i + 1, j] == f && t[i + 2, j] == f && t[i + 3, j] == f)
                    return true;
            }
        }

        for (int i = 0; i < Fil - 3; i++)
        {
            for (int j = 0; j < Colu - 3; j++)
            {
                if (t[i, j] == f && t[i + 1, j + 1] == f && t[i + 2, j + 2] == f && t[i + 3, j + 3] == f)
                    return true;
            }
        }

        for (int i = 3; i < Fil; i++)
        {
            for (int j = 0; j < Colu - 3; j++)
            {
                if (t[i, j] == f && t[i - 1, j + 1] == f && t[i - 2, j + 2] == f && t[i - 3, j + 3] == f)
                    return true;
            }
        }
        
        return false;
    }

    static bool Lleno(char[,] tablero)
    {
        for (int j = 0; j < Colu; j++)
        {
            if (tablero[0, j] == ' ') return false;
        }
        return true;
    }

    static void Main()
    {
        char[,] tablero = new char[Fil, Colu];
        Inicializar(tablero);

        char jugador = 'X';
        bool fin = false;

        while (!fin)
        {
            Mostrar(tablero);
            Console.Write($"Turno del jugador {jugador}. Elige columna (1-7): ");
            
            if (!int.TryParse(Console.ReadLine(), out int colum))
            {
                Console.WriteLine("Entrada inválida. Debe ser un número.");
                continue;
            }

            if (!PonerFicha(tablero, colum, jugador))
            {
                Console.WriteLine("Columna inválida o llena. Intenta otra vez.");
                continue;
            }

            if (Ganador(tablero, jugador))
            {
                Mostrar(tablero);
                Console.WriteLine($"¡Jugador {jugador} gana!");
                fin = true;
            }
            else if (Lleno(tablero))
            {
                Mostrar(tablero);
                Console.WriteLine("¡Empate!");
                fin = true;
            }
            else
            {
                jugador = (jugador == 'X') ? 'O' : 'X';
            }
        }
    }
}