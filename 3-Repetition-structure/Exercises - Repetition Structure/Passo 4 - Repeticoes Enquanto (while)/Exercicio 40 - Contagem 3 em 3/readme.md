
## 🧠 Objetivo

Criar um contador que exibe números de 3 em 3 até o número 18, usando uma estrutura de repetição (`while`). O exercício foi pensado como forma de praticar a lógica de incremento e a construção de laços de repetição simples.

## 💡 Lógica aplicada

Inicialmente, tentei utilizar a sintaxe `contador++3`, mas percebi que esse formato não é válido na linguagem C.  
Após refletir sobre o funcionamento do `contador++` (que incrementa em 1), percebi que poderia repetir o comando três vezes como uma alternativa prática para entender o conceito.

contador++;
contador++;
contador++;

Posteriormente, descobri que a forma mais correta e recomendada seria:

```c
contador += 3;
