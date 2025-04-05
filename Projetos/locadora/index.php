<!DOCTYPE html>
<html lang="pt-BR">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <title>Login</title>
    <link rel="stylesheet" href="assents/css/styles.css">
</head>
<body class="login">
    <section class="video">
        <video autoplay muted loop id="backgroundVideo">
            <source src="imagens/Bugatti_Tourbillon_00_HP_Intro_d_small.mp4" type="video/mp4">
        </video>
    </section>
    <div class="container_login">
        <form class="login_form" action="locadora.html" method="GET">
            <label for="username">Usuário:</label>
            <input class="p2" type="text" id="username" name="username" required>
            <label for="password">Senha:</label>
            <input class="p4" type="password" id="password" name="password" required><br>
            <div class="login_botao">
                <button class="login_button" type="submit">Entrar</button>
            </div>
        </form>
    </div>

</body>
</html>
