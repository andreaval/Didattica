Assembly (1950)
```assembly
MODEL SMALL
STACK 100H
.DATA
    HW      DB      "hello, world", 13, 10, '$'
.CODE
.STARTUP
    MOV AX, @data
    MOV DS, AX
    MOV DX, OFFSET HW
    MOV AH, 09H
    INT 21H
    MOV AX, 4C00H
    INT 21H
END
```

Fortran (1957)

```fortran
00    program hello
      write(*,*) 'Hello World!'
      stop
      end
```

Cobol (1959)

```cobol
IDENTIFICATION DIVISION.
      PROGRAM-ID.  HELLO-WORLD.
      PROCEDURE DIVISION.
          DISPLAY "Hello, world!".
          STOP RUN.
```

Basic (1964)

```basic
10 PRINT "Hello, world!"
20 END
```

B (1969)

```B
 main( ) {
   extrn a, b, c;
   putchar(a); putchar(b); putchar(c); putchar('!*n');
 }
 a 'hell';
 b 'o, w';
 c 'orld';
```
Pascal (1970)

```pascal
begin
   write('Hello, world!');
end.
```
C (1972)
```c
 #include <stdio.h>
 main(){
    printf("Hello, world!\n");
 }
```

C++ (1983)

```
#include <iostream>

int main(){
    std::cout << "Hello, World!" << std::endl;
}
```

Java (1995)

```java
class HelloWorld {
     public static void main(String[] args) {
          System.out.println("Hello, world!");
     }
}
```

JavaScript (1995)

```javascript
document.write('Hello, World!');
```

Python (1991)

```python
print("Hello, world!")
```

PHP (1995)

```php
<?php
    echo 'Hello, world!';
?>
```



# C++

## Tipi primitivi

Ogni linguaggio di programmazione definisce dei formati per la gestione delle variabili. C++ è un linguaggio caratterizzato da **tipizzazione statica**: ciò significa che ad ogni variabile, prima di essere utilizzata, deve essere associato un **tipo**.

I tipi primitivi o fondamentali sono quelli che consentono di  rappresentare informazioni “semplici”, non aggregate. Ogni definizione di tipo contempla le seguenti proprietà:

- la dimensione, espressa in numero di bit necessari per la rappresentazione di una variabile;
- l’intervallo di valori rappresentabili;
- le operazioni permesse

   In C++ esistono solo 5 tipi primitivi:

| tipo       | descrizione     | dimensione | range                                                  |
| ---------- | --------------- | ---------- | ------------------------------------------------------ |
| **int**    | numero intero   | 4 byte     | $[-2^{31},2^{31}-1] $                                  |
| **char**   | carattere       | 1 byte     | tabella ascii                                          |
| **float**  | numero decimale | 4 byte     | numero in virgola mobile con 6-7 cifre significative   |
| **double** | numero decimale | 8 byte     | numero in virgola mobile con 15-16 cifre significative |
| **bool**   | valore booleano | 1 byte     | 0 (false) o 1 (true)                                   |

<u>**Curiosità:**</u> Il numero **2.147.483.647** è l'ottavo numero primo di Mersenne. La primalità del numero, esprimibile come $2^{31}-1$, è stata scoperta da Eulero nel 1772. Fino al 1867 tale numero era il più grande numero primo noto.

Un identificatore è un nome simbolico che il programma assegna a un'entità del linguaggio, in modo che il compilatore sia in grado di riconoscere quell'entità ogni volta che incontra il nome che le è stato assegnato.
Sono pertanto identificatori i nomi delle variabili, delle funzioni, degli array, ecc...
Ogni identificatore consiste di una sequenza di lettere (maiuscole o minuscole) e di cifre numeriche, senza caratteri di altro tipo o spazi bianchi (a parte l'underscore "_", che è considerato una lettera). Il primo carattere deve essere una lettera. Non sono validi gli identificatori che coincidono con le parole-chiave del linguaggio.
Esempi di identificatori validi:      hello      deep_space9      a123      _7bello
Esempi di identificatori non validi:
un amico 	   	(contiene uno spazio)
un'amica 	   	(contiene un apostrofo)
7bello 	   	(il primo carattere non è una lettera)
for 	   	(è una parola-chiave del C++)



notazioni: ungherese, camelCase, snake_case

### Esempi

#### Calcolo prezzo scontato

```c++
#include <iostream>
using namespace std;
int main(){
    float price,discount,discountPrice;
    cout << "Prezzo: ";
    cin >> price;
    cout << "Sconto (%): ";
    cin >> discount;
    discountPrice = price - (price/100)*discount;
    cout << "Prezzo scontato: " << discountPrice << endl;   
}
```



## Tipi composti

I tipi composti sono quelli costituiti per aggregazione a partire da tipi fondamentali. Il