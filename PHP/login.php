<?php
/**
 * Esempio di pagina di autenticazione
 * @author Andrea Vallorani
 * @version 1.0 2017-03-17 21:32
 */

//apro la sessione (molto probabilmente sarà una nuova sessione)
require 'session_create.php';
 
//pagina a cui viene reindirizzato il client in caso di login eseguito
$pagina_dopo_login = 'area_riservata.php';

//se l'utente arriva alla pagina di login ma risulta già autenticato
//non faccio ripetere la procedura
if(!empty($_SESSION['username'])){
    header('Location: '.$pagina_dopo_login);
    exit;
}

//se vengono fornite le credenziali eseguo il controllo dell'utente
if(!empty($_POST['username'])){
    $u = $_POST['username'];
    $p = $_POST['password'];
    
    //questo è un controllo fittizio!!
    //in genere si verifica l'esistenza dell'utente interrogando un apposito DB
    if($u && $p=='1234'){
        $_SESSION['username'] = $u;
        $_SESSION['login_time'] = time();
        if($_POST['permanent']){
            //aggiorno la scadenza del cookie alla data odierna+30 giorni
            setcookie(session_name(),session_id(),time()+2592000,'/');
        }
        header('Location: '.$pagina_dopo_login);
        exit;
    }
    else $error = 1;
}
?>
<!DOCTYPE html>
<html>
    <head>
        <meta charset="utf-8">
        <title>Procedura di login</title>
    </head>
    <body>
        <form method="post">
            <?php 
            if(!empty($error)){
                echo '<div>Dati di accesso non corretti!</div>';
            }
            ?>
            <input type="text" name="username" required placeholder="Nome utente (qualsiasi)">
            <input type="password" name="password" required placeholder="Password (1234)">
            <input type="checkbox" name="permanent" value="1"> Login permanente
            <button type="submit">Login</button>
        </form>
    </body>
</html>