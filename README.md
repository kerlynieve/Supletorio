## Nombre del autor :gift_heart::gift_heart:

#  Andrea Kerly Nieve Fierro :gift_heart::gift_heart:

![](https://avatars.githubusercontent.com/u/86324420?v=4)

### Nombres de los archivos que integran el proyecto.:star2:

  ####  Factura de productos.cpp :confetti_ball:
  #### Diagrama de flujo comerciales.jpg :confetti_ball:
  
# Descriccion. :ledger:

  Factura de productos. :ledger:

Este archivo cuenta con la funcion de elaborar una factura de 10 productos de compras ingresadas por el usuario. En el cual muestra el subtotal,  el incremento del iva y un descuento del 10% y la suma de todo esto que es el total a pagar.

Para ello primero se declararon las variables que son:  

int t=10, 
string articulos[10].
float precio[10].
float total,sbt=0,iva,dct.

Para poder ingresar el precio y el nombre de los productos se utilizo el ciclo "for" y el comando cout<< para mostrar el mensaje por pantalla pidiendole al usuario que ingrese el nombre y el precio del producto, cin>>articulo, precio para almacenar el nombre y el precio ingresado.
     
     for(int z=0;z<t;z++)
	{	
	    cout<<"INGRESE EL NOMBRE Y EL PRECIO DEL PRODUCTO #"<<(z+1)<<":\n";
        cout<<"Producto a comprar:\n "; 
		getline(cin,articulos[z]);
		cout<<"Precio:\n "; 
		cin>>precio[z];
		cin.ignore();
		cout<<endl;
   }
   
Se realizo otro ciclo for para calcular el iva, subtotal, descuento, total:
      
      for(int z=0;z<t;z++)
     {
    	sbt=sbt+precio[z];
    	iva=sbt*0.12;	
	    dct=sbt*0.10;
    	total=sbt+iva-dct;
	}
  
Y  por ultimo se creo un ciclo for para generar la factura.
     
     for(int z=0;z<t;z++)
	{
  
		cout<<z+1<<".-     "<<articulos[z]<<"\t\t"<<precio[z]<<endl;
    
	}
  
	cout<<"\t SUBTOTAL \t"<<sbt<<endl;
	cout<<"\t IVA 12% + \t"<<iva<<endl;
	cout<<"\t DESCUENTO 10% \t"<<dct<<endl;
	cout<<"\t TOTAL \t\t\n"<<total<<endl;
  
Diagrama de flujo comerciales.jpg :diamonds:

En este archivo esta el diagrama de flujo del programa principal, donde esta estructurado paso a paso cada parte de la codificacion en c++, utilizando su respectivo simbolo  y codigo.

### Descarga. :stars:

Pasos para descargar los archivos.:construction:

1 . Click en "code".

![](https://raw.githubusercontent.com/kerlynieve/Imagenes/main/decarga%20kerly.jpeg)

2 . Click en Download ZIP.

![](https://raw.githubusercontent.com/kerlynieve/Imagenes/main/descarga%20Ker2.jpeg)

3 . Una vez descargado el archivo dar click en "extraer aquí".

![](https://raw.githubusercontent.com/LuisAbrahanQuinonezCaicedo/Imagenes/main/3.jpeg)

4 . Estos son los archivos extraídos.

![](https://raw.githubusercontent.com/kerlynieve/Imagenes/main/descarga%20Ker2.jpeg)

### Compilacion. :beginner::beginner:

Proceso para compilar.:wrench:

 1. Click  en el icono de copilar.
 
![](https://raw.githubusercontent.com/LuisAbrahanQuinonezCaicedo/Imagenes/main/copilar.jpeg)

2 . Click en el iconode ejecutar.

![](https://raw.githubusercontent.com/LuisAbrahanQuinonezCaicedo/Imagenes/main/ejecutar0.jpeg)

3 . Mostrar programa por pantalla.

               3 .1 .  Ingresar arcticulo y sus precios.
               
   ![](https://raw.githubusercontent.com/LuisAbrahanQuinonezCaicedo/Imagenes/main/ejecutar5.jpeg)
   
4 . Mostrar por pantalla el resultado con el decuento del 10 % y el iva del 12 %.:triangular_flag_on_post:
            
   ![](https://raw.githubusercontent.com/patriciajama/imagenes/main/ejecutar6.jpeg)
