#include <stdio.h>
#include <stdlib.h>

typedef struct {
char name[50];
char lastName[50];
float average;} 
Alumno;
int recibeAlumnos(Alumno datos[100],char nombre[]);
int ordenamientoBurbuja( Alumno lista[100],int cont);

int main()
{
	Alumno alumnos[100];
	int conta;
	conta = recibeAlumnos(alumnos,"aprendizaje2.dat");
	 ordenamientoBurbuja(alumnos,conta);
    for( int i=0;i<conta;i++){
    		
	printf("%s,%s,%f\n",alumnos[i].name,alumnos[i].lastName,alumnos[i].average);
		}
}

int recibeAlumnos(Alumno datos[100],char nombre[]){
	FILE*file = NULL;
    
	file = fopen(nombre,"r");

	int cont = 0;
	do{
		fread(&datos[cont],sizeof(Alumno),1,file);
        cont++;		
	} while (!feof(file));
    	
    	
	
	fclose(file);
	return cont;
}
	
int ordenamientoBurbuja( Alumno lista[100],int cont){
for (int i=1; i<cont; i++){
    
    for(int j=0 ; j<cont - 1; j++){
        if (lista[j].lastName[0] > lista[j+1].lastName[0]){ 
            Alumno temp = lista[j];
            lista[j] = lista[j+1];
            lista[j+1] = temp;
            
        }
        
        
    }
}
}
