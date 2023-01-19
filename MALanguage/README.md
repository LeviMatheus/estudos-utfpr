# MALanguage
Criação de uma gramática, linguagem e compilador para a matéria de compiladores UTFPR
##

## Documentação MALanguage 

#### Tabela de conteúdo:
- **[Estrutura de um programa em MALanguage](#estrutura)**
- **[Início de programa](#início)**
  - [omaewamoushindeiru](#início)
  - [sasageyo](#início)
  - [zawarudo](#início)
- **[Fim de programa](#fim)**
  - [naniii](#fim)
  - [roadrollerda](#fim)
- **[Blocos](#bloco)**
  - [smaaash](#bloco)
  - [ussmaaash](#bloco)
- **[Fim de instrução](#desu)**
  - [desu](#desu)
- **[Tipos de dados](#tipos)**
  - [deredere](#tipos)
  - [kuudere](#tipos)
  - [tsundere](#tipos)
  - [tsuntsun](#tipos)
  - [yandere](#tipos) 
- **[Prefixos](#prefixos)**
  -  [bankai_](#prefixos)  
  - [tuturu_](#prefixos)
- **[Estruturas de controle](#controle)**
  - [ayaya](#controle) 
  - [kyun](#controle) 
  - [moemoe](#controle)    
  - [steins](#controle)
- **[Forma de Backus-Naur](#forma)**
- **[To-do list](#fazer)**
---

## Estrutura de um programa em MALanguage 
### Estrutura 
Um programa reconhecido pelo parser de MALanguage segue uma estrutura simples com uma palavra que representa o início do programa, seguido por uma palavra de início de bloco, uma lista de comandos, o fim do bloco e o fim do programa. 
Um comando pode ser uma estrutura condicional, uma estrutura de repetição, a declaração de uma variável, a chamada de uma função, ou uma declaração (que é uma expressão aritmética ou lógica seguida de um caractere de fim de instrução). 

```
zawarudo
smaaash
    bankai_print('hello world') desu
ussmash
```
O presente documento pretende servir de guia para as funcionalidades existentes e implementações futuras para o desenvolvimento do compilador para a disciplina de Construção de Compiladores.

## Início de programa
### Início
Todos os programas em MALanguage começam com uma palavra-chave de início de programa. Há três opções disponíveis, ficando a cargo do usuário decidir qual utilizar:


**1**. omaewamoushindeiru

**2**. zawarudo

**3**. sasageyo

## Fim de programa
### Fim 
Assim como a instrução de início, a linguagem também possui uma palavra-chave para o fim do programa. Há duas opções disponíveis, que podem ser combinadas indiscriminadamente com as palavras de início de programa:


**1**. naniii

**2**. roadrollerda

## Início e fim de blocos
### Bloco
Um bloco em MALanguage é delimitado por uma palavra-chave de início de bloco e encerrado em uma palavra-chave de fim de bloco, respectivamente: 


**1**. smaaash

**2**. ussmash

Um bloco pode ser utilizado entre as palavras de início e fim de programa, logo depois de uma estrutura de controle de repetição ou de seleçao, ou após a definição de uma função. 
Portanto, não é possível, por exemplo, criar um bloco dentro de outro como no código abaixo: 

```
zawarudo
    smaaash
        smash
        ussmash
    ussmash
naniii 
```

## Fim de instrução
### desu

No final da maioria dos comandos de MALanguage é necessário utilizar a palavra desu, que representa o fim de uma instrução. Não utiliza-se desu após o fim de um bloco, como é possível em outras linguagens, como C. Instruções como: chamada de uma função, atribuição de valor a uma variável, etc.

## Tipagem de dados
### Tipos

A linguagem suporta 5 tipos de dados diferentes: 

**1**. deredere
Representa o tipo de dado inteiro.

**2**. kuudere
Representa o tipo de dado boolean, assume o valor plana ou redonda.

**3**. tsundere
Representa o tipo de dados string, assume qualquer valor alfanumérico delimitado por aspas simples (').

**4**. tsuntsun
Representa o tipo de dados char. 

**5**. yandere
Representa o tipo de dado real, assumindo valores flutuantes separados por ponto (.).

Na próxima sessão trataremos sobre a declaração de variáveis. 

## Prefixos utilizados na linguagem
### Prefixos
Há até o momento dois prefixos diferentes utilizados na linguagem: 

**1**. bankai_
É o prefixo obrigatório que identifica uma função. Até o momento pode-se chamar funções com 0 ou mais parâmetros separados por vírgula, mas ainda não é possível declará-las. Os parâmetros aceitos por uma função são bem limitados também, sendo impossível realizar recursão, por exemplo. 

**2**. tuturu_ 
É o prefixo obrigatório que identifica uma variável.

Exemplo de utilização de prefixos e declaração de variáveis:
```
zawarudo
    smaaash
        deredere tuturu_inteiro = 'hello world', tuturu_inteiro2 = 150, tuturu_inteiro3 desu
        bankai_print("hello","world",150) desu
        kuudere tuturu_terra = redonda desu 
    ussmaaash
naniii
```
Nota: o parser ainda não faz checagem de tipos, portanto o código acima é válido do ponto de vista léxico!

## Ifs, elses, fors e whiles...
### Controle
Há três estruturas de controle em MALanguage, sendo duas para controle de repetição (steins e ayaya) e uma para controle de seleção (moemoe/kyun).

steins(i), onde i é o número de vezes a ser iterado.  
```
zawarudo
    smaaash
        deredere tuturu_count = 0 desu
        for(10) 
        smaaash
            tuturu_count = tuturu_count + 1 desu
        ussmaaash
    ussmaaash
naniii
```

ayaya(exp), onde exp é vazio, uma expressão lógica ou uma expressão aritmética.  
```
zawarudo
    smaaash
        deredere tuturu_count = 0 desu
        ayaya(tuturu_count < 11) 
        smaaash
            tuturu_count = tuturu_count + 1 desu
        ussmaaash
    ussmaaash
naniii
```

moemoe...kyun
```
    smaaash
        deredere tuturu_idade = 25 desu
        moemoe (tuturu_idade > 18) 
        smaaash
            bankai_print('Maior de idade') desu
        ussmaaash
        kyun 
        smaaash
            bankai_print('Menor de idade') desu
        ussmaaash
    ussmaaash
```

## Backus-Naur
### Forma
```
<INICIOPROGRAMA> ::= "omaewamoushindeiru" 
				   | "zawarudo" 
				   | "sasageyo"

<FIMPROGRAMA> ::= "naniii" 
			    | "roadrollerda"

<INICIOBLOCO> ::= "smaaash"

<FIMBLOCO> ::= "ussmaaash" 

<REAL> ::= "yandere" 

<BOOLEAN> ::= "kuudere"

<INTEIRO> ::= "deredere"

<LETRA> ::= "tsuntsun"

<STRING> ::= "tsundere"

<FIMINSTRUCAO> ::= "desu"

<DIGITO> ::= ["0"-"9"]

<CARACTERE> ::= ["A"-"Z"] 
			  | ["a"-"z"]

<ATRIBUICAO> ::= "="

<SEPARADOR> ::= ","

<IDENTIFICADOR> ::= "tuturu_"(<CARACTERE>|<DIGITO>)+

<IF> ::= "moemoe" 

<ELSE> ::= "kyun"

<LPAR> ::= "("

<RPAR> ::= ")"

<DECIMAL> ::= "." 

<OPERADOR_LOGICO> ::= "<" 
					| ">" 
					| "==" 
					| "&" 
					| "ou"

<OPERADOR_ARITMETICO ::= "+" 
					   | "-" 
					   | "*" 
					   | "/" 

<FOR> ::= "steins"

<FUNC> ::= "bankai_"(<CARACTERE>|<DIGITO>)+

<WHILE> ::= "ayaya"

<ISTRING> ::= "'"

<INTERRUPCAO> ::= "yamero" 

<TRUE> ::= "redonda" 

<FALSE> ::= "plana" 

<principal> ::= <INICIOPROGRAMA> <INICIOBLOCO> (<comandos>)* <FIMBLOCO> <FIMPROGRAMA>

<comandos> ::= <condicional> 
			 | <declaracaoVariavel> 
			 | <repeticao> 
			 | <function>  
			 | <stmt>

<function> ::= <FUNC> <LPAR> ((<IDENTIFICADOR> | <dado>) (<SEPARADOR> (<IDENTIFICADOR> | <dado>))*)* <RPAR> <FIMINSTRUCAO>

<stmt> ::= <expressao> <FIMINSTRUCAO> 

<condicional> ::= <IF> <LPAR> <expressao> <RPAR> <INICIOBLOCO> (<declaracaoVariavel> | <repeticao>)* <FIMBLOCO>(<ELSE><INICIOBLOCO> (<declaracaoVariavel> | <repeticao>)* <FIMBLOCO>)?

<repeticao> ::= (<FOR> <LPAR> (<numero>|<IDENTIFICADOR>) <RPAR> (<INICIOBLOCO>(<comandos>)* <FIMBLOCO>)?)
			  | (<WHILE> <LPAR> (expressao())? <RPAR> <INICIOBLOCO> (<comandos>)*<FIMBLOCO>)

<expressao> ::= ((<numero> | <IDENTIFICADOR>) (<OPERADOR_LOGICO> | <OPERADOR_ARITMETICO>) (<numero> | <IDENTIFICADOR>))

<declaracaoVariavel> ::= <tipoDado> <IDENTIFICADOR> (<ATRIBUICAO> ( <CARACTERE>| <numero> ) )? (<SEPARADOR> <IDENTIFICADOR> (<ATRIBUICAO> ( <CARACTERE>| <numero>) )?)* <FIMINSTRUCAO>

<string> ::= (<ISTRING>)(<CARACTERE> | <DIGITO>)*(<ISTRING>)

<numero> ::= (<DIGITO>)+ (<DECIMAL> (<DIGITO>)+ )?

<bool> ::= <TRUE> 
		 | <FALSE>

<dado> ::= <numero> 
		 | <string> 
		 | <bool>

<tipoDado> ::= <REAL>
			 | <INTEIRO>
			 | <LETRA>
			 |<STRING>
			 |<BOOLEAN>
```
## To-do list
### Fazer
- .jjt no package parser + import recovery
- SimpleNode
	- (função principal(), { return jjtThis; }
	- implementar um terminal para cada não-terminal 
	- .dump (gerar a árvore com biblioteca de gráficos) 
- RecoverySet toString (EG1 -> MALanguage)
- método im (de EG1?)
- Adicionar as funções de não-terminais em First.java e os follows
- Associar o RecoverySet nas funções de não-terminal (consumeUntil e trycatch)
