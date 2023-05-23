#include<stdio.h>
int main(){
int ternas[3],i=0,cantidadjug=0,totalcali,idjug,numjug,calificacion; //declaracion de variables
float promcali=0;
		do{
			printf("\nIngrese su num de jugador(1-30): ");		// preguntamos la usuario los valores de la terna
			scanf("%d",& ternas[i]);
			if(ternas[i] >= 1 && ternas[i] <= 30){
				idjug=ternas[i];
			}
			printf("\nIngrese su num de juegos(1-7): ");
			scanf("%d",& ternas[i+1]);
			if(ternas[i+1] >= 1 && ternas[i+1] <= 7){
				numjug= ternas[i+1];
			}
			printf("\nIngrese su calificacion obtenida(1-10): ");
			scanf("%d",& ternas[i+2]);
			if(ternas[i+2] >= 1 && ternas[i+2] <= 10 && ternas[i] != 0){
				totalcali+=ternas[i+2];			// Aca se acumula todas las calificaciones de los jugadores
				calificacion=ternas[i+2];
			}
			cantidadjug++;
		}while(ternas[i] != 0);				//En caso que el primer valor sea 0, se termina la entrada de datos
		promcali = totalcali/(cantidadjug-1); 		//Se realiza el promedio del total dividido por la cantidad de jugadores(Se resta 1 a la cantidad de jugadores porque cuenta al jugador que incluyo 0 en el primer valor)
		printf("\nEl promedio de calificaciones de los jugadores es %.f", promcali);
}
