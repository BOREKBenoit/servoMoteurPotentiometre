/* 
  Commande Servo Moteur MG 995
  
  Programme Basique sur Arduino Mega.
  IDE Visual Studio Code 1.95.3

  Constituants :
    - servo moteur MG 995
    - Potentiomètre 

    Version 1 : 19/11/2024
  */

#include <Arduino.h>
#include <Servo.h>

Servo myServo;

int const potPin = A0;

int potVal;

int angle;
int anc_angle;

int sommeil = 0;

int const Angle_Mini = 0;
int const Angle_Max = 90; 



void setup() {
  pinMode(3, INPUT);
  myServo.attach(3);


  
  Serial.begin(9600);
}

void loop() {
  Serial.println("");
  Serial.println("Nouvelle commande d'angle.");
  Serial.println("");

  potVal = analogRead(potPin);
  Serial.print("Valeur du potentiomètre : ");
  Serial.print(potVal);

  angle = map(potVal, 0, 1023, Angle_Mini, Angle_Max);
  Serial.print(" , angle : ");
  Serial.println(angle);
  myServo.write(angle);
  delay(2500);

}


