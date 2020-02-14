const unsigned char font[] = {
  0x00, // 01000000   0x20 32
  0x63, // 01100011 ! //°// 0x21 33
  0x40, // 01000000 " 0x22 34
  0x40, // 01000000 # 0x23 35
  0x40, // 01000000 $ 0x24 36
  0x40, // 01000000 % 0x25 37
  0x40, // 01000000 & 0x26 38
  0x40, // 01000000 ' 0x27 39
  0x6b, // 01000000 0110 1011( 0x28 40
  0x5d, // 01000000 0101 1101) 0x29 41
  0x40, // 01000000 * 0x2a 42
  0x40, // 01000000 + 0x2b 43
  0x40, // 01000000 , 0x2c 44
  0x40, // 01000000 - 0x2d 45
  0x40, // 01000000 . 0x2e 46
  0x40, // 01000000 / 0x2f 47
  0x7e, // 0111 1110 0 0x30 48
  0x30, // 0011 0000 1 0x31 49
  0x6d, // 0110 1101 0101 1011 2 0x32 50
  0x79, // 0100 1111 0111 1001 3 0x33 51
  0x33, // 0110 0110 0011 0011 4 0x34 52
  0x5b, // 0110 1101 0101 1011 5 0x35 53
  0x1f, // 0111 1100 0001 1111 6 0x36 54
  0x70, // 0000 0111 0111 0000 7 0x37 55
  0x7f, // 0111 1111 0111 1111 8 0x38 56
  0x73, // 0110 0111 0111 0011 9 0x39 57
  0x02, // 00000010 : 0x3a 58
  0x02, // 00000010 ; 0x3b 59
  0x02, // 00000010 < 0x3c 60
  0x02, // 00000010 = 0x3d 61
  0x02, // 00000010 > 0x3e 62
  0x02, // 00000010 ? 0x3f 63
  0x02, // 00000010 @ 0x40 64
  0x77, // 01110111 A 0x41 65
  0x02, // 00000010 B 0x42 66
  0x4e, // 00111001 0100 1110 C 0x43 67
  0x02, // 00000011 D 0x44 68
  0x02, // 00000010 E 0x45 69
  0x02, // 00000010 F 0x46 70
  0x02, // 00000010 G 0x47 71
  0x02, // 00000010 H 0x48 72
  0x02, // 00000010 I 0x49 73
  0x02, // 00000010 J 0x4a 74
  0x02, // 00000010 K 0x4b 75
  0x02, // 00000010 L 0x4c 76
  0x02, // 00000010 M 0x4d 77
  0x02, // 00000010 N 0x4e 78
  0x7e, // 00111111 0111 1110 O 0x4f 79
  0x02, // 00000010 P 0x50 80
  0x02, // 00000010 Q 0x51 81
  0x02, // 00000010 R 0x52 82
  0x5b, // 01101101 S 0x53 83
  0x70, // 00000111 0111 0000 T 0x54 84
  0x02, // 00000010 U 0x55 85
  0x02, // 00000010 V 0x56 86
  0x02, // 00000010 W 0x57 87
  0x02, // 00000010 X 0x58 88
  0x02, // 00000010 Y 0x59 89
  0x02, // 00000010 Z 0x5a 90
  0x02, // 00000010 [ 0x5b 91
  0x02, // 00000010 \ 0x5c 92
  0x02, // 00000010 ] 0x5d 93
  0x02, // 00000010 ^ 0x5e 94
  0x02, // 00000010 _ 0x5f 95
  0x02, // 00000010 ` 0x60 96
  0x02, // 00000010 a 0x61 97
  0x02, // 00000010 b 0x62 98
  0x02, // 00000010 c 0x63 99
  0x02, // 00000010 d 0x64 100
  0x02, // 00000010 e 0x65 101
  0x02, // 00000010 f 0x66 102
  0x02, // 00000010 g 0x67 103
  0x02, // 00000010 h 0x68 104
  0x02, // 00000010 i 0x69 105
  0x02, // 00000010 j 0x6a 106
  0x02, // 00000010 k 0x6b 107
  0x02, // 00000010 l 0x6c 108
  0x02, // 00000010 m 0x6d 109
  0x02, // 00000010 n 0x6e 110
  0x02, // 00000010 o 0x6f 111
  0x02, // 00000010 p 0x70 112
  0x02, // 00000010 q 0x71 113
  0x02, // 00000010 r 0x72 114
  0x02, // 00000010 s 0x73 115
  0x02, // 00000010 t 0x74 116
  0x02, // 00000010 u 0x75 117
  0x02, // 00000010 v 0x76 118
  0x02, // 00000010 w 0x77 119
  0x02, // 00000010 x 0x78 120
  0x02, // 00000010 y 0x79 121
  0x02, // 00000010 z 0x7a 122
  0x02, // 00000010 { 0x7b 123
  0x02, // 00000010 | 0x7c 124
  0x02, // 00000010 } 0x7d 125
  0x02 // 00000010 ~ 0x7e 126
};
const byte sensor    = A6;    //entrada del sensor

