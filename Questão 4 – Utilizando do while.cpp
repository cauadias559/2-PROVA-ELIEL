#include <stdio.h>

int main() {
	int senha;
	
	do {
		printf("\nDIGITE A SENHA: ");
		scanf("%d", &senha);
        if (senha!=123){
        	printf("\nSENHA INCORRETA, TENTE NOVAMENTE!");
		}
        

    } while (senha!=123);
    printf("\nACESSO LIBERADO!");
	

    return 0;
	
	}
