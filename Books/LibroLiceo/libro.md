

# Elementi utilizzabili

[TOC]

## 1.1 Elementi base
**Codice:** 

```java
public class Example implements LoremIpsum { 
	public static void main(String[] args) {
		if(args.length < 2) {
			System.out.println("Lorem ipsum dolor sit amet");
		}
	} // Obscura atque coniuge, per de coniunx
}		
```
```c
#include <stdio.h>
int main(){
    printf("Hello world!");
}
```
**Citazione:** 

> Et nepotes poterat, se qui. Euntem ego pater desuetaque aethera Maeandri, et
> [Dardanio geminaque](http://example.com#Dardanio_geminaque) cernit.

**Lista ordinata:**

1. De neque iura aquis
   1. wq
   2. wqwq
   3. wqwq
2. Frangitur gaudia mihi eo umor terrae quos
3. Recens diffudit ille tantum

**Lista non ordinata:**

- italia
  - roma
    - aaa
    - bbb
    - ccc
  - milano
  - venezia
- francia
- germania

**Note a piè pagina:**

Nel testo inserire i riferimenti alle note. Riferimento 1[^1]. Riferimento 2 [^testo]

[^1]: www.google.it Testo della nota, eventuale link
[^testo]: Testo della nota 2

**Formula inline:**

Formula contenuta inline $\pi r^2$ in una riga di testo

**Formula estesa:**
$$
ay \ne bx^ 3
$$
Sintassi Math Latex: [link](https://it.wikipedia.org/wiki/Aiuto:Formule_matematiche_TeX)

**Tabella:**

|  id  | num  | desc        |
| :--: | :--: | ----------- |
|  2   |  2   | 31          |
|  3   |  2   | 3fs         |
|  4   |  2   | fdssdfsdfsd |

**Linea orizzontale:**

------

**Link:**

[google](www.google.it)



## 1.2 Immagini

<figure markdown="1">
  <img src="images/crittografia-10.jpg" alt="alt text">

 <figcaption>My caption</figcaption>
</figure>



## 1.3 MathJax

Conversione decimale -> binario
$$
\begin{matrix}
\begin{array}{l}
\quad\enspace\,\,\mathbf{_{2}}   \\
 \begin{array}{r|rc}
23 &  \\
11 & {\color{red}1} \\
5 & {\color{red}1}   \\
2 & {\color{red}1}  & \uparrow\\
1 & {\color{red}0}  \\
0 & {\color{red}1}  \\
  \end{array} 
\end{array}
& = 10111_{2}
\end{matrix}
$$
Calcolo binario
$$
\begin{array}{rrrrr|r}
&1&1&1&1& + \\
 && 1 &1 & 1 & = \\ \hline
 1&0&1&1&0&
  \end{array}
$$
Tutorial completo MathJax: [https://math.meta.stackexchange.com/questions/5020/mathjax-basic-tutorial-and-quick-reference]

Editor online MathJax: [https://www.codecogs.com/eqnedit.php]



Array
$$
\begin{matrix}
A &
\begin{array}{|c|c|c|c|c|}
\large 3 &  \large 2 & \large 6 & \large 0  & \large 4\\ \hline
\end{array} \\
&\begin{array}{cccc}
\color{gray} {\small \,0} & \color{gray} {\small \,1} & \color{gray} {\small \,2} & \color{gray} {\small \,3}  & \color{gray} {\small \,4}\\ 
\end{array}
\end{matrix}
$$
