/*Agrega un elemento a un vector dinamico
-la entrada es por la pantalla e intriducida
-por el usiario    hackerpic                    */

#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

int main() {
	
	unsigned int 	*vec=NULL;
	int  	input, i;
	unsigned int 	*mas;
	int 	conteo = 0;
	
do{
        printf("Introduzca el elemento del vector (entero) '0' para salir: \n");
        scanf("%d", &input);
        mas = (int *) realloc(vec, conteo * sizeof(int));
	conteo++;

	if(mas!=NULL){
        	vec = mas;
                vec[conteo-1] = input;
 	        }
	else{
		free(vec);
		exit(1);
	}
}
	while(input != 0);
	for(i = 0;i<conteo;i++){
		printf("[%u]", vec[i]);
		}
	
	free(vec);
	return 0;
}