const byte clockPin = 12;    //Pin connected to SH_CP of 74HC595
const byte dataPin  = 11;    //Pin connected to DS of 74HC595
const byte latchPin = 10;    //Pin connected to ST_CP of 74HC595

const byte punto_1   = 9;     //Punto decimal
const byte puntos    = 8;
const byte sensor_on = 7;     //encender el sensor para ahorro de energia

int valorsensor = 0;         //variable para almacenar el valor del sensor

const byte tiempom = 8;
const int tespera = 500;
const int ts      = 100;//tiempo de sensor
const int vecestemp = 200;
const int vecestiempo = 400;
const int tt = 5;
const int digitos[] = {14, 15, 16, 17, 18, 19};         //salidas de los 6 digitos
//--------------------------------------------------------
#include <MyRealTimeClock.h>

MyRealTimeClock myRTC(4, 5, 6); //sclk, data, rst asign Digital Pins

const byte interruptor = 3;

String tiempo;
String horas;
String minutos;
String segundos;

int contador, diferencia, ultimo = 0;//para el efecto toggle de los leds rojos del reloj cada segundo
boolean state = false;

//--------------------------------------------------------
const char texto_1[7] = "      ";
const char texto_2[7] = "     T";
const char texto_3[7] = "    TA";
const char texto_4[7] = "   TAC";
const char texto_5[7] = "  TACO";
const char texto_6[7] = " TACOS";
const char texto_7[7] = "TACOS ";
const char texto_8[7] = "()()()";
const char texto_9[7] = ")()()(";

char Buffer[7];                                         //buffer para almacenar un texto

void setup() {
  for (int i = 0; i < sizeof(digitos) - 1; i++) {
    pinMode(digitos[i], OUTPUT);
  }

  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);

  pinMode(punto_1, OUTPUT);
  pinMode(sensor_on, OUTPUT);
  pinMode(puntos, OUTPUT);

  pinMode(interruptor, INPUT);

  Serial.begin(9600);
}

void loop() {
  int estado = digitalRead(interruptor);
  if (estado == HIGH) {
    delay(100);
    mostrarTiempo();
    limpiar_segmentos();
    limpiar_digitos();
    delay(tespera);

    mostrarTexto();
    limpiar_segmentos();
    limpiar_digitos();
    delay(tespera);
  }
  else {
    mostrarTiempo();
    limpiar_segmentos();
    limpiar_digitos();
    delay(tespera);

    mostrarTexto();
    limpiar_segmentos();
    limpiar_digitos();
    delay(tespera);

    mostrarTemperatura();
    limpiar_segmentos();
    limpiar_digitos();
    delay(tespera);
  }
}
void mostrarTemperatura() {
  digitalWrite(sensor_on, HIGH);
  delay(ts);

  valorsensor = analogRead(sensor) * 48.8758F;

  Buffer[0] = 48 + ((valorsensor / 1000) % 10);
  Buffer[1] = 48 + ((valorsensor / 100) % 10);
  Buffer[2] = 48 + ((valorsensor / 10) % 10);
  Buffer[3] = 48 + (valorsensor % 10);
  Buffer[4] = '!';
  Buffer[5] = 'C';

  digitalWrite(punto_1, HIGH);

  for (int s = 0; s < vecestemp; s++) {
    for (int k = 0; k < sizeof(Buffer) - 1; k++) {
      printLetter(Buffer[k]);

      digitalWrite(digitos[k], HIGH);
      delay(tiempom);
      digitalWrite(digitos[k], LOW);
    }
  }

  digitalWrite(sensor_on, LOW);

  digitalWrite(punto_1, LOW);
}
void limpiar_segmentos() {
  for (int k = 0; k < sizeof(texto_1) - 1; k++) {                  //descomponer el texto en caracteres
    printLetter(texto_1[k]);                                  //imprimimos caracter por caracter

    digitalWrite(digitos[k], HIGH);                                 //activamos el digito correspondiente
    delay(tiempom);                                                           //tiempo de encendido por cada digito
    digitalWrite(digitos[k], LOW);                                  //desactivamos el digito
  }
}
void mostrarTexto() {
  for (int s = 0; s < tt; s++) {
    for (int k = 0; k < sizeof(texto_1) - 1; k++) {                  //descomponer el texto en caracteres
      printLetter(texto_1[k]);                                  //imprimimos caracter por caracter

      digitalWrite(digitos[k], HIGH);                                 //activamos el digito correspondiente
      delay(tiempom);                                                           //tiempo de encendido por cada digito
      digitalWrite(digitos[k], LOW);                                  //desactivamos el digito
    }
  }
  //----------------------------------------------------------------
  for (int s = 0; s < tt; s++) {
    for (int k = 0; k < sizeof(texto_2) - 1; k++) {                  //descomponer el texto en caracteres
      printLetter(texto_2[k]);                                  //imprimimos caracter por caracter

      digitalWrite(digitos[k], HIGH);                                 //activamos el digito correspondiente
      delay(tiempom);                                                           //tiempo de encendido por cada digito
      digitalWrite(digitos[k], LOW);                                  //desactivamos el digito
    }
  }
  //---------------------------------------------------------------
  for (int s = 0; s < tt; s++) {
    for (int k = 0; k < sizeof(texto_3) - 1; k++) {                  //descomponer el texto en caracteres
      printLetter(texto_3[k]);                                  //imprimimos caracter por caracter

      digitalWrite(digitos[k], HIGH);                                 //activamos el digito correspondiente
      delay(tiempom);                                                           //tiempo de encendido por cada digito
      digitalWrite(digitos[k], LOW);                                  //desactivamos el digito
    }
  }
  //---------------------------------------------------------------
  for (int s = 0; s < tt; s++) {
    for (int k = 0; k < sizeof(texto_4) - 1; k++) {                  //descomponer el texto en caracteres
      printLetter(texto_4[k]);                                  //imprimimos caracter por caracter

      digitalWrite(digitos[k], HIGH);                                 //activamos el digito correspondiente
      delay(tiempom);                                                           //tiempo de encendido por cada digito
      digitalWrite(digitos[k], LOW);                                  //desactivamos el digito
    }
  }
  //---------------------------------------------------------------
  for (int s = 0; s < tt; s++) {
    for (int k = 0; k < sizeof(texto_5) - 1; k++) {                  //descomponer el texto en caracteres
      printLetter(texto_5[k]);                                  //imprimimos caracter por caracter

      digitalWrite(digitos[k], HIGH);                                 //activamos el digito correspondiente
      delay(tiempom);                                                           //tiempo de encendido por cada digito
      digitalWrite(digitos[k], LOW);                                  //desactivamos el digito
    }
  }
  //--------------------------------------------------------------
  for (int s = 0; s < tt; s++) {
    for (int k = 0; k < sizeof(texto_6) - 1; k++) {                  //descomponer el texto en caracteres
      printLetter(texto_6[k]);                                  //imprimimos caracter por caracter

      digitalWrite(digitos[k], HIGH);                                 //activamos el digito correspondiente
      delay(tiempom);                                                           //tiempo de encendido por cada digito
      digitalWrite(digitos[k], LOW);                                  //desactivamos el digito
    }
  }
  //--------------------------------------------------------------
  for (int u = 0; u < 5; u++) { // 'TACOS '
    for (int s = 0; s < tt; s++) { // 'TACOS '
      for (int k = 0; k < sizeof(texto_7) - 1; k++) {                  //descomponer el texto en caracteres
        printLetter(texto_7[k]);                                  //imprimimos caracter por caracter

        digitalWrite(digitos[k], HIGH);                                 //activamos el digito correspondiente
        delay(tiempom);                                                           //tiempo de encendido por cada digito
        digitalWrite(digitos[k], LOW);                                  //desactivamos el digito
      }
    }
    for (int s = 0; s < tt; s++) {
      for (int k = 0; k < sizeof(texto_1) - 1; k++) {                  //descomponer el texto en caracteres
        printLetter(texto_1[k]);                                  //imprimimos caracter por caracter

        digitalWrite(digitos[k], HIGH);                                 //activamos el digito correspondiente
        delay(tiempom);                                                           //tiempo de encendido por cada digito
        digitalWrite(digitos[k], LOW);                                  //desactivamos el digito
      }
    }
  }

  for (int s = 0; s < 100; s++) {   //'tacos '
    for (int k = 0; k < sizeof(texto_7) - 1; k++) {                  //descomponer el texto en caracteres
      printLetter(texto_7[k]);                                  //imprimimos caracter por caracter

      digitalWrite(digitos[k], HIGH);                                 //activamos el digito correspondiente
      delay(tiempom);                                                           //tiempo de encendido por cada digito
      digitalWrite(digitos[k], LOW);                                  //desactivamos el digito
    }
  }
  //------------------------------------------------
  //--------------------------------------------------------------
  for (int r = 0; r < 5; r++) {
    for (int s = 0; s < tt; s++) {
      for (int k = 0; k < sizeof(texto_8) - 1; k++) {                  //descomponer el texto en caracteres
        printLetter(texto_8[k]);                                  //imprimimos caracter por caracter

        digitalWrite(digitos[k], HIGH);                                 //activamos el digito correspondiente
        delay(tiempom);                                                           //tiempo de encendido por cada digito
        digitalWrite(digitos[k], LOW);                                  //desactivamos el digito
      }
    }
    //-------------------------------------------------------------
    for (int s = 0; s < tt; s++) {
      for (int k = 0; k < sizeof(texto_9) - 1; k++) {                  //descomponer el texto en caracteres
        printLetter(texto_9[k]);                                  //imprimimos caracter por caracter

        digitalWrite(digitos[k], HIGH);                                 //activamos el digito correspondiente
        delay(tiempom);                                                           //tiempo de encendido por cada digito
        digitalWrite(digitos[k], LOW);                                  //desactivamos el digito
      }
    }
  }
}
void mostrarTiempo() {
  for (int r = 0; r < vecestiempo; r++) {
    myRTC.updateTime();

    horas = myRTC.hours;
    minutos = myRTC.minutes;
    segundos = myRTC.seconds;

    int h;
    h = horas.toInt();
    int m;
    m = minutos.toInt();
    int s;
    s = segundos.toInt();

    if (h < 10) {
      horas = "0" + horas;
    }
    if (m < 10) {
      minutos = "0" + minutos;
    }
    if (s < 10) {
      segundos = "0" + segundos;
    }
    tiempo = horas + minutos + segundos;

    for (int k = 0; k < tiempo.length(); k++) {
      printLetter(tiempo.charAt(k));

      digitalWrite(digitos[k], HIGH);
      delay(tiempom);
      digitalWrite(digitos[k], LOW);
    }

    diferencia = s - ultimo;
    if (diferencia == 1) {
      if (state == false) {
        state = true;
      } else {
        state = false;
      }
      digitalWrite(puntos, state);
    }
    ultimo = s;
  }

  digitalWrite(puntos, LOW);
}
void printLetter(char letra) {                                        //ch es el caracter
  if (letra < 32 || letra > 126) {                                            //si no hay texto mandamos espacio en ascii
    letra = 32;                                                            //32 es donde empieza el codigo ascii,  a ch se le da el valor de 32 que es espacio "nada"
  }

  letra -= 32;                                                             //dependiendo de la letra ascii por ejemplo: espacio es el numero 32 ascii pero le restamos 32 para que sea cero porque la matriz empieza desde cero
  byte b = font[letra];                                                    //se guarda en un vector tipo byte "b" lo que hay en las coordenadas ch e i

  digitalWrite(latchPin, LOW);                                          //inabilitamos la salida paalela del registro

  for (int j = 0; j < 8; j++) {                                        //se manda en serial el byte al registro de dezplazamiento
    digitalWrite(dataPin, bitRead(b, j));                              //de acuerdo al pin se lee bit a bit el byte b
    delayMicroseconds(10);
    digitalWrite(clockPin, HIGH);                                      //es necesario mandar un pulso de reloj para guardar el bit en el registro
    delayMicroseconds(10);
    digitalWrite(clockPin, LOW);
    delayMicroseconds(10);
  }

  digitalWrite(latchPin, HIGH);                                        //mostramos el byte por el registro de desplazamiento
}
void limpiar_digitos() {
  for (int contador = 5; contador > -1 ; contador--) {
    digitalWrite(digitos[contador], LOW);
  }
}
