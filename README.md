- int: O tipo int é usado para representar um inteiro, e poderia fazer uma correlaçãoo com os números do conjunto dos naturais na matemática. São eles {..., -2, -1, 0, 1, 2, 3,..}.
Como se declara?

```int a;```


Colocando a palavra ```int``` com letras minúsculas e a variável também, estamos dizendo que a variável " a " � do tipo inteiro.

- Se fizermos algo do tipo:

a = 9.34567;


Esse número n�o inteiro que foi atribu�do a vari�vel " a " ser� truncado, ou arredondado se preferir, para o valor 9.

- float e double: Bastante semelhantes mas n�o iguais. Grave isso: "O tipo float ocupa menor espa�o na mem�ria, enquanto double tem maior precis�o". Como assim? S�o utilizados para representar n�meros fracionados. O tipo float oferece 4 d�gitos de precis�o enquanto o double oferece 8 d�gitos.

Como se declara?

```float a```;
```double b```;


- Se quis�ssemos atribuir o valor 4.67589345786 com menor arredondamento, para qual vari�vel seria? A resposta � a vari�vel " b " uma vez que ela oferece 8 d�gitos de precis�o. Quando usar uma ou outra? Quando n�o se precisa de tanta precis�o, j� que o tipo float ocupa menos mem�ria. Mas cuidado, essa falta de precis�o pode fazer um foguete explodir!

char: Simples, char � para caracteres! Como? Veja o exemplo:

```char a = x```;


Declaramos que a VARI�VEL " a " recebeu o CARACTERE " x "!
Serve para palavras ou frases? N�o, palavras e frases s�o strings!

- void: Void � vazio, ou sem tipo. Veremos isso mais a frente em m�todos ou fun��es e classes. Por enquanto considere que void � apenas um tipo vazio.