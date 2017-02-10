<?php 
$campi = [username,password,email,data_nascita,sesso,nazione,privacy];
?>
<!DOCTYPE html>
<html>
<head>
    <title>Controllo dati inviati</title>
</head>
<body>
    Dati inviati tramite:
<?php
    if(!empty($_GET)) echo '<strong>GET</strong>';
    else if(!empty($_POST)) echo '<strong>POST</strong>';
    else echo '<i>nessun dato inviato</i> (:';
    
    if(!empty($_REQUEST)){
?>
<h4>Elenco dati inviati:</h4>
<table border="1">
    <?php
    foreach($_REQUEST as $k=>$v){
        echo "<tr><td><strong>$k</strong></td><td>$v</td></tr>"; 
    }
    ?>
</table>
<?php } 
$errori = [];
foreach($campi as $k){
    if(!isset($_REQUEST[$k])) $errori[]=$k;
}
if(count($errori)){
    echo '<h4 style="color:red">Non hai inviato i seguenti campi: '.implode(' , ',$errori).'</h4>';
}
else if(count($campi)) echo '<h4 style="color:green">OK tutti i campi richiesti sono stati inviati</h4>';
?>
</body>
</html>