#include<stdio.h>
int numero_de_ventas,numero_de_compras;
int l=0,n,m,w,t,i=0,j=0,s,y,z;
struct item {
	int id_item;
	int cantidad;
	}almacen[1000];
struct operacion {
	int id_item;
	int cantidad; 
	char factura[10];
	}ventas[1000],compras[1000];


void ReporteAlmacen(void);
 
void Registrar_Venta(void);
void comprar(void);
void reportes(int op);


int main(){
int opcion,op;
do {
printf("\nEscoja una opción:\n1. Regristrar venta.\n2. Registrar compra.\n3. Reportes. \n4. Salir.\nOpcion:\t");
scanf("%d",&opcion);

	switch(opcion){
	case 1: Registrar_Venta();break;
	case 2:	comprar();
		break;
	case 3:  
	printf("\n1. Reporte de compras\n2. Reporte de ventas\n3. Reporte de Almacén\n4. Salir\nElija una opcion:\t");
	scanf("%d",&op); 
	reportes(op);
	break;

	case 4: break;
	default: printf("Esta no es una ocion valida\n"); break;
	}
} while(opcion!=4);
}
				/*Fcuincion de venta*/
void Registrar_Venta(void){

printf("\nContamos con item del 1_%d \nCuantos se venderan?:\t",l);
scanf("%d",&m);	
for(i=y;i<n+y;i++){
	printf("\nCompra: %d\nid del producto?\t",i+1);
	scanf("%d",&compras[i].id_item);
		for(t=0;t<=(m+l);t++){
			if(ventas[i].id_item==almacen[t].id_item){
				printf("Cantidad:\t");
				scanf("%d",&ventas[i].cantidad);
					if(ventas[i].cantidad>almacen[t].cantidad){
					printf("\nLo sentimos, no contamos con la cantidad necesaria de producto para atender su pedido");
					 break;
					}
else{
			printf("Factura:\t");
			scanf("%s",ventas[t].factura);
			almacen[t].cantidad=almacen[t].cantidad-ventas[i].cantidad;
			}
}
}
}	
	z=m+y;
	y=z;
}

				/*FUNCION COMPRAR*/
void comprar(){
printf("Cuantos productos quiere comprar:\t");
scanf("%d",&n);	
	for(i=l;i<(n+l);i++){
	printf(" %d %d %d",i,l,n);
	printf("\nCompra: %d\nid del producto?\t",i+1);
	scanf("%d",&compras[i].id_item);
	printf("cantidad:\t");
	scanf("%d",&compras[i].cantidad);
	printf("Factura:\t");
	scanf("%s",compras[i].factura);
	almacen[i].id_item=compras[i].id_item;
	almacen[i].cantidad=compras[i].cantidad;
	}
	s=n+l;
	l=s;		

}




/*Funcion de reportes*/
void reportes(int op){
switch(op){
case 1: break;
case 2: break;
case 3: ReporteAlmacen(); break;
case 4: break;
default: printf("\nEsta opcion no es valida\n");
}
}

/*Funcion de reporte de almacen*/
void ReporteAlmacen(void){
int i;
printf("\t Reporte de Almacén\nid_item\tExistencia\n");
for(i=0;i<=20;i++){
printf("%d\t%d\n",almacen[i].id_item,almacen[i].cantidad);

}
}
