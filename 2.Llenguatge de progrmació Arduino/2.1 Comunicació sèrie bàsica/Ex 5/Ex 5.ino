/****************************************************************
**                                                             **
**                                                             **
**                                                             **
**                                                             **
**                                                             **
****************************************************************/
//************************ INCLUDE ******************************

//*********************** VARIABLES *****************************
byte y1 = 0;
byte y2 = 100;
byte y3 = 200;

//************************* SETUP *******************************

void setup() {               // configura el final de salida
 
  Serial.begin(9600);

}

//*************************** LOOP ******************************

void loop() {               // inicia el bucle del programa

  Serial.print(y1);
  Serial.print("\t");
  Serial.print(y2);
  Serial.print("\t");
  Serial.println(y3);

  y1 = y1 + 5;
  y2 = y2 + 2;
  y3 = y3 + 1;

  delay(100);

}

//************************ FUNCIONS ***************************** 