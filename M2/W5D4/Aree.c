#include <stdio.h>
#include <math.h>

int main() {

            /* Dichiarazione variabili */
            double d, aq, ac, at;
	    /* Richiede l'inserimento di un numero */
            printf("Inserisci un numero reale:");
            scanf("%lf", &d);

	    /* Preparazione formule */	
            aq = d * d;
            ac = M_PI * pow(d / 2, 2);
            at = (sqrt(3) / 4) * d * d;

		/* Stampa i risultati */
                printf("\nArea del quadrato: %lf", aq);
    		printf("\nArea del cerchio: %lf", ac);
    		printf("\nArea del triangolo: %lf\n", at);

            return 0;

}
