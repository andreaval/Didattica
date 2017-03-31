<?php
/**
 * Elencare i files presenti in una cartella
 * @author Andrea Vallorani
 * @version 1.0 2017-03-31 23:10
 * @see http://php.net/manual/en/function.scandir.php   Documentazione funzione scandir
 * @see http://php.net/manual/en/function.filesize.php  Documentazione funzione filesize
 * @see http://php.net/manual/en/function.is-dir.php    Documentazione funzione is_dir
 */
?>
<!DOCTYPE html>
<html>
<head>
    <title>PHP: scansionare contenuto cartella</title>
</head>
<body>
    <?php
        //__DIR__ è una "costante magica". Contiene il path assoluto della cartella in 
        //cui si trova il file che la utilizza
        $dir = __DIR__;
        echo "<h1>Contenuto cartella: $dir</h1>";
        
        //dir potrebbe essere anche un percorso relativo
        //$dir = '.';
    ?>
    <table border="1">
        <tr>
            <th>Tipo</th><th>Nome</th><th>Dimensione</th>
        </tr>
        <?php
        //la funzione scandir ritorna un array di nomi (tutti gli elementi presenti nella cartella)
        //per default in ordine ascendente
        //ATTENZIONE: i primi due elementi sono: .(cartella corrente) ..(cartella padre)
        $files = scandir($dir);
        foreach($files as $file){
            //is_dir ritorna TRUE se il path fornito corrisponde ad una cartella
            if(is_dir($dir.'/'.$file)) $tipo = 'Cartella';
            else $tipo = 'File';
            //filesize ritorna la dimensione del file in Bytes
            $size = filesize($dir.'/'.$file);
            echo "<tr><td>$tipo</td><td>$file</td><td>$size B</td></tr>";
        }    
        ?>
</body>
</html>