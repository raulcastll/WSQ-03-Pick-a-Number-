#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
  int intentos = 0, ncorrecto, nmetido, intentof;
  srand (time(NULL));
  ncorrecto=1+ rand() % (100);
/*
cout<<ncorrecto<<endl;

Esta parte es para probar que si salga un numero al azar cada momento,
 es parte del task, pero ya no se acupa
*/
    cout<<"Hey! acabo de pensar en un numero del 1 al 100 y quiero que lo adivines, vamos a ver si eres capaz de hacerlo, HUMANO"<<endl;
    cout<<"Tendras que escribir un número entre 1 y 100 que tu crees que pensé"<<endl;
    cout<<"no pongas una letra por que voy a matar tu compu"<<endl;

/*para poder completar la tarea asignada tenemos que crear un loop, para poder
estar contando cada vez que el usuaro haga un intento, ademas de que si no lo
hacemos de esta manera debemos escribir cientos de lineas de codigo, pues tiene
 99 opciones para equivocarse */
 /*hay varias maneras de hacer que se genere un loop, podemos hacer un
 "do (aqui va que quieres que pase) while(condicion para que esto pase)"",
  o podemos usar un "while(condicion)(Cosa que se debe loopear) se me hace
   mas facil la segunda opcion, aunque creo que hay mas maneras*/

   nmetido = 0;  // estamos seguro no es igual que ncorrecto|

   while (nmetido!=ncorrecto){
        cin>> nmetido;
        cin.ignore(); /*Esto es para que no se buge, cuando se*/
        intentos=intentos+1;
        cout<<"intentos ahora: "<< intentos<<endl;

        if (nmetido<ncorrecto) {
           cout<<"Demasiado bajo, intenta otra vez"<<endl;
        } else {
          if (nmetido>ncorrecto) {
            cout<<"Demasiado alto, intenta otra vez"<<endl;

          } else {
            cout<<"adivinaste"<<endl;
          }
      }
    }


  if (intentos==1) {
   cout<<"solo te tomó 1 intento, felicidades"<<endl;
  }

  if (intentos<7 && intentos > 1) {
    cout<<"Bien te tomó "<<intentos<<" intentos adivinar"<<endl;
  } if (intentos >= 7){
      cout<<"estas medio tonto, te tomó "<<intentos<<" intentos"<<endl;
    }

  return 0;
}
