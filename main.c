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

    printf("\n\n%d", varIntera); //? stampa il valore di "varIntera"
    printf("\n%f", varDecimale); //? stampa il valore di "varDecimale"
    printf("\n%c", varCarattere); //? stampa il valore di "varCarattere"
    
    return 0; //? restituisce 0, perchè il programma è terminato correttamente
}