package recovery;

import parser.*;

public class First { //implementa os conjuntos first p/ alguns n.terminais

    static public final RecoverySet principal = new RecoverySet();
    static public final RecoverySet condicional = new RecoverySet();
    static public final RecoverySet declaracaoVariavel = new RecoverySet();
    static public final RecoverySet repeticao = new RecoverySet();
    static public final RecoverySet function = new RecoverySet();
    static public final RecoverySet expressao = new RecoverySet();
    static public final RecoverySet string = new RecoverySet();
    static public final RecoverySet numero = new RecoverySet();
    static public final RecoverySet bool = new RecoverySet();
    static public final RecoverySet comandos = new RecoverySet();
    static public final RecoverySet stmt = new RecoverySet();
    static public final RecoverySet dado = new RecoverySet();
    static public final RecoverySet tipoDado = new RecoverySet();

   
    static {
    	principal.add(new Integer(MALanguageConstants.EOF));
    	
    	condicional.add(new Integer(MALanguageConstants.FIMBLOCO));
    	condicional.add(new Integer(MALanguageConstants.IF));
    	condicional.add(new Integer(MALanguageConstants.REAL));
    	condicional.add(new Integer(MALanguageConstants.INTEIRO));
    	condicional.add(new Integer(MALanguageConstants.LETRA));
    	condicional.add(new Integer(MALanguageConstants.STRING));
    	condicional.add(new Integer(MALanguageConstants.BOOLEAN));
    	condicional.add(new Integer(MALanguageConstants.FOR));
    	condicional.add(new Integer(MALanguageConstants.WHILE));
    	condicional.add(new Integer(MALanguageConstants.FUNCTION));
    	condicional.add(new Integer(MALanguageConstants.IDENTIFICADOR));
    	condicional.add(new Integer(MALanguageConstants.DIGITO));
    	
    	declaracaoVariavel.add(new Integer(MALanguageConstants.FIMBLOCO));
    	declaracaoVariavel.add(new Integer(MALanguageConstants.IF));
    	declaracaoVariavel.add(new Integer(MALanguageConstants.REAL));
    	declaracaoVariavel.add(new Integer(MALanguageConstants.INTEIRO));
    	declaracaoVariavel.add(new Integer(MALanguageConstants.LETRA));
    	declaracaoVariavel.add(new Integer(MALanguageConstants.STRING));
    	declaracaoVariavel.add(new Integer(MALanguageConstants.BOOLEAN));
    	declaracaoVariavel.add(new Integer(MALanguageConstants.FOR));
    	declaracaoVariavel.add(new Integer(MALanguageConstants.WHILE));
    	declaracaoVariavel.add(new Integer(MALanguageConstants.FUNCTION));
    	declaracaoVariavel.add(new Integer(MALanguageConstants.IDENTIFICADOR));
    	declaracaoVariavel.add(new Integer(MALanguageConstants.DIGITO));
    	declaracaoVariavel.add(new Integer(MALanguageConstants.FOR));
    	declaracaoVariavel.add(new Integer(MALanguageConstants.WHILE));
    	
    	repeticao.add(new Integer(MALanguageConstants.FIMBLOCO));
    	repeticao.add(new Integer(MALanguageConstants.IF));
    	repeticao.add(new Integer(MALanguageConstants.REAL));
    	repeticao.add(new Integer(MALanguageConstants.INTEIRO));
    	repeticao.add(new Integer(MALanguageConstants.LETRA));
    	repeticao.add(new Integer(MALanguageConstants.STRING));
    	repeticao.add(new Integer(MALanguageConstants.BOOLEAN));
    	repeticao.add(new Integer(MALanguageConstants.FOR));
    	repeticao.add(new Integer(MALanguageConstants.WHILE));
    	repeticao.add(new Integer(MALanguageConstants.FUNCTION));
    	repeticao.add(new Integer(MALanguageConstants.IDENTIFICADOR));
    	repeticao.add(new Integer(MALanguageConstants.DIGITO));
    	
    	function.add(new Integer(MALanguageConstants.FIMBLOCO));
    	function.add(new Integer(MALanguageConstants.IF));
    	function.add(new Integer(MALanguageConstants.REAL));
    	function.add(new Integer(MALanguageConstants.INTEIRO));
    	function.add(new Integer(MALanguageConstants.LETRA));
    	function.add(new Integer(MALanguageConstants.STRING));
    	function.add(new Integer(MALanguageConstants.BOOLEAN));
    	function.add(new Integer(MALanguageConstants.FOR));
    	function.add(new Integer(MALanguageConstants.WHILE));
    	function.add(new Integer(MALanguageConstants.FUNCTION));
    	function.add(new Integer(MALanguageConstants.IDENTIFICADOR));
    	function.add(new Integer(MALanguageConstants.DIGITO));
    	
    	stmt.add(new Integer(MALanguageConstants.FIMBLOCO));
    	stmt.add(new Integer(MALanguageConstants.IF));
    	stmt.add(new Integer(MALanguageConstants.REAL));
    	stmt.add(new Integer(MALanguageConstants.INTEIRO));
    	stmt.add(new Integer(MALanguageConstants.LETRA));
    	stmt.add(new Integer(MALanguageConstants.STRING));
    	stmt.add(new Integer(MALanguageConstants.BOOLEAN));
    	stmt.add(new Integer(MALanguageConstants.FOR));
    	stmt.add(new Integer(MALanguageConstants.WHILE));
    	stmt.add(new Integer(MALanguageConstants.FUNCTION));
    	stmt.add(new Integer(MALanguageConstants.IDENTIFICADOR));
    	stmt.add(new Integer(MALanguageConstants.DIGITO));
    	
    	comandos.add(new Integer(MALanguageConstants.FIMBLOCO));
    	comandos.add(new Integer(MALanguageConstants.IF));
    	comandos.add(new Integer(MALanguageConstants.REAL));
    	comandos.add(new Integer(MALanguageConstants.INTEIRO));
    	comandos.add(new Integer(MALanguageConstants.LETRA));
    	comandos.add(new Integer(MALanguageConstants.STRING));
    	comandos.add(new Integer(MALanguageConstants.BOOLEAN));
    	comandos.add(new Integer(MALanguageConstants.FOR));
    	comandos.add(new Integer(MALanguageConstants.WHILE));
    	comandos.add(new Integer(MALanguageConstants.FUNCTION));
    	comandos.add(new Integer(MALanguageConstants.IDENTIFICADOR));
    	comandos.add(new Integer(MALanguageConstants.DIGITO));
    	
    	expressao.add(new Integer(MALanguageConstants.FIMINSTRUCAO));
    	expressao.add(new Integer(MALanguageConstants.RPAR));
    	
    	string.add(new Integer(MALanguageConstants.SEPARADOR));
    	string.add(new Integer(MALanguageConstants.RPAR));
    	
    	numero.add(new Integer(MALanguageConstants.RPAR));
    	numero.add(new Integer(MALanguageConstants.OPERADOR_LOGICO));
    	numero.add(new Integer(MALanguageConstants.OPERADOR_ARITMETICO));
    	numero.add(new Integer(MALanguageConstants.SEPARADOR));
    	numero.add(new Integer(MALanguageConstants.FIMINSTRUCAO));
    	
    	bool.add(new Integer(MALanguageConstants.SEPARADOR));
    	bool.add(new Integer(MALanguageConstants.RPAR));
    	
    	dado.add(new Integer(MALanguageConstants.SEPARADOR));
    	dado.add(new Integer(MALanguageConstants.RPAR));
    	
    	tipoDado.add(new Integer(MALanguageConstants.IDENTIFICADOR));
    }
}
