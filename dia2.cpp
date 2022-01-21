# include <iostream>
using namespace std;


int valor_Absoluto (int numero){
  if (numero<0){
    numero=numero*-1;
  }
  return numero;
}

bool mucha_Diferencia (int diferencia, int num1, int num2){
  cout << valor_Absoluto (num1-num2) << endl;
  return ((valor_Absoluto(num1-num2) > diferencia));
}

int main() {

  string palabra, palabra1, palabra2;
  string saludo = "Hola";
  string repetir;
  string contrasegna = "aaaa";
  bool correcto = false;
  bool diferencia;
  int edad = 26;
  string viejo = "Eres un viejales";
  string bebe = "Puto nignato...";


  cout << saludo << endl; /* Esto es lo correcto para el salto de línea.*/
  cout << "Imprimir por pantalla\n"; //Esto es eredado de C pero... en fin.
  cout << "Comprobacion de salto de linea" << endl;

  while (!correcto) { // La exclamación indica negación
    cout << "Escribe contrasegna: ";
    cin >> repetir;
    if (repetir == contrasegna){
      correcto = true;
    }
  }

/*  repetir = "";       // Esto es otro método, pero... mejor no.
  while (repetir != contrasegna) { // La exclamación indica negación
    cout << "Escribe contrasegna: ";
    cin >> repetir;
  }
*/

int tu_Edad;
cout << "Que edad tienes? ";
cin >> tu_Edad;
if (tu_Edad < edad){
  cout << bebe << endl;
} else {
  cout << viejo << endl;
}

diferencia = mucha_Diferencia (5, tu_Edad, edad);
if (diferencia){
  cout << "Esto no va a ningun lado..." << endl;
} else {
  cout << "Hhhmmm..." << endl;
}

palabra1 = "perro";
cout << palabra1 << endl;
palabra2 = "verde";
cout << palabra2 << endl;
cout << palabra1 + " " + palabra2 << endl;
cout << palabra1 << " " << palabra2 << endl;
/*palabra = palabra1.append(palabra2);   // OJO !!! así, palabra1 ahora es perroverde
cout << palabra << endl; */
palabra = "";
palabra = palabra1 + " " + palabra2;
cout << palabra << endl;

int x_int, y_int;
string x_str, y_str;
x_int = 10;
y_int = 20;
x_str = "10";
y_str = "20";
cout << "Esto es int " << x_int << endl;
cout << "Esto es string " << x_str << endl;
cout << "int: x + y = " << x_int + y_int << endl;
cout << "str: x + y = " << x_str + y_str << endl;
// cout << "str + int: x + y = " << x_str + y_int << endl; ESTA MIERDA NO FUNCIONA
cout << "str + int: x + y = " << x_str + to_string (y_int) << endl; // Así, si.
cout << "str + int: x + y = " << stoi (x_str) + y_int << endl; // Así, tb.

cout << palabra << endl;
cout << "palabra tiene " << palabra.length() << " caracteres" << endl;
cout << "palabra tiene " << palabra.size() << " caracteres" << endl;
cout << "La primera letra de palabra es " << palabra[0] << endl;


/*
  while (true) {
  cout << "Escribe algo: ";
  cin >> repetir;
  cout << repetir << endl;
}  // Cuando en la consola ejecutamos un bucle sin salida, usamos ctrl+C para salir.
*/

  return 0;
}
