<?php
	include("./config/config.php");
	if(isset($_POST['email']) || isset($_POST['senha'])){
		if(strlen($_POST['email']) == 0){
			// Verifica email
			print("<p class='alert alert-danger' style='text-align:center'>Preencha seu email!</p>");
			// alert("Preencha seu email");
		}else if(strlen($_POST['senha']) == 0){
			// Verifica senha
			print("<p class='alert alert-danger' style='text-align:center'>Preencha sua senha!</p>");
		}else{
			// Bloquear Inject
			$email = $conexao->real_escape_string($_POST['email']);
			$senha = $conexao->real_escape_string($_POST['senha']);
			// Autenticar
			$comando_sql = "SELECT * FROM usuarios WHERE user_email = '$email' LIMIT 1";
			$query_sql = $conexao->query($comando_sql) or die("Falha na consulta a tabela de usuários: ".$conexao->error);

			// Verifica usuário
			$usuarios = $query_sql->num_rows;
			if($usuarios==1){
				$usuario = $query_sql->fetch_assoc();
				//criptografia
				if(password_verify($senha, $usuario['user_senha'])){
					//autenticado
					if(!isset($_SESSION)){
						session_start();
					}
	
					$_SESSION['id'] = $usuario['user_id'];
					$_SESSION['nome'] = $usuario['user_nome'];
	
					header("Location: ./gerenciar/gerenciar.php");
				}else{
					print("<p class='alert alert-danger' style='text-align:center'>Problema ao logar, Email ou senha incorretos!</p>");
				}
			}else{
				print("<p class='alert alert-danger' style='text-align:center'>Problema ao logar, Email ou senha incorretos!</p>");
			}
		}
	}
?>

<!DOCTYPE html>
<html lang="pt-BR">
	<head>
		<meta charset="utf-8">
		<meta name="viewport" content="width=device-width, initial-scale=1">
		<link href="css/bootstrap.min.css" rel="stylesheet">
		<link href="./css/personalizado.css" rel="stylesheet">
		<title>Login: Cadastro Kabum</title>
	</head>
	<body class="login_fundo">
		<section>
			<div class="container py-5 h-100 col-xl-5">
				<div class="row d-flex justify-content-center align-items-center h-100">
					<div class="card">
						<div class="card-body p-5 text-center">
							<h2 class="text-uppercase mb-3 titulo_login">Acessar sistema de clientes</h2>
							<form action="" method="POST">
								<div class="mb-4 div_login">
									<!-- <label class="form-label label_login">Email</label> -->
									<input name="email" type="email" class="form-control form-control-lg" placeholder="exemplo@exemplo.com" />
								</div>
								<div class="mb-4 div_login">
									<!-- <label class="form-label label_login">Senha</label> -->
									<input name="senha" type="password" class="form-control form-control-lg" placeholder="Senha"/>
								</div>
								<div class="mb-4 div_login">
									<!-- <label class="form-label label_login">Senha</label> -->
									<button class="btn btn-primary texto_botao btn-block mb-2" type="submit">Entrar</button>
									<p class="small mb-2" id="perdeu_senha">
										<a class="text-black-50" href="index.php">Esqueceu a senha ?</a>
									</p>
								</div>
							</form>
						</div>
					</div>
				</div>
			</div>
		</section>
	</body>
</html>