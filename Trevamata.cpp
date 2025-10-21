#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct amigo
{
    string nome;
    int peso;
};


int main() {
    int size;
    cin >> size;

    vector<amigo> amigos;
    amigo aux;

    for (int i = 0; i < size; i++)
    {
        cin >> aux.nome >> aux.peso;
        amigos.push_back(aux);
    }

    int pesoMaximo;
    cin >> pesoMaximo;
    bool passagem = true;

    for (int i = 0; i < size; i++)
    {
        if (amigos[i].peso > pesoMaximo && passagem == true) {
            passagem = false;
            cout << "Vamos virar almoço de aranhas gigantes!" << endl;
        }

        if(amigos[i].peso > pesoMaximo && !passagem) {
            cout << amigos[i].nome << endl;
        }
    }

    if (passagem) {
        cout << "Vamos todos encontrar a montanha!";
    }

    return 0;
}