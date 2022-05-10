#include <stdio.h>

class Horario
{
public:
    int horas, minutos, segundos;

    Horario() {}

    Horario(int horas, int minutos, int segundos)
    {
        this->horas = horas;
        this->minutos = minutos;
        this->segundos = segundos;
    }

    // TODO: Implementar o operador de adição.
    Horario operator+(Horario b)
    {
        if (segundos + b.segundos > 59)
        {
            minutos++;
            segundos = (segundos + b.segundos) - 60;
        }
        else
        {
            segundos += b.segundos;
        }
        if (minutos + b.minutos > 59)
        {
            horas++;
            minutos = (minutos + b.minutos) - 60;
        }
        else
        {
            minutos += b.minutos;
        }
        if (horas + b.horas > 23)
        {
            horas = (horas + b.horas) - 24;
        }
        else
        {
            horas += b.horas;
        }
        return Horario(horas, minutos, segundos);
    }

    // TODO: Implementar o operador de subtração.
    Horario operator-(Horario b)
    {
        if (segundos - b.segundos < 0)
        {
            minutos--;
            segundos = (segundos - b.segundos) + 60;
        }
        else
        {
            segundos -= b.segundos;
        }
        if (minutos - b.minutos < 0)
        {
            horas--;
            minutos = (minutos - b.minutos) + 60;
        }
        else
        {
            minutos -= b.minutos;
        }
        if (horas - b.horas < 0)
        {
            horas = (horas - b.horas) + 24;
        }
        else
        {
            horas -= b.horas;
        }
        return Horario(horas, minutos, segundos);
    }
};

int main()
{
    Horario a, b, c;
    char op;

    scanf("%d:%d:%d", &a.horas, &a.minutos, &a.segundos);
    scanf("%d:%d:%d", &b.horas, &b.minutos, &b.segundos);
    scanf(" %c", &op);

    if (op == 'A')
    {
        c = a + b;
    }
    else if (op == 'S')
    {
        c = a - b;
    }

    printf("%02d:%02d:%02d\n", c.horas, c.minutos, c.segundos);
}
