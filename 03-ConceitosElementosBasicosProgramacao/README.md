
## 3. Conceitos e Elementos básicos da Programação
  
  Cada linguagem de programação possui dicionários, conjuntos de regras, estruturas de controle e tipos de dados.
  
  **Dicionário**  
  Dicionário de uma linguagem de programação é tudo que ela aceita. É a coleção de todas as palavras que podem ser usadas na linguagem, como em uma língua falada, mas em vez de existirem milhares de palavras, uma linguagem de programação possui em torno de 50. 
  
  **Palavras Reservadas**  
  As palavras do dicionário que são definidas pela linguagem (como se viessem de fábrica contidas nela) são conhecidas como palavras reservadas ou palavras-chave. A maioria das linguagens possui palavras reservadas escritas em inglês e que expressam estruturas de controle e tipos de dados.
  
  **Valores**  
  Valores podem ser números, mas também podem ser textos e valores lógicos (que representem apenas um par de opções, como verdadeiro ou falso, 0 e 1, ligado e desligado, sim ou não). Os valores representam os elementos de linguagens de programação que também são conhecidos como *literais* ou valores literais, encarados como valores finais, que não mudam de valor.
  
  **Operadores**  
  Os operadores são um dos principais elementos de linguagens de programação e também entram no dicionário. Os mais óbvios são os usados para realizar operações matemáticas, como soma, subtração, divisão e multiplicação, de modo a funcionar como uma calculadora. Existem também operadores de atribuição (que usam o sinal de =), de lógica (como os de comparação, inversão) e os que atuam sobre dados que não necessariamente precisam ser números.
  
  **Identificadores**  
  Identificadores são nomes que o programador tem que inventar para criar variáveis e outros elementos de linguagens de programação e que também entram no dicionário. Durante o processo de escrita do código será preciso criar nomes para guardar valores. Esses nomes podem ser chamado de variáveis, propriedades, atributos, objetos, funções, enfim, seja qual for, servem para armazenar valores e o nome precisa ser criado pelo programador. 
  
  Não é possível também criar um identificador com o nome de uma palavra reservada. O programa que lê o código precisa conseguir diferenciar o que é palavra reservada de identificador.
  
  **Regras**  
  Uma linguagem também possui regras, que estabelecem as restrições e as possíveis combinações entre as palavras do dicionário. As regras são divididas em sintaxe (como se escreve) e semântica (o que se escreve, significado).
  
  **Estruturas de Controle**  
  A ordem de execução de um código é sempre de cima para baixo. Essa ordem estabelece uma sequência de instruções pela qual os dados irão passar quando o programa rodar.
  
  Uma linguagem de programação conta com os seguintes tipos de estruturas:

* **Estrutura de dados:** estruturas lógicas para armazenar dados em arrays (vetores), listas ligadas, árvores, heaps e outras.
* **Estruturas de seleção:** estruturas condicionais para selecionar um fluxo de dados a seguir no código.
* **Estruturas de repetição:** estruturas para realizar a iteração de um trecho de código, conhecidas como loops.
  
### 1. Tipos de Dados (simples e compostos)  

**Valores:**	tudo	aquilo	que	pode	ser	avaliado,	armazenado	e	passado	como	parâmetro  
**Tipos:** conjunto	de	valores	e	de	operações	que	estão	definidas	para	os	mesmos	

Um tipo de dado nada mais que é algo do mundo real que pode ser representado computacionalmente. Define os valores que um dado pode assumir e as operações que podem ser efetuadas sobre o dado.

**Tipos de Dados Primitivos**

Não	podem	ser	decompostos	em	valores	mais	simples,	ou	seja,	são	atômicos.

* Números: 
  * Inteiros: Valores inteiros, positivos ou negativos.
  * Números de ponto flutuante: Valores fracionários, positivos ou negativos.
* Caracteres
  * Representam as letras (A-Z), os dígitos numéricos (0-9) e sinais especiais.
  * Aparecem entre aspas simples.
