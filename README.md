# Exercise_4
Exercício 4

O exercício foi dividido em 3 partes.

Primeira parte --> Identificar a posição do elemento comum.
Segunda Parte --> Calcular o mínimo de operações necessárias com base na remoção e posterior inserção de dados.
Terceira Parte --> Definir se com a quantidade de operações é possível realizar a conversão de strings.

Obs.: Mais detalhes estão descritos no código.

Exercício 5

Passo 1 --> Rodar o programa do exercício 4 com os seguintes valores:

    canConvert("blablablabla", "blablabcde", 8); //Valor Esperado: "yes"
    canConvert("tab", "tab", 7); //Valor Esperado: "yes"
    canConvert("abc", "def", 6); //Valor Esperado: "yes"
    canConvert("abc", "def", 5); //Valor Esperado: "no"
    canConvert("a", "ab", 2); //Valor Esperado: "no"
    canConvert("abc", "abc", 0); //Valor Esperado: "yes"
    
    canConvert("", "", 0); //Valor Esperado: "yes"
    canConvert("", "abc", 3); //Valor Esperado: "yes"
    canConvert("abc", "", 3); //Valor Esperado: "yes"
    canConvert("abc", "abcd", 100); //Valor Esperado: "yes"
    canConvert("abc", "abcd", 1); //Valor Esperado: "yes"
    canConvert("abc", "xyz", 50); //Valor Esperado: "yes"
