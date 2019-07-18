#include <cstdlib>
#include <iostream>
#include <stdio.h>  
#include <windows.h> 

using namespace std;

int menu();
char Buscar(int Ref);
char Buscar6(int dat);
int Eliminar(int N);
int Eliminar6(int N);
void Ejercicio1();
void Registrar_Inf();
void Gestion_Inven();
void Actualizar();
void Borrar();
void Consultar_Info();
void Informe_Inven();
void Ejercicio2();
void Agregar();
void Borrar_re();
void Ejercicio6();
void Agregar6();
void Borrar6();


struct Medicamentos{
	int Refe;
	char Nombre[30];
	char Present[30];
	int Max;
	int Min;
	Medicamentos *sig;	
};

struct Numero{
	int Num;
	Numero *sig;
};

struct Lista1{
	int n;
	Lista1 *sig;
};

struct Lista2{
	int n;
	Lista2 *sig;
};


Lista1 *p1, *q1, *cab1, *fin1;
Lista2 *p2, *q2, *cab2, *fin2;
Medicamentos *p, *q, *cab, *fin;
Numero *pn, *qn, *cabn, *finn, *r, *t, *s;

main(){
	
char op='S';

	while(op=='S'){
		switch(menu()){
			case 1:
			    Ejercicio1();
			break;	
			case 2:
				Ejercicio2();
			break;	
			case 3:
				Ejercicio6();
			break;		
			case 4:
				//consul_medi();
			break;
			case 5:
			//	actual_medi();
			break;
			case 7:
				return 0;	
			break;
			
			
		}//switch
	}//while
	
	system("pause>/nul");
}//main

int menu(){
  system("color fc");
	int opc;
	do{
	system("cls");
	cout<<"\n\n\t\t\t --M E N U   P R I N C I P A L-- "<<endl;
	
	cout<<"\n\n   1.- EJERCICIO 1 ";
	cout<<"\n   2.- EJERCICIO 2 ";
	cout<<"\n   3.- EJERCICIO 6 ";
	cout<<"\n   4.- CONSULTAR MEDICAMENTO ";
	cout<<"\n   5.- ACTUALIZAR MEDICAMENTO ";
	cout<<"\n   6.- FUNCION LLENADO DE VECTOR ";
	cout<<"\n   7.- SALIR ";
	
	cout<<"\n\n\n DIGITE SU OPCION...!!  : ";cin>>opc;

}while((opc<1)||(opc>7));

return opc;
}

void Ejercicio1(){
		
	int opc;
	do{
		system("cls");
		cout<<"\n\n\t\t\t MENU PRINCIPAL "<<endl;
		cout<<"\n\n\t REGISTRO DE MEDICAMENTOS LA SALUD "<<endl;
			
		cout<<"\n\n   1.- Registrar Informacion de Inventario";
		cout<<"\n   2.- Gestion de Inventario";
		cout<<"\n   3.- Atras";
	
		cout<<"\n\n\n DIGITE SU OPCION...!!  : ";cin>>opc;
	
		switch(opc){
			case 1:
		    	Registrar_Inf();
			break;
				
			case 2:
				Gestion_Inven();
			break;				
		}//switch

	}while(opc!=3);

	system("pause>/nul");
}

void Registrar_Inf(){
	char Mas='s';
	
	while(Mas=='s'){
		p=new(Medicamentos);
		if(p==NULL){
			cout<<"No hay memoria disponible";
		}else{
			system("cls");
			cout<<"\n   Digite Referencia del Medicamento  : ";cin>>p->Refe;
			cout<<"\n   Digite Nombre del Medicamento      : ";cin>>p->Nombre;
			cout<<"\n   Digite Presentacion del Medicamento: ";cin>>p->Present;
			cout<<"\n   Digite Cantidad Max del Medicamento: ";cin>>p->Max;
			cout<<"\n   Digite Cantidad Min del Medicamento: ";cin>>p->Min;
			
			p->sig=NULL;
			
			if(cab==NULL){
				cab=p;
				fin=p;
			}else{
				fin->sig=p;
				fin=p;
			}			
		}
		cout<<"\n   Desea Agregar Mas Medicamentos: ";cin>>Mas;		
	}
}