* Valores Lógicos ou Booleanas
  * Um valor lógico pode estar em um dos dois estados: verdadeiro ou falso.

**Tipos Compostos**  
Um tipo composto pode ser construído em uma linguagem de programação a partir de tipos primitivos e de outros tipos compostos, em um processo chamado composição, como registros,	vetores,	listas e arquivos. Uma classe chamada Carro é um tipo de dados que agrupa outras variáveis básicas como marca, cor, ano, modelo, etc.

Tipo de dados é tão importante para as linguagens que elas podem ser classificadas em relação a como tratam o conceito. Veja algumas possibilidades:

* **Linguagens fortemente tipadas (ou tipificadas):** são linguagens em que todos os valores de variáveis e funções precisam ter o tipo de dados explicitamente declarado. Se você não declarar, dá pau e não roda.
* **Linguagens fracamente tipadas:** consideram e implementam conceito, mas não existe obrigatoriedade de declarar o tipo antes de usar uma variável e, mesmo após receber um tipo, uma variável pode receber um outro sem gerar nenhum tipo de erro. Exemplo: PHP e JavaScript.
* **Linguagens não tipadas:** não consideram o conceito de tipo de dados. Exemplos: Perl e Assembly.

<p align="center">
  <img src="https://github.com/mariatheresahqs/Programacao-UFV-CCF110/blob/master/03-ConceitosElementosBasicosProgramacao/tipoDeDados.png?raw=true">
 </p>

### 2. Variáveis e Constantes    

   * **Conceitos**

Cada variável corresponde a uma posição de memória cujo valor pode variar ao longo do tempo durante a execução do programa, embora uma variável possa assumir diferentes valores ela só pode armazenar um único valor a cada instante.

Uma constante é um elemento de valor fixo, que não se modifica ao longo do tempo durante a execução do programa. Uma constante pode ser de qualquer um dos tipos primitivos de dados.
   
   * **Declaração**
   
   A declaração informa o nome da variável (ou constante), o seu tipo e, opcionalmente, seu valor inicial. Com esta informação, o compilador destina automaticamente um número suficiente de células de memória, ou bytes, para armazenar esta variável. 
   
   Cada variável (e constante) criada reserva (o termo técnico usado é aloca) memória suficiente para guardar o valor que ela pode receber. O tamanho de memória alocada é diretamente ligado ao tipo de dado. Imagine sua memória RAM como várias caixas pequenas prontas para guardar valores. Se o valor a ser guardado for maior do que uma caixa, ele precisará ser dividido em mais caixas.
   
   Cada linguagem possui a sua forma de declarar uma variável, inclusive algumas não obrigam a declaração e outras não implementam esse conceito.
   
   * **Inicialização**
   
   - Atribuição de valores.   
### 3. Operadores lógicos, aritméticos e relacionais.  
### 4. Comandos de entrada e saída.   
### 5. Comentários no código dos programas.   
### 6. Testes de Mesa. 

---------
## Bibliografia 
[Elementos de linguagens de programação - Universidade da Tecnologia](https://universidadedatecnologia.com.br/elementos-de-linguagens-de-programacao/)    
[Introdução à programação - Wikibooks](https://pt.wikibooks.org/wiki/Introdu%C3%A7%C3%A3o_%C3%A0_programa%C3%A7%C3%A3o/Defini%C3%A7%C3%A3o_de_dados)  
[Tipo de Dados - Wikipedia](https://pt.wikipedia.org/wiki/Tipo_de_dado)  
[Tipos de Dados - Dicas de Programação](https://dicasdeprogramacao.com.br/tipos-de-dados-primitivos/)  
[Tipos de Dados- CEFET-MG](https://homepages.dcc.ufmg.br/~rimsa/documents/decom009/lessons/Aula04.pdf)  
[Tipos Básicos - UNICAMP](https://www.ic.unicamp.br/~wainer/cursos/2s2011/Cap03-TiposBasicos-texto.pdf)  
