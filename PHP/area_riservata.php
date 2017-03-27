<?php
/**
 * Esempio di pagina in cui è richiesta l'autenticazione dell'utente
 * @author Andrea Vallorani
 * @version 1.0 2017-03-17 19:50
 */

//in ogni pagina riservata si deve provvedere, come prima cosa, all'apertura della sessione
require 'session_create.php';
 
//uso l'array speciale $_SESSION per controllare che l'utente si sia
//già autenticato nel sistema.
//Se l'utente non risulta autenticato eseguo un redirect del client alla
//pagina di login
if(empty($_SESSION['username'])){
    header('Location: login.php');
    exit;
}

echo 'Benvenuto '.$_SESSION['username'].'. Tu puoi vedere questo contenuto protetto!<br><br>';
echo '<a href="session_destroy.php">Logout</a>';