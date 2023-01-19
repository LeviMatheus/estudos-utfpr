<?php
    define('HOST','localhost');
    define('USER', 'root');
    define('PASS', '');
    define('BASE', 'cadastro_kabum');
    
    $conexao = new mysqli(HOST,USER,PASS,BASE);

    if($conexao->error){
        die("Falha ao conectar ao banco de dados!" . $conexao->error);
    }
?>