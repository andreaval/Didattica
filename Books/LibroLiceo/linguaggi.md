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

