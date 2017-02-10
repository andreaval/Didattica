<?php
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