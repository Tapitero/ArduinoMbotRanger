//¡SIEMPRE PONER EL ARCCHIVO DE CABEZERA!
#include"MeAuriga.h"

//Impresión (puerto serie)
Serial.begin(9600);
  // inicializa la comunicación con el puerto serie con 9600 bps
Serial.print("");
  //imprime en el puerto de serie (la lupita / arduino ide)
  // ¡Por separado variables y oraciones! ¡Una variable por vez!
Serial.println(value);
  //Lo mismo pero con santo de linea

//Buzer
#define BUZZER_PORT                          45
  //Define el puerto por donde hay que enviar la información al buser
tone(45, 370,(int) 1000/64);
  
//Sensor de luz
MeLightSensor lightSensor(PORT_6);
  //Para iniciar el envió de información del sensor de luz
lightSensor.read();
  //Los datos que se recive del sensor de luz

