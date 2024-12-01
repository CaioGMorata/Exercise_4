# Exercise_4
Exercício 4 / Exercise 4

//PT
O exercício foi dividido em 3 partes.

Primeira parte --> Identificar a posição do elemento comum.
Segunda Parte --> Calcular o mínimo de operações necessárias com base na remoção e posterior inserção de dados.
Terceira Parte --> Definir se com a quantidade de operações é possível realizar a conversão de strings.

Obs.: Mais detalhes estão descritos no código.

Teste: Copiar e colar o código do exercício 4 no https://onlinegdb.com/ e executar. Verificar se a saída está de acordo com o que foi solicitado.

//EN
The exercise was divided into 3 parts.

First part --> Identify the position of the common element.
Second Part --> Calculate the minimum necessary operations based on the removal and subsequent insertion of data.
Third Part --> Define whether with the number of operations it is possible to convert strings.

Note: More details are described in the code.

Test: Copy and paste the code from exercise 4 at https://onlinegdb.com/ and run. Check whether the output is in accordance with what was requested.

Exercício 5 / Exercise 5

//PT
Testes Unitários
Passo 1 --> Rodar o programa do exercício 4 no https://onlinegdb.com/ com os seguintes valores:

    ConcatRemove("blablablabla", "blablabcde", 8); //Valor Esperado: "yes"
    ConcatRemove("tab", "tab", 7); //Valor Esperado: "yes"
    ConcatRemove("abc", "def", 6); //Valor Esperado: "yes"
    ConcatRemove("abc", "def", 5); //Valor Esperado: "no"
    ConcatRemove("a", "ab", 2); //Valor Esperado: "no"
    ConcatRemove("abc", "abc", 0); //Valor Esperado: "yes"
    
    ConcatRemove("", "", 0); //Valor Esperado: "yes"
    ConcatRemove("", "abc", 3); //Valor Esperado: "yes"
    ConcatRemove("abc", "", 3); //Valor Esperado: "yes"
    ConcatRemove("abc", "abcd", 100); //Valor Esperado: "yes"
    ConcatRemove("abc", "abcd", 1); //Valor Esperado: "yes"
    ConcatRemove("abc", "xyz", 50); //Valor Esperado: "yes"

//EN
Unit Tests
Step 1 --> Run the exercise 4 at https://onlinegdb.com/ program with the following values:

    ConcatRemove("blablablabla", "blablabcde", 8); //Expected Value: "yes"
    ConcatRemove("tab", "tab", 7); //Expected Value: "yes"
    ConcatRemove("abc", "def", 6); //Expected Value: "yes"
    ConcatRemove("abc", "def", 5); //Expected Value: "no"
    ConcatRemove("a", "ab", 2); //Expected Value: "no"
    ConcatRemove("abc", "abc", 0); //Expected Value: "yes"
    
    ConcatRemove("", "", 0); //Expected Value: "yes"
    ConcatRemove("", "abc", 3); //Expected Value: "yes"
    ConcatRemove("abc", "", 3); //Expected Value: "yes"
    ConcatRemove("abc", "abcd", 100); //Expected Value: "yes"
    ConcatRemove("abc", "abcd", 1); //Expected Value: "yes"
    ConcatRemove("abc", "xyz", 50); //Expected Value: "yes"
