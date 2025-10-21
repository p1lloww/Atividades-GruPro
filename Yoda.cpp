#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct jovem
{
    string nome;
    int missoesPassadas;
    int missoesNaoConcluidas;

    int missoesConcluidas() {
        return missoesPassadas - missoesNaoConcluidas;
    }
};


int main() {
    int n;
    cin >> n;

    vector<jovem> jovens(n);

    for (int i = 0; i < n; i++)
    {
        cin >> jovens[i].nome >> jovens[i].missoesPassadas >> jovens[i].missoesNaoConcluidas;
    }

    stable_sort(jovens.begin(), jovens.end(), 
        [](const jovem& p1, const jovem& p2) {
            return p1.nome < p2.nome;
        });

    for (jovem j : jovens) {
        cout << j.nome << " " << j.missoesConcluidas() << endl;
    }
}