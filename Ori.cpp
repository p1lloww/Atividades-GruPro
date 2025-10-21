#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main() {
    int missoes;
    cin >> missoes;

    vector<pair<int, int>> XPMissaoBonus(missoes);
    for (int i = 0, j = 0; i < missoes * 2; i++)
    {
        if (i < missoes) {
            cin >> XPMissaoBonus[i].first;
        }

        if (i >= missoes) {
            cin >> XPMissaoBonus[j].second;
            j++;
        }
    }

    int minimo;
    cin >> minimo;

    int bonusAdicional;
    cin >> bonusAdicional;

    int count = 0;
    for (int i = 0; i < missoes; i++) {
        count += (XPMissaoBonus[i].second + bonusAdicional) * XPMissaoBonus[i].first;
    }

    if (count >= minimo) {
        cout << "Upou de Nivel!";
    } else {
        cout << "Nao foi dessa vez!";
    }

    return 0;
}