<?php
/**
 * Esempio di apertura di una sessione web in PHP
 * @author Andrea Vallorani
 * @version 1.0 2017-03-17 18:50
 */
 
//imposto il nome della sessione (che sarà anche il nome del cookie salvato nel browser)
session_name('myapp');

//imposto la durata della sessione in secondi (0 = sino alla chiusura del browser)
$time = 0;
//il percorso di validità (/ = tutte le sottocartelle)
//il dominio di validità del cookie
//secure (valido solo per connessioni HTTPS)
//httponly (non accessibile da JS)
session_set_cookie_params($time,'/','localhost',false,true);

//se cambio la durata della sessione devo anche modificare l'impostazione gc_maxlifetime 
//altrimenti il garbage collector potrebbe rimuovere in anticipo la sessione
if($time){
    ini_set('session.gc_maxlifetime',$time);
} 

//creo o ripristino sessione
//ATTENZIONE: prima dell'apertura della sessione non devono essere eseguiti stampe
//altrimenti la sessione non potrà essere creata
session_start();

//echo 'Sessione creata! Token: '.session_id();