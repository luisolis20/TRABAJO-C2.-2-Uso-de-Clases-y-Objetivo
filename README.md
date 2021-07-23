
#  CLASES Y OBJETOS EN C++ 😎
![](https://lh3.googleusercontent.com/proxy/QtlDqmc1IhOsiON07diQ9BmAXHpmtqbPm9rVL9eiycUHpPAQKgKQbxfg6aAC2NgNoiwWPQva4r6EEgOiGtBpJE_7Q1uj7NETpOFs0BFO4Mbkn-BmUSQ4xH3b6v_8YYryppssG0hLe9cUG4RN_D0)

#### Este proyecto fue realizado por: 
🧑👦👨‍🦱👱‍♂️👩

|  Participantes| Descripción de su participación  |
| ------------ | ------------ |
|Giler Anni   | Cree ¨la clase persona¨ , cree los datos privados,la primera función me permite ¨ingresar¨, la segunda función que cree me permite ¨mostrar¨ los datos ingresados.   |
|Baez Daniel  | Creo una  función para calcular la edad,luego puso condiciones ¨if¨,¨else¨  para ingresar datos, luego creo una nueva función que va mostar la edad.|
|Eras Joel  | Creo la función que le va a permitir calcular el indice de masa corporal. |
|Becerra Michael  | Creo una función "guardar" usando una librería "fstream" para almacenar los datos. |
|Montaño Luis  | Creo una función que le va a permitir ¨recuperar¨ y ¨mostrar¨ los datos de un archivo txt usando el ¨if stream¨. |


## COMPOSICIÓN DEL PROYECTO 

Los archivos que integran el proyecto son colaboradores.h y inicio.cpp  



####  ARCHIVO   INICIO.CPP
En este archivo se encuentra la funcion principal (int main), en ella se encuentra un menu
#### ARCHIVO COLABORADORES.H

- En este archivo se en cuentra la clase  Persona 
- Tenemos tambien  una funcion para ingresar datos personales. 
- Una funcion  para mostar los datos personales
- Tenemos una funcion que calcula  la edad de las personas. 
- Otra funcion que nos calcula el indice de masa corporal 
- Una funcion que nos guarda los datos ingresados 
- Una que nos recupere y nos muestre los datos ingresados

# Descripcíón Del Proyecto

El proyecto cuenta con dos archivos anteriormente dichos (inicio.cpp y colaboradores.h)

![](https://raw.githubusercontent.com/luisolis20/prueba/main/bandicam%202021-07-21%2019-34-49-275.jpg)

##### El primer archivo (inicio.cpp) cuenta con librerias de varios tipos:
> Una de entrada y salida (iostream),  esa es nuestra libreria estándar. 
Una que manipula archivos desde el programa (fstream).
Una que generaliza cadenas alfanuméricas para albergar cadenas de objetos (string).
Una que asigna un bloque de tamaño de bytes de memoria (malloc).
> Una que contiene los prototipos de las funciones, macros, y tipos para utilidades de uso general (stdlib).

Cada una de estas librerias va acompañada por un (#include), ademas se le añade el "using namespace std" para no escribir std en cada linea de cod;
tambien se añadió un "#include" para hacer el llamado al otro archivo (colaboradores.h)

En el cod lo podemos apreciar de la siguiente manera:

![](https://raw.githubusercontent.com/luisolis20/prueba/main/bandicam%202021-07-21%2019-24-18-464.jpg)

##### Dentro de este archivo (inicio.cpp) tenemos una funcion principal "int main":
Dentro de esta funcion primero declaramos variables de tipo entero (int) y de tipo flotante (float) que nos trasladaran los datos del otro archivo, ademas se hace el llamado a la clase que se encuentra el el otro archivo (colaboradores.h). 
> Cuando se hace el llamado a una clase se coloca primero el nombre de la clase y luego se coloca un apodo u otro nombre, ejem: "Persona motato;"

![](https://raw.githubusercontent.com/luisolis20/prueba/main/bandicam%202021-07-21%2019-39-47-835.jpg)

Dentro de  esta funcion principal luego creamos un menu de inico que le permitirá al ususario escoger una opción.
Cada opción tiene un proceso:


| Opción  |  Proceso que realiza |
| ------------ | ------------ |
|1|Hace el llamado a la función y a la clase (motato.ingresar)(motato.mostrar), esta opción permite al usuario llenar sus datos personales y luego los muestra|
|2|Hace el llamado a la clase y a la funcion (motato.caledad)(motato.mostraed), esta opción permite al usuario ingresar la fecha actual y luego hacer el cálculo de la edad y mostrarla|
|3| Hace el llamado a la clase y a la funcion (motato.calimc), esta opción le permite al usuario calcular su índice de masa corporal con su peso y su altura, en caso de que su IMC sea normal se mostrará un mensaje "felicitaciones"    |
|4| Hace el llamado a la clase y a la función (motato.guardar), esta opcion le permite al usuario crear un archivo txt y guardar los datos ingresados.  |
|5|  Hace el llamado a la clase y a la función (motato.rym),esta opción permite al usuario recuperar los datos guardados en el archivo txt y mostrarlo por pantalla |


![](https://raw.githubusercontent.com/luisolis20/prueba/main/bandicam%202021-07-21%2020-48-53-179.jpg)

![](https://raw.githubusercontent.com/luisolis20/prueba/main/bandicam%202021-07-21%2020-52-21-591.jpg)

##### En el segundo archivo (colaboradores.h) se encuentran la clase (class Persona) y las funciones.

> En la Clase Persona se declaran los datos privados , estos datos privados son los que no pueden ser alterados.

![](https://raw.githubusercontent.com/luisolis20/prueba/main/bandicam%202021-07-21%2021-07-52-244.jpg)


##### Tambíen se declaran datos públicos:
> Dentro de estos datos púbicos se hacen las funciones y los procesos para cada una de las opciones del menú

Ahi se encuetran diversos tipos de funciones cada una de ellas hace un proceso distinto:

**La primera función(void ingresar):** En ella se va a ingresar los datos personales y se usa el **getline** para poder ingresar los nombre y apellidos con espacios.

![](https://raw.githubusercontent.com/luisolis20/prueba/main/bandicam%202021-07-21%2021-30-48-922.jpg)

**La segunda función(void mostrar):**En ella se va a mostrar los datos ingresados anteriormente en la primera funcion y utilizamos un **\t** para poder mostrar los datos en forma de una tabla.

![](https://raw.githubusercontent.com/luisolis20/prueba/main/bandicam%202021-07-21%2021-27-13-551.jpg)

**La tercera función (void caledad)**En ella se va a calcular la edad de una persona, primero se evalúa una condición para calcular los días :

![](https://raw.githubusercontent.com/luisolis20/prueba/main/bandicam%202021-07-21%2021-38-43-975.jpg)

> Esa condición permite identificar si el dia actual es menor al dia de nacimiento, si es menor se resta dia actual y el dia de nacimiento, caso contrario a al dia actual se le aumenta 30, al mes actual se le resta 1 y luego se resta dia actual y el dia de nacimiento. 

Luego se evalúa una condición para calcular los meses:

![](https://raw.githubusercontent.com/luisolis20/prueba/main/bandicam%202021-07-21%2021-45-17-861.jpg)

> Esa condición permite identificar si el mes actual es menor al mes de nacimiento, si es menor se resta mes actual y el mes de nacimiento, caso contrario a al mes actual se le aumenta 12, al año actual se le resta 1 y luego se resta mes actual y el mes de nacimiento.

Luego se evalúa se resta el año actual y el año de nacimiento

**La cuarta función (void mostraed):**En ella se va a mostrar la edad, los meses que tiene y los dias.

![](https://raw.githubusercontent.com/luisolis20/prueba/main/bandicam%202021-07-21%2021-54-03-299.jpg)
 
**La quinta función (void calimc):**En ella se va a calcular el indice de masa corporal de una persona.

![](https://raw.githubusercontent.com/luisolis20/prueba/main/bandicam%202021-07-21%2021-58-06-277.jpg)

> Allí se calcula el IMC a partir del peso y la altura de la persona, luego se evalúa una condición, si el IMC es menor a 24 se muestra un mensaje felicitando al usuario, caso contrario le muestra un mensaje diciendo que está gordo

 
**La sexta funcíón (void guardar): **En ella se va guardar los datos ingresados en la primera funcion (void ingresar), y además se crea un archivo txt que se va a guardar donde el usuario tenga descargado el proyecto.

![](https://raw.githubusercontent.com/luisolis20/prueba/main/bandicam%202021-07-21%2022-05-07-083.jpg)

> Alli se usa el cod ofstream para crear un archivo, se agrega una variable, esa variable sirve para crear el archivo txt; se coloca el "open" para decirle al programa que nos abra y nos cree un archivo con el siguiente nombre (registro.txt), luego nos evalua una condición, si el archivo falla o no se crea nos muestre un mensaje que diga error, caso contrario nos guarde los datos ingresados en la primera función


**La septima función (void rym):**En ella se va a recuperar y mostrar los datos guardados en la sexta función (void guardar).

![](https://raw.githubusercontent.com/luisolis20/prueba/main/bandicam%202021-07-21%2022-13-53-744.jpg)

> Allí se usa el cod ifstream que lo que hace es buscarnos el archivo que creamos en la sexta función y al ldao creamos la misma variable que en la sexta función, ademas se crea otra variable de tipo string, esa variable nos va a servir para que el programa nos muestre tod el texto que hay en el archivo de texto que hay en él.


# # # INSTALACION

- Para comenzar necesecitamos abrir nuestro repositorio de "github", ubicado en la carpeta llamada "inicio.cpp"  y copiamos todo el codigo antes editado.

![](https://raw.githubusercontent.com/luisolis20/prueba/main/bandicam%202021-07-22%2020-56-25-096.jpg)


![](https://raw.githubusercontent.com/luisolis20/prueba/main/bandicam%202021-07-22%2021-11-41-921.jpg)

- Una vez que hayamos copiado nuestro codigo tenemos que dirigirnos a nuestro programa "dev-c++" y generamos un nuevo archivo usando la convinacion de "ctrl+n" y con eso pegaremos nuestro codigo de "github".

![](https://raw.githubusercontent.com/luisolis20/prueba/main/bandicam%202021-07-22%2021-14-52-891.jpg)

![](https://raw.githubusercontent.com/luisolis20/prueba/main/bandicam%202021-07-22%2021-15-32-895.jpg)



- Necesitamos guardar nuestro proceso e irnos al icono de gruardar y se nos abrira una nueva ventana donde colocaremos el nombre del archivo como "inicio.cpp" y damos clic en guardar.

![](https://raw.githubusercontent.com/luisolis20/prueba/main/bandicam%202021-07-22%2021-39-53-866.jpg)


- Regresamos nuevamente a nuestros archivos en "github" y seleccionamos la carpeta de "colaboradores.h" y copiamos todo el codigo que se encuentra almacenado. 

![](https://raw.githubusercontent.com/luisolis20/images/main/bandicam%202021-07-22%2020-56-31-173.jpg)

![](https://raw.githubusercontent.com/luisolis20/images/main/bandicam%202021-07-22%2021-55-06-045.jpg)

- Abrimos otra vez nuestro programa "dev-c++" y utilizamos el comando "ctrl+n" y se nos abrira una nueva pestaña, una vez ahi pegamos el codigo que copiamos anteriormente y salvamos nuevamente nuestro programa, seleccionando el icono de "guardar" donde se nos abrira la pestaña para poner el nimbre de nuestro archivo y lo titularemos como: "colaboradores.h"

![](https://raw.githubusercontent.com/luisolis20/images/main/bandicam%202021-07-22%2022-03-45-524.jpg)

![](https://raw.githubusercontent.com/luisolis20/images/main/bandicam%202021-07-22%2022-04-28-356.jpg)

![](https://raw.githubusercontent.com/luisolis20/images/main/bandicam%202021-07-22%2022-04-35-945.jpg)

![](https://raw.githubusercontent.com/luisolis20/images/main/bandicam%202021-07-22%2021-39-53-866.jpg)





## EJECUCION 

Cuando tengamos todo el programa acabado y sin errores le daremos clik a compilar para ejecutar el programa en donde una ves ejecutado se mostrara el menu que se ve a continuacion:

![](https://raw.githubusercontent.com/luisolis20/images/main/bandicam%202021-07-22%2022-14-11-223.jpg)

![](https://raw.githubusercontent.com/luisolis20/images/main/bandicam%202021-07-22%2022-15-44-664.jpg)




 **Si el usuario escoje la primera opcion se le pediran sus datos personales tales como: Cedula, Nombre, Apellido, Peso, estatura y la fecha de nacimiento.**
 
 ![](https://raw.githubusercontent.com/luisolis20/images/main/bandicam%202021-07-22%2022-19-49-382.jpg)

![](https://raw.githubusercontent.com/luisolis20/images/main/bandicam%202021-07-22%2022-20-16-983.jpg)

* El programa se encargara de mostrar los datos en forma de tabala y guardara estos datos para usarlos mas adelante.

![](https://raw.githubusercontent.com/luisolis20/images/main/bandicam%202021-07-22%2022-23-07-156.jpg)

* El Programa Mostrara Nuevamente El Menu Principal Y En Esta Ocacion El Usuario Debera Ingresar La Segunda Opcion, La Cual Se Encargara De Calcular La Edad Actual*

![](https://raw.githubusercontent.com/luisolis20/images/main/bandicam%202021-07-22%2022-25-21-080.jpg)

**El usuario debera ingresar la fecha actual y el programa se encargara de calcular con un proceso ya programado usando los datos del usuario de su fecha de nacimiento.**

![](https://raw.githubusercontent.com/luisolis20/images/main/bandicam%202021-07-22%2022-28-14-471.jpg)

4. Luego mostrara la edad exacta del usuario como meses y dias, para luego mandarlo al menu principal

![](https://raw.githubusercontent.com/luisolis20/images/main/bandicam%202021-07-22%2022-35-09-099.jpg)

La opcion 3 se encargara del ambito de la salud de la masa corporal en donde si el programa analiza que su IMC esta adecuado a su altura mostrara un mensaje felicitando al usuario por su buen estado de salud caso contrario no lo va a hacer.

![](https://raw.githubusercontent.com/luisolis20/images/main/bandicam%202021-07-22%2022-41-38-969.jpg)

![](https://raw.githubusercontent.com/luisolis20/images/main/bandicam%202021-07-22%2022-44-14-101.jpg)

UNA VES INGRESADO TODOS LOS DATOS SE USARA LA OPCION 4 PARA GUARDAR EL ARCHIVO COMPLETO DEL USUARIO  Y CON LA OPCION 5 RECUPERARA Y MOSTRARA EN PANTALLA TODOS LOS DATOS DEL USUARIO.

![](https://raw.githubusercontent.com/luisolis20/images/main/bandicam%202021-07-22%2022-46-09-960.jpg)



![](https://raw.githubusercontent.com/luisolis20/images/main/bandicam%202021-07-22%2022-47-00-580.jpg)

![](https://raw.githubusercontent.com/luisolis20/images/main/bandicam%202021-07-22%2022-47-32-557.jpg)




PARA CULMINAR SE DIGITARA LA OPCION 0 PARA SALIR Y DAR POR CULMINADO EL PROCESO

![](https://raw.githubusercontent.com/luisolis20/images/main/bandicam%202021-07-22%2022-52-27-359.jpg)


 SI USTED DESEA VERIFICAR QUE SE CREO EL DOCUMENTO DE TEXTO ESTE SE ENCONTRARA EN LA UBICACION DONDE USTED DESCARGO LOS 2 ARCHIVOS DEL PROGRAMA. 

![](https://raw.githubusercontent.com/luisolis20/images/main/bandicam%202021-07-22%2022-46-48-770.jpg)