void Gestion_Inven(){
		
	int opc;
	do{
		system("cls");
		cout<<"\n\n\t\t\t MENU PRINCIPAL "<<endl;
		cout<<"\n\n\t REGISTRO DE MEDICAMENTOS LA SALUD "<<endl;
			
		cout<<"\n\n   1.- Atualizar Info. De Inventario ";
		cout<<"\n   2.- Borrar Registro de Inventario ";
		cout<<"\n   3.- Consulta Informacion de Inventario ";
		cout<<"\n   4.- Informe de Inventarios ";
		cout<<"\n   5.- Retornar al Menu Principal";
		
		cout<<"\n\n\n DIGITE SU OPCION...!!  : ";cin>>opc;
	
		switch(opc){
			case 1:
		    	Actualizar();
			break;
				
			case 2:
				Borrar();
			break;
		
			case 3:
				Consultar_Info();
			break;		
			
			case 4:
				Informe_Inven();
			break;
			
	}//switch

	}while(opc!=5);

	system("pause>/nul");
}

void Actualizar(){
	char Mas='s';
	int Ref, el;
	
	while(Mas=='s'){
		system("cls");
		cout<<"\n   Digite Referencia del Medicamento a Actualizar : ";cin>>Ref;
		if(Buscar(Ref)=='n'){
			cout<<"\n  El Medicamento No Existe";
		}else{
			cout<<"\n  El Medicamento a Actualizar es: ";
			cout<<"\n 1. Referencia   : "<<q->Refe;
			cout<<"\n 2. Nombre       : "<<q->Nombre;
			cout<<"\n 3. Prensentacion: "<<q->Present;
			cout<<"\n 4. Cantidad Max : "<<q->Max;
			cout<<"\n 5. Cantidad Max : "<<q->Min;
			cout<<"\n 6. Todos ";
			cout<<"\n 7. No Es el medicamento que deseo Actualizar ";
			cout<<"\n Seguro a Borrar? : ";cin>>el;
			
			if(el==1){
				cout<<"\n   Digite Referencia del Medicamento  : ";cin>>p->Refe;
			}else if(el==2){
				cout<<"\n   Digite Nombre del Medicamento      : ";cin>>p->Nombre;
			}else if(el==3){
				cout<<"\n   Digite Presentacion del Medicamento: ";cin>>p->Present;
			}else if(el==4){
				cout<<"\n   Digite Cantidad Max del Medicamento: ";cin>>p->Max;
			}else if(el==5){
				cout<<"\n   Digite Cantidad Min del Medicamento: ";cin>>p->Min;
			}else if(el==6){
				cout<<"\n   Digite Referencia del Medicamento  : ";cin>>p->Refe;
				cout<<"\n   Digite Nombre del Medicamento      : ";cin>>p->Nombre;
				cout<<"\n   Digite Presentacion del Medicamento: ";cin>>p->Present;
				cout<<"\n   Digite Cantidad Max del Medicamento: ";cin>>p->Max;
				cout<<"\n   Digite Cantidad Min del Medicamento: ";cin>>p->Min;				
			}
		}
		cout<<"\n   Desea Borrar Mas Medicamentos: ";cin>>Mas;
	}	
}

void Borrar(){
	char Mas='s', Conf;
	int Ref;
	
	while(Mas=='s'){
		system("cls");
		cout<<"\n   Digite Referencia del Medicamento a Borrar : ";cin>>Ref;
		if(Buscar(Ref)=='n'){
			cout<<"\n  El Medicamento No Existe";
		}else{
			cout<<"\n  El Medicamento a Borrar es: ";
			cout<<"\n Referencia   : "<<q->Refe;
			cout<<"\n Nombre       : "<<q->Nombre;
			cout<<"\n Prensentacion: "<<q->Present;
			cout<<"\n Cantidad Max : "<<q->Max;
			cout<<"\n Cantidad Max : "<<q->Min;
			cout<<"\n Seguro a Borrar? : ";cin>>Conf;
			
			if(Conf=='s'){
				if(q==cab&&cab==fin){
					cab=NULL;					
				}else if(q==cab){
					cab=cab->sig;
				}else{
					p=cab;
					while(p->sig!=q){
						p=p->sig;
					}
					p->sig=q->sig;
					if(q==fin){
						fin=p;
					}
				}
				delete(q);
			}
		}
		cout<<"\n   Desea Borrar Mas Medicamentos: ";cin>>Mas;
	}	
}

