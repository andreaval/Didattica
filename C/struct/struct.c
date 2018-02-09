/**
 * Utilizzo base delle struct
 * @author Andrea Vallorani - 2018/02/09 19:39
 */
#include <stdio.h>
#include <string.h>

struct Books {
   char title[50];
   char author[50];
   int id;
} book;

typedef struct Contacts{
   char name[50];
   char phone[15];
   int id;
} Contact;

int main(){
    //posso dichiarare una struttura anche dentro al main
    
    //book già dichiarata
    strcpy(book.title,"The Hobbit"); 
    strcpy(book.author,"J. R. R. Tolkien");
    book.id = 1;
    //dichiaro book2
    struct Books book2 = {"Harry Potter","J. K. Rowling",2};
    //dichiaro array di book
    struct Books books[10];
    printf("Inserisci titolo libro: ");
    scanf("%s",books[0].title);
    printf("Inserisci autore libro: ");
    scanf("%s",books[0].author);
    books[0].id=3;
    //dichiaro contact
    Contact contact = {"mario","333123456",1};
    //dichiaro un puntatore alla struttura
    Contact *copy = &contact;
    //stampo le strutture
    printf("Libro: %s di %s (%d)\n",book.title,book.author,book.id);
    printf("Libro: %s di %s (%d)\n",book2.title,book2.author,book2.id);
    printf("Libro: %s di %s (%d)\n",books[0].title,books[0].author,books[0].id);
    printf("Contatto: %s tel.%s (%d)\n",contact.name,contact.phone,contact.id);
    printf("Contatto: %s tel.%s (%d)\n",copy->name,copy->phone,copy->id);
}