//contenuto del file 'gestione_files.js'

function delfile(nome,idriga){
    scelta = confirm('Confermi la cancellazione del file '+nome+' ?');
    if(scelta===true){
        //nascondo la riga inerente al file da cancellare
        $('#'+idriga).hide();
        //chiedo al server di cancellare il file
        $.get('elimina_file.php?nome='+nome,function(risposta){
            if(risposta!='1'){
                msg = risposta.substr(2);
                alert('Errore: '+msg);
                $('#'+idriga).show();
            } 
        });
    }
    return false;
}