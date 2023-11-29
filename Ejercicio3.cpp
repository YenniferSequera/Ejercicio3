#include <iostream>
#include "string" //Necesario para el manejo de texto de impresion a pantalla

using namespace std;  //Necesario para el manejo de texto de impresion a pantalla

int main() {
    double a,b,c,d; //Declaración de variables
    double promedio;

    printf("Ingrese Nota 1:\n"); //Se pide el ingreso 1era Nota
    scanf("%lf", &a); //Se lee y guarda en variable a el numero ingresado
    
    printf("Ingrese Nota 2:\n"); //Se pide el ingreso 2da Nota
    scanf("%lf", &b); //Se lee y guarda en variable b el numero ingresado
    
    printf("Ingrese Nota 3:\n");//Se pide el ingreso de 3ra Nota
    scanf("%lf", &c); //Se lee y guarda en variable c el numero ingresado

    printf("Ingrese Nota 4:\n");//Se pide el ingreso de 3ra Nota
    scanf("%lf", &d); //Se lee y guarda en variable c el numero ingresado

    promedio= ((a+b+c+d)/4); //Se Realiza la suma de todas las notas y calcula el promedio final.

    if(promedio > 0 && promedio <= 60){ // Se procede a la comparacion del promedio con la tabla de literales para conocer cual corresponde
         cout << "Su promedio es de: " << promedio << "\n";         
         cout << "Y su literal es: E"; 
         return 0; //Se rompe el ciclo para que no ejecute mas lineas de codigo
    }
    
    if (promedio > 61 && promedio <= 70) {
        cout << "Su promedio es de: " << promedio << "\n"; // Se concatena variables con texto yse muestra en pantalla.        
        cout << "Y su literal es: D"; // Se concatena variables con texto yse muestra en pantalla.    
        return 0; 
    }

    if (promedio > 71 && promedio <= 80) {
        cout << "Su promedio es de: " << promedio << "\n";        
        cout << "Y su literal es: C ¡Puedes Mejorar!";     
        return 0; 
    }

    if (promedio > 81 && promedio <= 90) {
        cout << "Su promedio es de: " << promedio << "\n"; 
        cout << "Y su literal es: B ¡Buen Trabajo!"; 
        return 0; 
    } 

    if (promedio > 91 && promedio <= 100) {
        cout << "Su promedio es de: " << promedio << "\n";        
        cout << "Y su literal es: A ¡FELICIDADES!";
        return 0;
    } 

    // Si el promedio arrojado esta fuera de los rangos comparados se emite mensaje de error    
    cout << "Ha ingresado notas de forma errada, por favor vuelva a intentar. Solo son válidos números del 0 al 100";
    
}