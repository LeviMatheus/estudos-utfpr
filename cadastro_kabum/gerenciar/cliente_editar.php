<h4 class="header_destaque">Editar cliente</h4>

<?php
    $sql = "SELECT * FROM clientes WHERE cliente_id=".$_REQUEST["id"];
    $res = $conexao->query($sql);
    $row = $res->fetch_object();
?>

<form class="div_secundaria form_cadastro" action="?page=salvar" method="POST">
    <input type="hidden" name="acao" value="editar">
    <input type="hidden" name="cliente_id" value="<?php print $row->cliente_id; ?>">
    <div class="mb-3">
        <label class="label_cadastro">Nome</label>
        <input type="text" name="cliente_nome" value="<?php print $row->cliente_nome; ?>" class="form-control" required>
    </div>
    <div class="mb-3">
        <label class="label_cadastro">Data de Nascimento</label>
        <input type="date" name="cliente_datanasc" value="<?php print $row->cliente_datanasc; ?>" class="form-control" required>
    </div>
    <div class="mb-3">
        <div id="infoHelp" class="form-text" required>Suas informações não são compartilhadas com ninguém.</div>
    </div>
    <div class="mb-3">
        <label class="label_cadastro">CPF</label>
        <input type="text" name="cliente_cpf" id="cliente_cpf" value="<?php print $row->cliente_cpf; ?>" class="form-control" placeholder="123.123.123-12" required>
    </div>
    <div class="mb-3">
        <label class="label_cadastro">RG</label>
        <input type="text" name="cliente_rg" value="<?php print $row->cliente_rg; ?>" class="form-control" required>
    </div>
    <div class="mb-3">
        <label class="label_cadastro">Telefone</label>
        <input type="text" name="cliente_telefone" id="cliente_telefone" value="<?php print $row->cliente_telefone; ?>" class="form-control" placeholder="(45) 99817-5314" required>
    </div>
    <div class="mb-3">
        <button type="submit" class="btn btn-primary">Atualizar</button>
    </div>
</form>

<script src="https://ajax.googleapis.com/ajax/libs/jquery/2.1.1/jquery.min.js"></script>
<script src="https://cdnjs.cloudflare.com/ajax/libs/jquery.mask/1.14.15/jquery.mask.min.js"></script>
<script type="text/javascript">
    $(document).ready(function(){
        $('#cliente_telefone').mask('(00) 00000-0000');
        $('#cliente_cpf').mask('000.000.000-00');
    });
</script>