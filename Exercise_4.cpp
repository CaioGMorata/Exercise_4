/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

string ConcatRemove(const string& s, const string& t, int k) {
    // Procura o valor do prefixo comum
    int commonLength = 0;
    while (commonLength < s.size() && commonLength < t.size() && s[commonLength] == t[commonLength]) {
        commonLength++;
    }

    // Calcula o mínimo de operações necessárias.
    // ((s.size() - commonLength) --> Necessário para remoção)
    // ((t.size() - commonLength) --> Necessário para inserção)
    int operationsNeeded = (s.size() - commonLength) + (t.size() - commonLength);

    // Verifica se o número exato de operações é possível
    // Resto da divisão por 2 é sempre necessário, devido ao usuário poder remover e adicionar um caracter para equilibrar com o número de operações.
    if (k >= operationsNeeded && 
        (k - operationsNeeded) % 2 == 0 || k >= s.size() + t.size()) {
        return "yes";
    } else {
        return "no";
    }
}

int main() {
    // Strings de entrada e operações.
    string s, t;
    int k;
    getline(cin, s);
    getline(cin, t);
    cin >> k;

    // Resultado de Saída
    cout << ConcatRemove(s, t, k) << endl;

    return 0;
}
