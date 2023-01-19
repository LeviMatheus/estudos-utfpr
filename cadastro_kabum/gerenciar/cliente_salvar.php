<?php
    switch ($_REQUEST["acao"]) {
        case 'salvar':
            $cliente_nome = $_POST["cliente_nome"];
            $cliente_datanasc = $_POST["cliente_datanasc"];
            $cliente_cpf = $_POST["cliente_cpf"];
            $cliente_rg = $_POST["cliente_rg"];
            $cliente_telefone = $_POST["cliente_telefone"];
            $sql = "INSERT INTO clientes (cliente_nome,cliente_datanasc,cliente_cpf,cliente_rg,cliente_telefone) VALUES ('{$cliente_nome}','{$cliente_datanasc}','{$cliente_cpf}','{$cliente_rg}','{$cliente_telefone}')";
            $res = $conexao->query($sql);

            if($res==true){
                print("<p class='alert alert-success' style='text-align:center'>Cadastrado com sucesso!</p>");
                print("<script>location.href='?page=listar'</script>");
            }else{
                print("<p class='alert alert-danger' style='text-align:center'>Erro ao cadastrar</p>");
            }
            break;
        case 'editar':
            $cliente_nome = $_POST["cliente_nome"];
            $cliente_datanasc = $_POST["cliente_datanasc"];
            $cliente_cpf = $_POST["cliente_cpf"];
            $cliente_rg = $_POST["cliente_rg"];
            $cliente_telefone = $_POST["cliente_telefone"];
            $sql = "UPDATE clientes SET
                        cliente_nome='{$cliente_nome}',
                        cliente_datanasc='{$cliente_datanasc}',
                        cliente_cpf='{$cliente_cpf}',
                        cliente_rg='{$cliente_rg}',
                        cliente_telefone='{$cliente_telefone}'
                    WHERE
                        cliente_id=".$_REQUEST["cliente_id"];
            $res = $conexao->query($sql);

            if($res==true){
                print("<p class='alert alert-success' style='text-align:center'>Dados do cliente atualizados com sucesso!</p>");
                print("<script>location.href='?page=listar'</script>");
            }else{
                print("<p class='alert alert-danger' style='text-align:center'>Erro ao atualizar dados do cliente</p>");
            }
            break;

        case 'excluir':
            $sql = "DELETE FROM clientes WHERE cliente_id=".$_REQUEST["cliente_id"];
            $res = $conexao->query($sql);

            if($res==true){
                print("<p class='alert alert-success' style='text-align:center'>Dados do cliente excluídos com sucesso!</p>");
                print("<script>location.href='?page=listar'</script>");
            }else{
                print("<p class='alert alert-danger' style='text-align:center'>Erro ao excluir dados do cliente</p>");
            }
            break;
        
        default:
            print("<p class='alert alert-warning' style='text-align:center'>Erro 404: Ação não encontrada</p>");
            print("<script>location.href='?page=listar'</script>");
            break;
    }
?>