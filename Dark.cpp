#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

struct Data
{
    int dia;
    int mes;
    int ano;
};

bool cmp(const Data& data1, const Data& data2) {
    if (data1.ano != data2.ano) {
        return data1.ano < data2.ano;
    }

    if (data1.mes != data2.mes) {
        return data1.mes < data2.mes;
    }

    return data1.dia < data2.dia;
}

int main() {
    vector<Data> datas;
    Data data;
    while (cin >> data.dia >> data.mes >> data.ano) {
        datas.push_back(data);
    }

    stable_sort(datas.begin(), datas.end(), cmp);

    for (int i = 0; i < datas.size(); i++)
    {
        cout << datas[i].dia << " " << datas[i].mes << " " << datas[i].ano << endl;
    }
    
    return 0;
}