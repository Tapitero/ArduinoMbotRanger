//¡SIEMPRE PONER EL ARCCHIVO DE CABEZERA!
#include"MeAuriga.h"

//Impresión (puerto serie)
Serial.begin(9600);
  // ¡VA EN EL SETUP()!
  // inicializa la comunicación con el puerto serie con 9600 bps
Serial.print("");
  //imprime en el puerto de serie (la lupita / arduino ide)
  // ¡Por separado variables y oraciones! ¡Una variable por vez!
Serial.println(value);
  //Lo mismo pero con santo de linea

//Buzer
#define BUZZER_PORT                          45
  //Define el puerto por donde hay que enviar la información al buser(45)
MyBuzzer buzzer;
  //Define una variable buzzer.
buzzer.setpin(45);
  //Define el pin del buzzer.
  //¡SIEMPRE EN EL SETUP!!
buzzer.tone(unsigned int frequency, unsigned long duration = 0);
  //Función que emite por el buzer un solido tiene tres variables.
    //-> frequency: La frecuencia del sonido que emite.
    //-> duration: La duration de la nota que emite. va de 1000 a 0.
  //¡PONER SIEMPRE UN DELEY PARA DISTINGUIR MEJOR LA NOTA QUE SUENA!

//Sensor de luz
MeLightSensor lightSensor(PORT_6);
  //Para iniciar el envió de información del sensor de luz
lightSensor.read();
  //Los datos que se recive del sensor de luz

