<?php
//contenuto del file 'elimina_file.php'

//cartella dei files
$dir = 'files';
//nome file da cancellare
$file = basename($_GET['nome']);
//procedura di cancellazione
if(is_file($dir.'/'.$file)){
    $esito = unlink($dir.'/'.$file);
    if($esito==true){
        echo 1;
    }
    else{
        echo '0-Impossibile cancellare il file';
    }
}
else{
    echo '0-File non esistente';
}