#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int n, op, maior = 0, menor;
    cout << "Insira o Número de Valores da Lista: \n";
    cin >> n;
    int lista[n];
    for (int i=0; i<n; ++i)
    {
    cout << "Insira o " << i+1 << "º Valor da Lista: \n" << endl;
    cin >> lista[i];
        if (lista[i] > maior)
        {
            maior = lista[i];
        }
        menor = lista[i];
        if (lista[i] < menor)
        {
            menor = lista[i];
        }
    }

    for (int i=0; i<n; ++i)
    {
        cout << "O Valor Contido Em [" << i << "] é : " << lista[i] << "." << endl;
    }
    cout << "O Maior Valor Contido na Lista é : " << maior <<  endl;
    cout << "O Menor Valor Contido na Lista é : " << menor <<  endl;
    cout << "Deseja Continuar ? \n1 - SIM. \n2 - NÃo." << endl;
    cin >> op;
    if (op == 1)
    {
        return main();
    }
    else
    {
        cout << "Obrigado por usar o Codigo ;)";
    }
    return 0;
}