void Consultar_Info(){
	char Mas='s';
	int Ref;
	
	while(Mas='s'){
		system("cls");
		cout<<"\n   Digite Referencia del Medicamento a Consultar : ";cin>>Ref;
		if(Buscar(Ref)=='n'){
			cout<<"\n  El Medicamento No Existe";
		}else{
			cout<<"\n Referencia   : "<<q->Refe;
			cout<<"\n Nombre       : "<<q->Nombre;
			cout<<"\n Prensentacion: "<<q->Present;
			cout<<"\n Cantidad Max : "<<q->Max;
			cout<<"\n Cantidad Max : "<<q->Min;
		}
		cout<<"\n   Desea Consultar Mas Medicamentos: ";cin>>Mas;
	}	
}

char Buscar(int Ref){
	char enc;
	if(cab==NULL){
		return 'n';
	}else{
		q=cab;
		enc='n';
		while(q!=NULL&&enc=='n'){
			if(q->Refe==Ref){
				return 's';
			}else{
				q=q->sig;
			}
		}
		
		if(enc=='n'){
			return 'n';
		}
	}
}

void Informe_Inven(){
	
	if(cab==NULL){
		cout<<"\n   No Existen Medicamentos Registrados";
	}else{
		system("cls");
		q=cab;
		while(q!=NULL){
			cout<<"\n\n"<<q->Refe;
			cout<<"\n"<<q->Nombre;
			cout<<"\n"<<q->Present;
			cout<<"\n"<<q->Max;
			cout<<"\n"<<q->Min;
		
			q=q->sig;
		}
	}
	system("pause");	
}

void Ejercicio2(){
		
	int opc;
	do{
		system("cls");
		cout<<"\n\n\t\t\t MENU PRINCIPAL "<<endl;
		cout<<"\n\n\t BORRAR REPETIDOS "<<endl;
			
		cout<<"\n\n   1.- Agregar";
		cout<<"\n   2.- Borrar";
		cout<<"\n   3.- Atras";
	
		cout<<"\n\n\n DIGITE SU OPCION...!!  : ";cin>>opc;
	
		switch(opc){
			case 1:
		    	Agregar();
			break;
				
			case 2:
				Borrar_re();
			break;				
		}//switch

	}while(opc!=3);

	system("pause>/nul");
}

void Agregar(){
	char Mas='s';
	
	while(Mas=='s'){
		pn=new(Numero);
		if(pn==NULL){
			cout<<"No hay memoria disponible";
		}else{
			system("cls");
			cout<<"\n   Digite Numero  : ";cin>>pn->Num;
			
			
			pn->sig=NULL;
			
			if(cabn==NULL){
				cabn=pn;
				finn=pn;
			}else{
				finn->sig=pn;
				finn=pn;
			}			
		}
		cout<<"\n   Desea Agregar Mas Medicamentos: ";cin>>Mas;		
	}
	qn=cabn;
	while(qn!=NULL){
		cout<<"\n\t"<<qn->Num;
	
		qn=qn->sig;
	}
	system("pause");
}

void Borrar_re(){
	int cont;
	
	pn=cabn;
	while(pn!=NULL){
		qn=cabn;
		cont=0;
		while(qn!=NULL){
			if(pn->Num==qn->Num){
				cont=cont+1;
			}
			qn=qn->sig;
		}
		
		if(cont>=2){
			Eliminar(pn->Num);
			pn=cabn;
		}else{
			pn=pn->sig;	
		}
	}
	qn=cabn;
	while(qn!=NULL){
		cout<<"\n\t"<<qn->Num;
	
		qn=qn->sig;
	}
	system("pause");
}

