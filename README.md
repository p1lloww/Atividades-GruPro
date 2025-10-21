# 💻 Soluções de Desafios | Grupo de Programação Competitiva UFBA (GRUPRO)

Este repositório apresenta as soluções em C++ desenvolvidas para desafios propostos pelo **Grupo de Programação Competitiva (GRUPRO) da UFBA**. Os problemas exploram temas diversos, como a série *Dark*, *Star Wars*, e *Ori and the Blind Forest*, servindo como um excelente portfólio de habilidades em algoritmos, estruturas de dados e práticas de codificação em C++.

---

## 🛠️ Detalhes Técnicos e Estrutura dos Projetos

Cada solução implementa de forma eficiente a lógica requerida, com foco em complexidade e aderência ao padrão C++ idiomático.

| Arquivo (`.cpp`) | Tema | Foco Algorítmico Principal |
| :--- | :--- | :--- |
| **`Dark.cpp`** | Viagem no Tempo (Dark) | **Ordenação Customizada:** Uso de `struct` e `std::stable_sort` com função de comparação para ordenação hierárquica (Ano $\rightarrow$ Mês $\rightarrow$ Dia). |
| **`Yoda.cpp`** | Seleção de Padawans (Star Wars) | **Ordenação com Lambda:** Cálculo de métrica (`missoesConcluidas`) e uso de `std::stable_sort` com *lambda function* para ordenação por `std::string` (ordem alfabética). |
| **`Ori.cpp`** | Subindo de Nível (Ori) | **Aritmética e Estrutura de Entrada:** Cálculo de soma ponderada (XP Total) baseado em bônus e validação de limiares. Uso eficiente de `std::vector<std::pair>`. |
| **`Trevamata.cpp`** | Peso na Trilha (O Hobbit) | **Lógica Condicional e Flag:** Iteração e uso de variáveis de *flag* (`bool passagem`) para controlar a saída e imprimir resultados após uma condição ser atingida. |

---

## 🚀 Análise Detalhada das Soluções

### `Dark.cpp`: Organização Temporal

O problema simula a necessidade de Jonas Kahnwald (da série Dark) de organizar datas não-lineares.

* **Estruturas:** `struct Data` para encapsulamento de D/M/A.
* **Técnica:** Leitura via `while (cin >> ...)` para lidar com entradas de múltiplas linhas terminadas em EOF. A função de comparação (`cmp`) garante a correta ordem cronológica.

### `Yoda.cpp`: Seleção Alfabética e Métrica

Desafio em que Mestre Yoda precisa de uma lista de jovens Jedi ordenada pelo nome, exibindo uma métrica de desempenho.

* **Modelagem:** O `struct jovem` utiliza um método membro `missoesConcluidas()` para expor a métrica calculada, uma prática que mantém a lógica de negócios dentro da estrutura.
* **Idiomático:** A utilização de uma **lambda function** diretamente na chamada de `std::stable_sort` é a forma moderna e concisa de definir o critério de ordenação *ad-hoc*.

### `Ori.cpp`: Cálculo de Pontuação

A lógica foca no cálculo preciso do XP total de Ori, aplicando um bônus adicional a cada missão.

* **Fórmula Implementada:** $XP_{Total} = \sum_{i=1}^{N} [ XP_{i} \cdot (Bônus_{Base, i} + Bônus_{Adicional}) ]$.
* **Armazenamento:** Os dados de entrada (XP e Bônus Base) são lidos em um único `std::vector<std::pair>`, otimizando o acesso durante a fase de cálculo.

### `Trevamata.cpp`: Lógica de Contingência

Simula uma situação de travessia com limite de peso, exigindo a identificação dos elementos que causaram a falha.

* **Controle de Fluxo:** O *loop* principal usa a *flag* booleana `passagem` para:
    1.  Determinar quando a falha ocorreu (`passagem = false`).
    2.  Assegurar que a mensagem inicial de falha seja impressa **apenas uma vez**.
    3.  Imprimir sequencialmente os nomes dos viajantes que excederam o limite após a falha.

---

## 🛠️ Como Compilar e Executar

Para compilar e testar as soluções, você precisará de um compilador C++ (g++ ou clang) configurado.

```bash
# 1. Compilar o arquivo (Exemplo: Dark.cpp)
g++ Dark.cpp -o dark_solver

# 2. Executar e fornecer entrada
# Para entradas que terminam em EOF, use Ctrl+D (Linux/macOS) ou Ctrl+Z (Windows) após digitar os dados.
./dark_solver
