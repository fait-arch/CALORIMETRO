// CALORIMETRO

//LIBRERIAS
#include <DS18B20.h>
#include <OneWire.h>
#include <DallasTemperature.h>

//DEFINCINO DE PINES 
#define MESCLADOR 7

//DEFINICION DE PIN DE ENTRADA DE DATOS DE TEMPERATURA
#define ONE_WIRE_BUS 2  //pin 2 of arduino
OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);

void setup(void){

//MONITOR SERIAL 
  Serial.begin(9600);
  Serial.println();

//PINES DEL MESCLADOR
  pinMode(MESCLADOR, OUTPUT);

//DECLARACION DE SENSORES
  sensors.begin(); 
}


void loop(){
  sensors.requestTemperatures();
    delay(100);
  float tempc=sensors.getTempCByIndex(0);
  String sam= String(tempc);
  
  //Serial.println(sam);
  if(sam == "-127.00"){

  }else{
    
  Serial.print (sam);
  Serial.println();
  
  } 
  }
