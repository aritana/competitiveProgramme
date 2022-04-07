#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{
    // declarar variaveis
    int row, col = 0;
    int x, y = 0;

    // coletar linha e coluna
    cin >> row >> col;

    // declarar vector bi-dimensional com 'row' linhas para armazenar pontos
    vector<vector<int>> vec(row);

    // coletar pontos da imagem
    for (int i = 0; i < row; i++)
    {
        vec[i] = vector<int>(col);

        for (int j = 0; j < col; j++)
        {
            cin >> vec[i][j];
        }
    }

    // coletar comandos
    do
    {
        cin >> x >> y;

        //executar comando para alterar a matriz


    } while (x != 0 || y != 0);

    return 0;
}
