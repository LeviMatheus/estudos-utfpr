<!-- Mensagem de boas vindas -->
<h4 class="header_destaque">Olá <?php $_SESSION['nome']; ?>, seja bem vindo!</h4>
<!-- carroussel de imagens -->
<div id="carouselExampleControls" class="carousel slide div_secundaria carousel-dark" data-bs-ride="carousel">
	<div class="carousel-inner">
		<div class="carousel-item active">
			<img src="https://raw.githubusercontent.com/LeviMatheus/cadastro_kabum/master/img/carroussel_1.png" class="d-block w-100" alt="Cadastro de clientes ninja">
		</div>
		<div class="carousel-item">
			<img src="https://raw.githubusercontent.com/LeviMatheus/cadastro_kabum/master/img/carroussel_2.png" class="d-block w-100" alt="Cadastro em menos de 1 minuto">
		</div>
		<div class="carousel-item">
			<img src="https://raw.githubusercontent.com/LeviMatheus/cadastro_kabum/master/img/carroussel_3.png" class="d-block w-100" alt="Cadastro, listagem, atualização e exclusão">
		</div>
	</div>
	<button class="carousel-control-prev" type="button" data-bs-target="#carouselExampleControls" data-bs-slide="prev">
		<span class="carousel-control-prev-icon" aria-hidden="true"></span>
		<span class="visually-hidden">Anterior</span>
	</button>
	<button class="carousel-control-next" type="button" data-bs-target="#carouselExampleControls" data-bs-slide="next">
		<span class="carousel-control-next-icon" aria-hidden="true"></span>
		<span class="visually-hidden">Próximo</span>
	</button>
</div>