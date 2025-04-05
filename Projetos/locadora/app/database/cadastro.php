<!DOCTYPE html>
<html lang="pt-BR">
<head>
   
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="styles.css">
    <title> Cadastro </title>

</head>

<body class="body_cad"> 

    <div class="cabecalho-cad">

        <h1 class="h1_cadastro"> Formulário de cadastramento de veículos </h1>

    </div>

<div class="ambosdados">

    <div class="dadosveiculo">
        <h2> DADOS DO VEÍCULO </h2> <br />

        <fieldset class="fieldset_cad">
            <form class="textos">
        
                 <label for="modelo"> Modelo: </label>
                 <select name="1modelo" id="modelo">
        
                 <option value="embranco" selected> -- </option>
                 <option value="hatch"> Hatch </option>
                 <option value="sedan"> Sedan </option>
                 <option value="suv"> SUV </option>
                 <option value="picape"> Picape </option>
                 <option value="perua"> Perua </option>
                 <option value="minivan"> Minivan </option>
                 <option value="cupe"> Cupê </option>
                 <option value="esportivo"> Esportivo </option>
                 <option value="outro"> Outro </option>
                 </select> 

                 <label for="marca"> Marca: </label>
                 <select name="1marca" id="marca">
          
                 <option value="embranco" selected> -- </option>
                 <option value="chevrolet"> Chevrolet </option>
                 <option value="fiat"> Fiat </option>
                 <option value="volkswagen"> Volkswagen </option>
                 <option value="hyundai"> Hyundai </option>
                 <option value="toyota"> Toyota </option>
                 <option value="jeep"> Jeep </option>
                 <option value="renault"> Renault </option>
                 <option value="honda"> Honda </option>
                 <option value="nissan"> Nissan </option>
                 <option value="peugeot"> Peugeot </option>
                 <option value="outro"> Outro </option>
                 </select> 

        
                 <label for="placa"> Placa: </label>
                 <input type="text" name="1placa" id="placa" placeholder="digite aqui"> <br /><br />
         
                 <label for="cor"> Cor: </label>
                 <select name="1cor" id="cor">
        
                <option value="embranco" selected> -- </option>
                <option value="preto"> Preto </option>
                <option value="branco"> Branco </option>
                <option value="vermelho"> Vermelho </option>
                <option value="cinza"> Cinza </option>
                <option value="prata"> Prata </option>
                <option value="outro"> Outro </option>
                </select> 
       
                <label for="ano"> Ano de fabricação: </label>
                <select name="1ano" id="ano">

                <option value="embranco" selected> -- </option>    
                <option value="2014"> 2014 </option>
                <option value="2015"> 2015 </option>
                <option value="2016"> 2016 </option>
                <option value="2017"> 2017 </option>
                <option value="2018"> 2018 </option>
                <option value="2019"> 2019 </option>
                <option value="2020"> 2020 </option>
                <option value="2021"> 2021 </option>
                <option value="2022"> 2022 </option>
                <option value="2023"> 2023 </option>
                <option value="2024"> 2024 </option>
                <option value="2025"> 2025 </option>
    
                </select> <br /><br />
    
            </form>
       </fieldset> <br /><br />

    </div>
    <div class="dadoscliente">

       <h2> DADOS DO CLIENTE </h2> <br />

       <fieldset class="fieldset_cad ">
            <form class="textos">

            <label for="nomecomp"> Nome completo: </label>
            <input type="text" name="1nomecomp" id="nomecomp" placeholder="digite aqui"> 

            <label for="telefone"> Telefone: </label>
            <input type="text" name="1telefone" id="telefone" placeholder="digite aqui"> 

            <label for="email"> E-mail: </label>
            <input type="email" name="1email" id="email" placeholder="digite aqui"> <br /><br />
 
            <label for="endereco"> Endereço: </label>
            <input type="text" name="1endereco" id="endereco" placeholder="digite aqui"> 
 
           <label for="cpf"> Número: </label>
           <input type="text" name="1num" id="num" placeholder="digite aqui"> 

           <label for="endereco"> Bairro: </label>
           <input type="text" name="1bairro" id="bairro" placeholder="digite aqui"> <br /><br />

           <label for="endereco"> Complemento: </label>
           <input type="text" name="1complemento" id="complemento" placeholder="digite aqui"> 

           <label for="cpf"> CPF: </label>
           <input type="text" name="1cpf" id="cpf" placeholder="digite aqui"> 

           <label for="cpf"> RG: </label>
           <input type="text" name="1rg" id="rg" placeholder="digite aqui"> <br /><br />

           <label for="cpf"> CNH: </label>
           <input type="text" name="1cnh" id="cpf" placeholder="digite aqui"> 

           <label for="email"> E-mail: </label>
           <input type="email" name="1email" id="email" placeholder="digite aqui"> <br /><br />
        </form>
        </fieldset> 

    </div>
    <div class="registrar">
        <form>
            <input type="submit" value="Enviar">
        
            <input type="reset" value="Cancelar">
        </form>
           
    </div>  
</div> 
 

</body>  

</html>    <!-- Feito por Livia <3 -->