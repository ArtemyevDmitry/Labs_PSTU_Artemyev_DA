#include <iostream>

using namespace std;

const int N = 5;

int stick[3][N];
int h[3] = { 0, 0, 0 };

int step = 0;

void printState()
{
    for (int level = N - 1; level >= 0; level--)
    {
        for (int i = 0; i < 3; i++)
        {
            if (level < h[i])
            {
                int ring = stick[i][level];

                for (int j = 0; j < N - ring; j++)
                    cout << " ";

                for (int j = 0; j < 2 * ring - 1; j++)
                    cout << "=";

                for (int j = 0; j < N - ring; j++)
                    cout << " ";
            }
            else
            {
                for (int j = 0; j < 2 * N - 1; j++)
                    cout << " ";
            }

            cout << "   ";
        }

        cout << endl;
    }

    for (int i = 0; i < 3; i++)
        cout << "_________   ";

    cout << endl;

    cout << "    A           B           C" << endl;

    cin.get();
}

void hanoi(int n, int from, int to, int spare)
{
    if (n == 0)
        return;

    hanoi(n - 1, from, spare, to);

    int ring = stick[from][h[from] - 1];

    h[from]--;

    stick[to][h[to]] = ring;
    h[to]++;

    step++;

    cout << "\nШаг " << step << endl;

    printState();

    hanoi(n - 1, spare, to, from);
}

int main()
{
    setlocale(LC_ALL, ".65001");

    for (int i = 0; i < N; i++)
    {
        stick[0][i] = N - i;
    }

    h[0] = N;

    printState();

    hanoi(N, 0, 2, 1);
    
    printState();

    cout << "Всего перемещений: " << step << endl;

    return 0;
}