# Introduzione 
La **crittografia** o criptografia (dal greco: scrittura nascosta) è la tecnica che consente di rendere un messaggio comprensibile solo al destinatario sottoponendo il testo a trasformazioni per renderlo <u>incomprensibile</u> ad altri soggetti. 

> **Testo in chiaro =** in inglese *plaintext (/ˈpleɪnˌtɛkst/)*, rappresenta in crittografia il testo originale da trasmettere.

> **Testo cifrato =** in inglese *ciphertext (*/ˈsaɪ fərˌtɛkst/*)*, rappresenta in crittografia il testo originale trasformato e quindi incomprensibile.

> **Criptare (cifrare, crittografare, crittare) =** in inglese *to encrypt (/ɛnˈkrɪpt/)*, trasformare il *plaintext* in *ciphertext*

> **Decriptare (decifrare, decriptare) =** in inglese *to decrypt*, ritrasformare il testo cifrato in testo in chiaro 

> **Cifrario =** algoritmo utilizzato per eseguire operazioni di cifratura e decifratura del messaggio.

> **Chiave segreta =** in inglese *secret key (/ˈsikrɪt ki/)*, è l'informazione segreta condivisa tra mittente e destinatario necessaria alle operazioni di cifratura e decifratura.

$$
Criptare \ne Codificare
$$

> **Codificare =** processo di conversione di un messaggio in un altro formato.  La codifica di un messaggio può avere svariati scopi (invio dati, salvataggio, ecc.), ma non quello di mantenere la riservatezza del messaggio originale.
> La decodifica di un qualsiasi contenuto non richiede mai la conoscenza di una chiave, ma solo la conoscenza dell’algoritmo, che è tipicamente (e volutamente) noto. Un sistema di codifica usato di frequente è <u>Base64</u>. 



![](images/crittografia-10.jpg)
*Schema 1 - **Invio e ricezione messaggio criptato***



**N.B.** Tecniche che nascondono l'esistenza del messaggio non sono considerate tecniche crittografiche ma tecniche di **steganografia** (dal greco: scrittura coperta). Tra queste ricordiamo:

- Inchiostro simpatico
- Messaggio tatuato sulla testa di uno schiavo e mascherato dalla ricrescita dei capelli



~~**N.B.** la robustezza di un algoritmo crittografico può in alcuni casi essere data dalla segretezza dell’algoritmo utilizzato oltre che dalla chiave~~

?? chiave segreta ??

> **Crittoanalisi =** Strategia di ricostruzione del testo in chiaro a partire da uno o più testi cifrati di cui non si possiede la chiave. Tipicamente l’oggetto dell’analisi è la chiave segreta di accesso.

> **Tecnica brute force =** Vengono provate tutte le possibili chiavi fino a quando non viene compreso il testo cifrato.

N.B. Crittografia + Crittoanalisi = Crittologia (ovvero la disciplina che si occupa di tutti gli aspetti delle scritture nascoste)

Le tecniche crittografiche possono essere classificate in due principali sistemi: a **chiave simmetrica** e a **chiave asimmetrica**.

# Crittografia simmetrica
La crittografia a chiave simmetrica è un tecnica di crittografia in cui si utilizza <u>una sola chiave segreta</u>. Tale chiave è utilizzata dall’algoritmo di crittografia sia per criptare che per decriptare i messaggi. 
Il punto debole della crittografia simmetrica è  lo _scambio della chiave_ tra i due interlocutori (la chiave deve essere in un qualche modo comunicata tra le parti).

50ac Giulio Cesare
1500 Vigenère
1917 verman 
1920 enigma
1977 Des
1978 3des
2001 AES


## Algoritmo di Giulio Cesare 
Il cifrario di Giulio Cesare è uno dei primi algoritmi di crittografia conosciuti. E’ un algoritmo **simmetrico a sostituzione monoalfabetica**. Utilizza un alfabeto per il testo in chiaro e una permutazione dello stesso per il testo cifrato. La permutazione utilizzata costituisce la chiave del sistema. Durante la cifratura, ad ogni lettera del testo in chiaro viene associata la corrispondente lettera dell'alfabeto permutato. 

Il numero di possibili chiavi è dato dal numero dei caratteri che compongono l'alfabeto utilizzato (meno il primo carattere). In genere Giulio Cesare usava la chiave 3.

## Il cifrario di Vigenère
Il cifrario di Vigenère è un algoritmo di crittografia **simmetrico a sostituzione polialfabetica**. É il più semplice dei cifrari polialfabetici e fu inventato nel 1586 da  Blaise de Vigenère. Lo si può considerare una generalizzazione del cifrario di Cesare. Invece di spostare sempre dello stesso numero di posti la lettera da cifrare, questa viene spostata di un numero di posti variabile ma ripetuto, determinato in base ad una parola chiave (detta verme)

Testo chiaro  - RAPPORTOIMMEDIATO
Verme         - VERMEVERMEVERMEVE
Testo cifrato - MEGBSMXFUQHIUUEOS

Ha goduto per tre secoli la fama di essere un cifrario inattaccabile; nel 1863 il colonnello prussiano Friedrich Kasiski pubblicò un primo metodo di decrittazione; in seguito si sono trovati diversi altri efficienti metodi per forzare questo cifrario. La debolezza del Vigenère sta nell'essere, di fatto, un insieme di n cifrari di Cesare, dove n è la lunghezza della chiave; se il crittoanalista riesce a determinare la lunghezza della chiave (nel nostro caso, n) la decrittazione diventa molto semplice.

## Cifrario di Vernan
Il cifrario di Vernam o cifrario One Time Pad
Metodo usato dalle spie: matematicamente impossibile da decifrare (è chiamato il "cifrario perfetto"). Il problema è lo scambio della chiave che deve essere lunga come il messaggio da inviare.
Le spie venivano equipaggiate di taccuini (pad in inglese) contenenti una lunga chiave per ogni pagina, da poter strappare e gettare una volta utilizzata (one time, ovvero "un solo uso"). 

Testo in chiaro: C I A O
Chiave:          A J R F
\------------------------
Testo cifrato:   C R R T

# Crittografia asimmetrica


