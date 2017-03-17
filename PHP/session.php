<?php
/**
 * Esempio di creazione di una sessione web in PHP
 * @author Andrea Vallorani
 * @version 1.0 2017-03-17 18:50
 */
 
//imposto nome del cookie di sessione
session_name('myapp');
//imposto la durata della sessione (0 = sino alla chiusura del browser)
//il percorso di validità (/ = tutte le sottocartelle)
//il dominio di validità del cookie
//secure (solo connessioni sicure)
//httponly (non accessibile da JS)
session_set_cookie_params(3600,'/','localhost',false,true);
//creo o ripristino sessione
session_start();

//uso l'array speciale $_SESSION per gestire i permessi di accesso
if(empty($_SESSION['autenticato'])){
    //header("Location: login.php?return=pagina_di_ritorno.php");
    exit;
}