#####  2021-07-21 16:37:52 Wednesday
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

##Descripcíón Del Proyecto 
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

 
:fa-folder-o:**La sexta funcíón (void guardar): **En ella se va guardar los datos ingresados en la primera funcion (void ingresar), y además se crea un archivo txt que se va a guardar donde el usuario tenga descargado el proyecto.
![](https://raw.githubusercontent.com/luisolis20/prueba/main/bandicam%202021-07-21%2022-05-07-083.jpg)
> Alli se usa el cod ofstream para crear un archivo, se agrega una variable, esa variable sirve para crear el archivo txt; se coloca el "open" para decirle al programa que nos abra y nos cree un archivo con el siguiente nombre (registro.txt), luego nos evalua una condición, si el archivo falla o no se crea nos muestre un mensaje que diga error, caso contrario nos guarde los datos ingresados en la primera función


**La septima función (void rym):**En ella se va a recuperar y mostrar los datos guardados en la sexta función (void guardar).
![](https://raw.githubusercontent.com/luisolis20/prueba/main/bandicam%202021-07-21%2022-13-53-744.jpg)
> Allí se usa el cod ifstream que lo que hace es buscarnos el archivo que creamos en la sexta función y al ldao creamos la misma variable que en la sexta función, ademas se crea otra variable de tipo string, esa variable nos va a servir para que el programa nos muestre tod el texto que hay en el archivo de texto que hay en él.


# # # INSTALACION

- Para comenzar necesecitamos abrir nuestro repositorio de "github", ubicado en la carpeta llamada "inicio.cpp"  y copiamos todo el codigo antes editado.
![](https://lh3.googleusercontent.com/nKWdLW90M13FxIqOT-3CzG-L0hJPYHXm8COFGRaeibZr2mZ1Ihyrg_wMsRYBKvoL9YVD1l3uSnJDax-yYwl4Vlp3h3wendcH9gsUbiGkgPvChNq6k2zDc7LvyzdfsjkFxGPykQV0DCf_OEwWspxt8G11GvWA1rL9SC0XtU-Au9nQm5zG7tSLYeJR9iAk0XXtrsOnoR3lBuo1AwqmyRvS8PsHxPbDGWctU0H3DwRkvyBKu_x_LpNfLF2S1weijSmiFjlzuSLLa9mr708dUL4cO0TT6jkpEzuTZRk1qQy2M0VjaGKgOZp70O_5Jcowtjhk5Rg5FhsvpOa-0S_2O6v2dNK9pW_WWkUU6rvnW2lT_lLIaNrqchkDUlN-L697SMImhWQTq5Dx5U15KUbmLlArxgg6iylgYYOGLgkCEqeWdYI0ALXOXd_hShqRWnSykTKnqYVDW6PyyyzDmoYjDFB60SnunJrNs1ZnfSk0bHpc5Xb76ITGHrtZzDUT69JVwNCdaUoG2vG89nQRSQlBblYSXR_jeyEdBu-4KkQS70SGW_bb73G3brwQ0qrBzfLThirNcxlVDhTBtrKqAFOfSUR1Ifo2HG6IJnZZaRhA9Yc4r_Y0TWFELyOn2LuKq646wQ1CNxrMEfg4egCuLc4GJPsnAx46Qtvzs4FVmYyrgbUfcusQZc1s-9yx7Ro5QxJyMlwfcw5880ybdVwi_sEoK7KRjVEF=w1174-h179-no?authuser=1)

![](https://lh3.googleusercontent.com/3qXqe-5uzB1B-O1djRB3qDbdrB1NxvyI65xsCuxG4cmZnaHyB1Tro4s4YTNbuNdxw2ehXuFlx318ECUSsfdGji3lqQLZPWgMar-86cgsohSwxm-LzSownqJ7VJsxSmCjALfDTUYfHQeKkzk2hzf1JY0Mvh0H2SWmBZ8ygQelC2SL3QbM9imoDQ7lv_vc-vZgJne4PhQtmj5RQ4YIOED7dsmXXj52jNZuqOUQdnNcuqFQolEd8o_4xBaLFaXLjqVSNRTci6cT5fUGT_Sbi6tJNgV5o49JG8Q9i5rb70NJthvPYqaD1jpdtvSXRPqzmMSGHnstwXVyutW9hnRv1q3ZeokUoG1ZzSgRU0-TDGDQdGQ3HMm6Z-73DaoFcUBvT9F2VWh4-s1RQ_OJ2quP4ouuTSktzJiKtvaInQTRV6C-5PKRntqNlK1DgVlCxOFIKUYifV0LokHa8qYz9mq3Tf3NA4yhBk3G5Wb-IlIGKUn2884cuRHHYZThReUoqYF3aZgf2loFr0X3NguxzMaugLvSMPmbxBjI2r7gnZNinuHJ0vwcvlseSFbTvL44mZWfeQ7fibr9VHUJNlZ71TCyEeELUKskZw-8ACAKWLS1EPVacyMoiGG2lMJ1TF5s_aNzfZwimZ-hz0ii2O-2N5KseDzqYK2RF6zkWznY3LGlVc-d5HivDut-XFb7iPB1VY8drYmh_OICXo37awgPG0_s8jtDT-K7=w763-h898-no?authuser=1)

- Una vez que hayamos copiado nuestro codigo tenemos que dirigirnos a nuestro programa "dev-c++" y generamos un nuevo archivo usando la convinacion de "ctrl+n" y con eso pegaremos nuestro codigo de "github".
![](https://lh3.googleusercontent.com/6N-T8U0YO982d4Nsp-QLbsbihL73prlspL1BvB8NqBpsIquwimNfqf2rHWaUqZhmxqBBmExmaQGC7CJlBZOY-y2zP_dRMgJ8tbvGAfCj6nzDwSBwV_F4k4IexqOBzGLX0DwehEuXQ7TYJNDvorleSDbTVtPzRqGcLx1Uz5g52634-jpOxsk--aLHOrBZAH2_J45rLIEuykJaIE0nX9oyDcJQhtw4rm3CRr24AMMA4EdWEgI5pJ-o1TK-dxP0NQdCON4tkm_u1XHosg3YVyGtmQPQ87vz9o-UcRRit7vwQh0THAbEFXrqZdlq5aEvt6ORNeyjLPtIkJvxHVPeoatWIUsWhfIYS1HxY_dGUxzQGPzR4WGQglEp1dCm6G2WkWfkfjwRAePDq6aiOLrVPLb-M7F58w1_BVqbHfbzNVb259vX3rUwS-Sr7dJq6wocrx3PdnzaGZFCy_Ca84SaKFbrVdSjkj_rrjIpUaJuJZqag5D4h_qg0UxOrIx2SoKewXJNnA4kGawAPVgtHxwhOfQHuRZo9Ej47L2pqE-p_e3C7a1Z40LPA9rBXVT6-Ew9b0wYtZWKG8NkSP_VoQEk1QnoVlcJ0Y5OsNjb1fuTU6Ng_aKVe15qCr6aabIb8iiPEvMDMMo3Qg6EjWQ43ao4G0JWBmaSyUtvf2Pk-p4P4am9sYtJEk3Pp7vAruneSiyRsXBo_-g9X1fE_jnVWTjWNc6pXJTv=w1363-h913-no?authuser=1)

- Necesitamos guardar nuestro proceso e irnos al icono de gruardar y se nos abrira una nueva ventana donde colocaremos el nombre del archivo como "inicio.cpp" y damos clic en guardar.
![](https://lh3.googleusercontent.com/Hv_oqmHw4QXjZtWISzFkZTpj9Bq3bZnMBDvsEzF1hYcaxgm7h0E5mtb8Oa3W__xpn7S3d8Ok6LC9yC-f9FOLYceB6FzASAzBqZvLV1BvBkDzbQBvaw_8jfZrl7ipNitZHoHVl6OSgJVBTbQYfcWUWv7JMV5WEiKvOVi-8e9cqLFP3cKwOTdqYzS2jQNsm-8l3zFNnEnJXNvCMlxx_DTqMLp642Zo4HCzKkv6PNxWbMhHX94DvAxJupzCq5FJi0XuWlu5U_L7m6Q-D_J-yEthNpRsb7J2tvYgLHVgxe2tIRFDtoEUeHWzFX9RciXv7r44YawKfuEukmbYEjGlyb81oo7CDasS9GfhjqINtKoCm2x7iVjBeqVmjy_6Lqo2mxiyBrjozb8TtSU7ZGVRHeuKWASXGcXF9ojRmI9ASoRLXME8lEX1wm9RonbpudYFsV6MKQYxH3drZnEh7ePbc1P6dwcgVJrd_saF47QLslw5bwYwv5HkFJG7q7E1CMqOpdTAjkphcKEvlpsch6RLi82Rzpr3s19kvxqvyRBje2fnN8_31HGN66Dn-dyxol9qpPS1PNefVVOMVvSFnCrI_Yhb26eNtGEn9zrW5jrf9ROa6X478dv9TEP5EIQr7yJ5-QH2rKkUQTibeP1bHAEFwrubJV0ZpyHpuff0vFeDDjJJumFcM2pNKbomSK5Uj4_s_jX5G5tcwhXE_-NnYOTYxHo7MUVh=w693-h481-no?authuser=1)

- Regresamos nuevamente a nuestros archivos en "github" y seleccionamos la carpeta de "colaboradores.h" y copiamos todo el codigo que se encuentra almacenado. 
![](https://lh3.googleusercontent.com/IeOv2bnuaYlxzcFSKKvBrW3RODw_7iJ8F3LmYyAeoQdtzwoQGk4Kdku7Mev90ZYGZyoRIUFznmdZ-X-yOyKRfHx9r5P3GGf9W0SG_QvdtRttIsp_4wr31q1BB-Dweod22VXb5KrHk3ueQBFrkVfv2u033FXHmGHAC-r2UWibH8_CsWfYj7Mcnwc9eRFC9zbd0Ruv2b7rljWQXxXP3tPJN-6-n62dPB3AMPYk_V4uYe3dewPIgaIeqULTrphE8lcQh_oU5jtLod9yCN88uhb01zK9k1vEw4XtQdEG5gmWXWvfnpuWKVou3gxPwxuUUPAZoTPL0u_U83_n99J7FpJ_5wHStlqnMfNt-41vqdhVNU7uwNkPaKxatpETxI74r_xsCxvprdBDcptKn3niTehUcLOGaUatWNJrcpQWB4cHq2-xr_eM55mh4xoT1jHt5wpdcRp9abRBwM_9QqBnVXWOVvyPZdNYjb1EH5zMdqpBfZalVC9oXYs4xNvO6tyu8pnq06X_ojFofGqhSmbpdvdxr6FTN-g0L1nFk_xYx_eQ38nysKVHczQQHNRZGtQMxkTmjy1_WoZlS7L8Q1iWTQ300k1j7pcm5YcKxyeLSguntKpgnsko2PJXxKVsx0VxaVlWxvcsDcU6je4Px5mJx64yMAgniC5s4THH0WKMVQxPgelv1PCkCsGSekaXUGSCBx3xgkyB-G9x7qSjTlv48V6G_mmj=w1920-h889-no?authuser=1)
- Abrimos otra vez nuestro programa "dev-c++" y utilizamos el comando "ctrl+n" y se nos abrira una nueva pestaña, una vez ahi pegamos el codigo que copiamos anteriormente y salvamos nuevamente nuestro programa, seleccionando el icono de "guardar" donde se nos abrira la pestaña para poner el nimbre de nuestro archivo y lo titularemos como: "colaboradores.h".
![](https://lh3.googleusercontent.com/bucpT2GQdYXAcTm4rMNg_dd0l6vvMUnslAqreL6Cerm3krjcyBmMr0LNWFh-kG3K6XOkx49c_16zcsFtIQwhjxXzol-IVtZJmG8M_UiD6SLvC7VQ5ybfaj8Qvf82lgHWJwEu_H5h6yQdub_ZoDaHayW4A8yixyc18OjYYSP0RAzdOs2izJP2RP_URD7AdhpB-eYlpRAhSE0Mx-zixK2-ImwGGLk5VCSUXPIbNN6U_7bzBLm7BsTMJ49Gs8EE2chN_EVIG_PE7mx7KmvxdBdh6B5OOb4iiMU-6FX58s998kxJuA5DyfHqvt1AJsIFXJjUXM2BOxGet2nNcxh9BLA22wPjyrPZiYby28uYWQjjCznJR3i8QESMGh-OIoluQlbf_InO-z37l1Zm0fTAqqoPHkQW0dywSuVKbcsMr-RS_5q8HIHqTWSt6m0JZdUnjWeJPquGa2h8CpcK8zw2epRhoTszLdVeXu6-NwNgPuwZQhoUmsh54UACuvgVry-lNHqB9ojzt0NeBd4bMsyHLFgw5-Dv1nHqEoTps-EZ1iqF1ilTm45MdilKWvkVxQnQoQu_p0OCgZVfnphOtLQTAqJuzdrtmkAZdgZEHzm0AXgvEcIGOcR27qKk0nhfkoWsXUYPdtZxEiVQEnosBM62I9RV_xA9H-buLnwOc40i-NtLDYe_LOPaw9LvxTDXeaK2LZNR7P_MZ0Nr8yGvhH2-r1mod1Pu=w1363-h913-no?authuser=1)
![](https://lh3.googleusercontent.com/UGMKvWaCVAjoAhJwnre_Qj9Kj-nqEp_uNhuZAvhfE3VSTspLynJKVJaxG8aritEWSnjB3uHXuhq3qZUz4-aTHAR3OhMHNbqI5a-CjuBTy-aX5eMbjCoA-TIPAT_WMxydSznkNJNP_jt2XIqtCXX-33_NorQXXbAalZLBKBIh0M5rV7M0YAnaAjzzPBQ8v7-pt8HLbWjwTi9YGc1ct-Locs_pR8CBMgOan4-FnTeQIuUYXOU7tb8sYaTlA8nfcxqVtyL7iZc1P1DUCKAUMdEpNolki62fEPpDI5PJnRQugoD5NkCbfkiMMSUma4IeCmGUwpB9SqyrXFcYk-NXRjqwAyF_yfMlmtsGPjfasNUmMEwFLXzjAW1AiDfqWSVb6VMBo-5qLpL03xNzov6Y4SslhtjBEaIg7J5AP3IZixVe9rkrnk18SUcF_F4Y055dggAvA3_EOjF7djwUAfSNqBSe7vHoMTSce9SZf8l5EPHg4KNo-i2Gr435ZHMYYzoWYNbmo_aufMGNfY9uEAhYqNc8Ix_pWV0kkD8vpzhLnWALbM_KG-6YOrXukHwgCr8R-DWiOHt1fZ9Rx0Rd2qnQaGx2SKba6oJ-T-5xe6BkqJuzQLIbAic1YvmofcMU4tzeT1g1oWJJURhdJQCBRXHJS1GbLd1HrtuRsgHj1qUFaR878kqFNKMuKVTe9RJoXA6cAknbhOgc9SCkXYrb2zrdjp80BHCm=w693-h481-no?authuser=1)



## EJECUCION 
:tw-2796: :tw-2796: :tw-2796: :tw-2796: :tw-2796: :tw-2796: :tw-2796: :tw-2796: :tw-2796: :tw-2796: :tw-2796: :tw-2796: :tw-2796: :tw-2796: :tw-2796::tw-2796: :tw-2796::tw-2796::tw-2796::tw-2796::tw-2796::tw-2796::tw-2796:
:fa-check:  Cuando tengamos todo el programa acabado y sin errores le daremos clik a compilar para ejecutar el programa en donde una ves ejecutado se mostrara el menu que se ve a continuacion:




:fa-power-off: **Si el usuario escoje la primera opcion se le pediran sus datos personales tales como: Cedula, Nombre, Apellido, Peso, estatura y la fecha de nacimiento.**

* El programa se encargara de mostrar los datos en forma de tabala y guardara estos datos para usarlos mas adelante.

* El Programa Mostrara Nuevamente El Menu Principal Y En Esta Ocacion El Usuario Debera Ingresar La Segunda Opcion, La Cual Se Encargara De Calcular La Edad Actual*


:fa-table: **El usuario debera ingresar la fecha actual y el programa se encargara de calcular con un proceso ya programado usando los datos del usuario de su fecha de nacimiento.**

4. Luego mostrara la edad exacta del usuario como meses y dias, para luego mandarlo al menu principal

:fa-medkit:  la opcion 3 se encargara del ambito de la salud de la masa corporal en donde si el programa analiza que su IMC esta adecuado a su altura mostrara un mensaje felicitando al usuario por su buen estado de salud caso contrario no lo va a hacer.



UNA VES INGRESADO TODOS LOS DATOS SE USARA LA OPCION 4 PARA GUARDAR EL ARCHIVO COMPLETO DEL USUARIO  Y CON LA OPCION 5 RECUPERARA Y MOSTRARA EN PANTALLA TODOS LOS DATOS DEL USUARIO.


PARA CULMINAR SE DIGITARA LA OPCION 0 PARA SALIR Y DAR POR CULMINADO EL PROCESO


 SI USTED DESEA VERIFICAR QUE SE CREO EL DOCUMENTO DE TEXTO ESTE SE ENCONTRARA EN LA UBICACION DONDE USTED DESCARGO LOS 2 ARCHIVOS DEL PROGRAMA. :tw-1f51a:



