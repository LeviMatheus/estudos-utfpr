<?php
	include('./index.php');
?>

<!DOCTYPE html>
<html lang="pt-BR">
	<head>
		<meta charset="utf-8">
		<meta name="viewport" content="width=device-width, initial-scale=1">
		<!--BOOTSTRAP CSS-->
		<link href="../css/personalizado.css" rel="stylesheet">
		<link href="../css/bootstrap.min.css" rel="stylesheet">
		<title>Cadastro Kabum</title>
	</head>
  	<body class="div_principal">
		<!-- Navegação padrão -->
		<nav class="navbar navbar-expand-lg navbar-dark bg-dark" id="nav_principal">
			<div class="container-fluid">
				<!-- Logo -->
				<a class="navbar-brand" href="gerenciar.php"><img src="../img/logo_kabum_.png" class="img-fluid" alt="Logo do cadastro Kabum"></a>
				<!-- Botão para versão mobile -->
				<button class="navbar-toggler" id="hamburguer_nav" type="button" data-bs-toggle="collapse" data-bs-target="#navbarNav" aria-controls="navbarNav" aria-expanded="false" aria-label="Toggle navigation">
				<span class="navbar-toggler-icon"></span>
				</button>
				<div class="collapse navbar-collapse" id="navbarNav">
					<ul class="navbar-nav" id="lista_100">
						<!-- <li class="nav-item">
							<a class="nav-link active" aria-current="page" href="index.php">Home</a>
						</li> -->
						<li class="nav-item">
							<a class="nav-link" id="link_nav" href="?page=cadastrar">Novo cliente</a>
						</li>
						<li class="nav-item">
							<a class="nav-link" id="link_nav"  href="?page=listar">Listar clientes</a>
						</li>
						<li class="nav-item">
							<a class="nav-link" id="nav_logout" href="?page=logout">Sair</a>
						</li>
					</ul>
				</div>
			</div>
		</nav>

		<div class="container">
			<div class="row">
				<div class="col mt-5">
					<?php
						include("../config/config.php");
						switch(@$_REQUEST["page"]){
							case "cadastrar":
								include("cliente_cadastrar.php");
								break;
							case "listar":
								include("cliente_listar.php");
								break;
							case "salvar":
								include("cliente_salvar.php");
								break;
							case "editar":
								include("cliente_editar.php");
								break;
							case "logout":
								include("cliente_logout.php");
							default:
								// caso logado vai pra home, caso não vai pra login
								include("cliente_home.php");
								break;
						}
					?>
				</div>
			</div>
		</div>
    
	<!--BOOTSTRAP JS-->
    <script src="../js/bootstrap.bundle.min.js" integrity="sha384-MrcW6ZMFYlzcLA8Nl+NtUVF0sA7MsXsP1UyJoMp4YLEuNSfAP+JcXn/tWtIaxVXM" crossorigin="anonymous"></script>
  	</body>
</html>