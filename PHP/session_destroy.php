<?php
/**
 * Esempio di chiusura di una sessione web in PHP
 * @author Andrea Vallorani
 * @version 1.0 2017-03-27 19:51
 */
 
//imposto il nome della sessione
session_name('myapp');

//riapro la sessione
session_start();

//svuoto l'array $_SESSION, equivalente a $_SESSION = array();
session_unset();

//distruggo il token associato alla sessione
session_destroy();

//elimino il cookie dal client
//per fare questo devo aggiornare il cookie della sessione impostando 
//una data di scadenza passata in modo che il cookie non sia più valido
//par1: nome cookie (cioè il nome della sessione)
//par2: valore (può essere vuoto)
//par3: unix timestamp: data di scadenza espressa in secondi a partire 
//      dal 1 gennaio 1970 (mettendo 1 secondo imposto la data: 1970-01-01 00:00:01)
//par4: path del cookie (deve essere lo stesso usato in fase di creazione della sessione)
setcookie('myapp','',1,'/');

echo 'Sessione distrutta!';