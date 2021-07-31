#include <iostream>
#include <string.h>
#include <stdio.h>
#include <conio.h>
using namespace std;

int main ()
{
    int t=10;
	string articulos[10];
	float precio[10],total,sbt=0,iva,dct;

cout<<"**************TIENDA MI VECINO**************\n\n";	
	for(int z=0;z<t;z++)
	{	
	    cout<<"INGRESE EL NOMBRE Y EL PRECIO DEL PRODUCTO #"<<(z+1)<<":\n";
        cout<<"Nombre: "; getline(cin,articulos[z]);
		cout<<"Precio: "; cin>>precio[z];
		cin.ignore();
		cout<<endl;
    }
    
    cout<<"***********LISTA DE PRODUCTOS Y VALOR A PAGAR***********\n\n";
    for(int z=0;z<t;z++)
    {
    	sbt=sbt+precio[z];
    	iva=sbt*0.12;	
	    dct=sbt*0.10;
    	total=sbt+iva-dct;
	}
	for(int z=0;z<t;z++)
	{
		cout<<z+1<<".-     "<<articulos[z]<<"\t\t"<<precio[z]<<endl;
	}
	cout<<"\t SUBTOTAL \t"<<sbt<<endl;
	cout<<"\t IVA 12% + \t"<<iva<<endl;
	cout<<"\t DESCUENTO 10% \t"<<dct<<endl;
	cout<<"\t TOTAL \t\t"<<total<<endl;
	
cout<<"****************MUCHAS GRACIAS POR COMPRAR EN TIENDA MI VECINO****************";
getch ();
return 0;
}