//? Commento singola riga
/* commento più righe*/

#include <stdio.h> //? libreria principale di C che contiene tutte le funzioni di base

int main() {


    //! printf
    printf("Hello World!"); //? Stampa "Hello World"!
    printf("Sto imparando C!"); //? Stampa "Sto imparando C" nella stessa riga del printf iniziale, va aggiunto per forza lo \n all'inizo
    printf("\nnuova riga"); //? Stampa "nuova riga" su una nuova riga
    //? "\\" per mettere un bacslash      "\n" per mettere una nuova riga     "\"" per mettere una virgoletta     "\t" crea un "tab orizzontale"


    //! variabili
    //* regole variabili:
    //* 1) devono iniziare con una lettera o un underscore(_)
    //* 2) sono case sensitive
    //* 3) non possono contenere spazi oppure simboli strani (!, #, $, %, &, * ecc...)
   
    // * formattazione: tipo nomeVar = valore;  esempio: int a = 1;

    int numero = 15; //? crea una variabile di tipo integer chiamata "numero" di cui valore 15
    numero = 10; //? il valore di "numero" è diventato 10

    //* non è possibile fare questa cosa "printf(numero)" poichè darà un errore
    //* per stampare il valore di una variabile sarà necessario fare come segue:

    printf("\n\n%d", numero); //? stampa il valore di "numero"

    //? tipi di variabile
    int varIntera = 10; //? crea una variabile di tipo integer chiamata "varIntera" di cui valore 10
    float varDecimale = 1.10; //? crea una variabile di tipo float chiamata "varDecimale" di cui valore 1.10
    char varCarattere = 'M'; //? crea una variabile di tipo char chiamata "varCarattere" di cui valore 'a'

    printf("\n\n %d", varIntera); //? stampa il valore di "varIntera"
    printf("\n %f", varDecimale); //? stampa il valore di "varDecimale"
    printf("\n %c", varCarattere); //? stampa il valore di "varCarattere"
    
    //? più var in un print

    printf("\n\n numero:%d\n Decimale:%f\n Char:%c", varIntera, varDecimale, varCarattere); //? stampa il valore di "varIntera", "varDecimale" e "varCarattere"

    //? somma di due Var
    int varSomma = varIntera + numero; //? crea una variabile di tipo integer chiamata "varSomma" di cui valore 20
    printf("\n\n Somma:%d", varSomma); //? stampa il valore di "varSomma"

    //? dichiarare più variabili contemporaneamente
    int var1 = 5, var2 = 10, var3 = 15; //? crea tre variabili di tipo integer
    printf("\n\n %d", var1 + var2 + var3); //? stampa il valore di "var1" sommato a quello di "var2" sommato a quello di "var3"

    //? incrementare il valore di una variabile int di 1
    var1++; //? incrementa il valore di "var1" di 1
    printf("\n\n %d", var1); //? stampa il valore di "var1"

    //? incrementare il valore di una variabile di più di 1
    var1 += 2; //? incrementa il valore di "var1" di 2
    printf("\n\n %d", var1); //? stampa il valore di "var1"


    //! Tipi di dati
    

    return 0; //? restituisce 0, perchè il programma è terminato correttamente
}