<h4 class="header_destaque">Novo cliente</h4>

<form class="div_secundaria form_cadastro" action="?page=salvar" method="POST">
    <input type="hidden" name="acao" value="salvar">
    <div class="mb-3">
        <label class="label_cadastro">Nome</label>
        <input type="text" name="cliente_nome" class="form-control" required>
    </div>
    <div class="mb-3">
        <label class="label_cadastro">Data de Nascimento</label>
        <input type="date" name="cliente_datanasc" class="form-control" required>
    </div>
    <div class="mb-3">
        <div id="infoHelp" class="form-text" required>Suas informações não são compartilhadas com ninguém.</div>
    </div>
    <div class="mb-3">
        <label class="label_cadastro">CPF</label>
        <input type="text" name="cliente_cpf" id="cliente_cpf" class="form-control" placeholder="123.123.123-12" required>
    </div>
    <div class="mb-3">
        <label class="label_cadastro">RG</label>
        <input type="text" name="cliente_rg" class="form-control" required>
    </div>
    <div class="mb-3">
        <label class="label_cadastro">Telefone</label>
        <input type="text" name="cliente_telefone" id="cliente_telefone" class="form-control" placeholder="(45) 99817-5314" required>
    </div>
    <div class="mb-3 d-md-flex justify-content-md-end">
        <button type="submit" class="btn btn-primary texto_botao">CADASTRAR</button>
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