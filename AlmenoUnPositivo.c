#include <stdio.h>

/* Programmache chiede ripetutamente all'utente di inserire interi fintanto che 
 * l'utente non introduce il numero 0. L'applicazione termina stampando un messaggio
 * che dice all'utente se e' stato introdotto almeno un numero positivo oppure no. */
int main() {
	    int numero;                    // un intero da leggere
        int almenoUnPositivo;    // almeno un positivo?

        /* inizialmente nessun positivo e' stato letto */
        almenoUnPositivo = 0;
        
        /* leggi numeri ripetutamente */
		do {
			     /* INPUT */
				 printf("Caro utente, introduci un intero, please, 0 per terminare.\n");
				 scanf("%d", &numero);
				 
				 if(numero>0)
					      almenoUnPositivo = 1;
		}
		while(numero!=0);
		
		/* OUTPUT */
		if(almenoUnPositivo)
			    printf("\nHai introdotto almeno un numero positivo.\n");
		else
			    printf("\nNon hai inserito nemmeno un numero positivo.\n");
}