int Eliminar(int N){
	r=cabn;
	while(r!=NULL){
		if(r->Num==N){
			if(r==cabn){
				cabn=cabn->sig;
				t=r;
				r=cabn;
			}else{
				s=cabn;
				while(s->sig!=r){
					s=s->sig;
				}
				
				s->sig=r->sig;
				t=r;
				r=r->sig;
			}
			delete(t);
		}else{
			r=r->sig;
		}
	}
}

void Ejercicio6(){
		
	int opc;
	do{
		system("cls");
		cout<<"\n\n\t\t\t MENU PRINCIPAL "<<endl;
		cout<<"\n\n\t BORRAR REPETIDOS "<<endl;
			
		cout<<"\n\n   1.- Agregar";
		cout<<"\n   2.- Borrar";
		cout<<"\n   3.- Atras";
	
		cout<<"\n\n\n DIGITE SU OPCION...!!  : ";cin>>opc;
	
		switch(opc){
			case 1:
		    	Agregar6();
			break;
				
			case 2:
				Borrar6();
			break;				
		}//switch

	}while(opc!=3);

	system("pause>/nul");
}

void Agregar6(){
	char Mas='s';
	
	while(Mas=='s'){
		p1=new(Lista1);
		if(p1==NULL){
			cout<<"No hay memoria disponible";
		}else{
			system("cls");
			cout<<"\n\t\t   Lista 1";
			cout<<"\n   Digite Numero  : ";cin>>p1->n;
			
			
			p1->sig=NULL;
			
			if(cab1==NULL){
				cab1=p1;
				fin1=p1;
			}else{
				fin1->sig=p1;
				fin1=p1;
			}			
		}
		cout<<"\n   Desea Agregar Mas? ";cin>>Mas;		
	}
	Mas='s';
	while(Mas=='s'){
		p2=new(Lista2);
		if(p2==NULL){
			cout<<"No hay memoria disponible";
		}else{
			system("cls");
			cout<<"\n\t\t   Lista 2";
			cout<<"\n   Digite Numero  : ";cin>>p2->n;
			
			
			p2->sig=NULL;
			
			if(cab2==NULL){
				cab2=p2;
				fin2=p2;
			}else{
				fin2->sig=p2;
				fin2=p2;
			}			
		}
		cout<<"\n   Desea Agregar Mas? ";cin>>Mas;		
	}
	
	q1=cab1;
	while(q1!=NULL){
		cout<<"\t"<<q1->n;
	
		q1=q1->sig;
	}
	cout<<"\n\n";
	q2=cab2;
	while(q2!=NULL){
		cout<<"\t"<<q2->n;
	
		q2=q2->sig;
	}
	cout<<"\n\n";
	system("pause");
}

void Borrar6(){
	q2=cab2;
	system("cls");
	while(q2!=NULL){	
		Buscar6(q2->n);
		q2=q2->sig;
	}
	
	
	q1=cab1;
	while(q1!=NULL){
		cout<<"\t"<<q1->n;
	
		q1=q1->sig;
	}
	cout<<"\n\n";
	q2=cab2;
	while(q2!=NULL){
		cout<<"\t"<<q2->n;
	
		q2=q2->sig;
	}
	cout<<"\n\n";
	system("pause");
}

char Buscar6(int dat){
	char enc;
	if(cab1==NULL){
		return 'n';
	}else{
		q1=cab1;
		enc='n';
		while(q1!=NULL&&enc=='n'){
			cout<<"Bien?xb";
			if(q1->n==dat){
				cout<<q1->n<<dat<<"Bien?";
				system("pause");
				enc='s';
				if(q1==cab1&&cab1==fin1){
					cab1=NULL;					
				}else if(q1==cab1){
					cab1=cab1->sig;
				}else{
					p1=cab1;
					while(p1->sig!=q1){
						p1=p1->sig;
					}
					p1->sig=q1->sig;
					if(q1==fin1){
						fin1=p1;
					}
				}
				delete(q1);
				return 's';
			}else{
				q1=q1->sig;
			}
		}
		
		if(enc=='n'){
			return 'n';
		}
	}
}

