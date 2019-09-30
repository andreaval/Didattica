<!DOCTYPE html>
<html>
    <head>
        <meta charset="utf-8">
        <title>Elenco files</title>
        <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.min.css">
        <script src="https://code.jquery.com/jquery-3.2.1.min.js"></script>
        <script src="gestione_files.js"></script>
        <style>
            a{cursor:pointer}
        </style>
    </head>
    <body class="container">
        <h1>Elenco files</h1>
        <table class="table">
            <thead>
                <tr>
                    <th>Nome</th><th>Estensione</th><th>Dimensione</th><th></th>
                </tr>
            </thead>
            <?php
            $dir = 'files';
            $files = scandir($dir);
            foreach($files as $i=>$file){
                if($file!='.' && $file!='..'){
                    if(is_dir($dir.'/'.$file)){
                        $ext = '';
                        $size = '-';
                    }
                    else{ 
                        $ext = pathinfo($file,PATHINFO_EXTENSION);
                        $size = number_format(filesize($dir.'/'.$file)/1000,1,',','.');
                    }
                    echo "<tr id=\"file$i\"><td>$file</td><td>$ext</td><td>$size KB</td><td><a href=\"\" onclick=\"return delfile('$file','file$i')\"><i class=\"glyphicon glyphicon-remove\"></i></a></td></tr>";
                }
            }
            ?>
        </table>
    </body>
</html>