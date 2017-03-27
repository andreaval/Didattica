<?php
/**
 * Recupero di dati da un DB di tipo Mysql
 * @author Andrea Vallorani
 * @version 1.0 2017-01-27 18:32
 */
$conn = @mysqli_connect('127.0.0.1','myuser','mypass','prova1');
if (!$conn) {
    echo 'Errore connessione: '.mysqli_connect_error()."\n";
    exit;
}
$tot=0;
if ($result = mysqli_query($conn,'SELECT * FROM utenti')) {
    while ($row = mysqli_fetch_assoc($result)) {
        foreach($row as $k=>$v){
            echo "$k:$v ";
        }
        echo '<br>';
        $utenti[] = $row;
        $tot++;
    }
    mysqli_free_result($result);
}

mysqli_close($conn);

echo "$tot risultati<br>";

var_dump($utenti);