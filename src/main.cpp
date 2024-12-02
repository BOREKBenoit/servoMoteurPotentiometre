/* 
  Commande Servo Moteur MG 995
  
  Programme Basique sur Arduino Mega.
  IDE Visual Studio Code 1.95.3

  Constituants :
    - servo moteur MG 995
    - Potentiomètre 

    Version 1 : 19/11/2024
    Benoit Borek
  */

#include <Arduino.h>
#include <Servo.h> //Inclusion de la bibliothèque pour commander plus facilement le servo moteur.

Servo myServo; // Attribution du nom "Servo" à "myServo".

int const potPin = A0; // Attribution de la valeur A0 qui est la broche Arduino relié au curseur du potentiomètre.

int potVal; // Création de l'entier potVal qui contiendra la valeur analogique du curseur du potentiomètre.

int angle; // Création de l'entier angle qui contiendra l'angle convertie pour le servo moteur.


int const Angle_Mini = 0; // Création de la constante entière qui sera l'angle minimum dans lequel le servo moteur pourra se positionner.
int const Angle_Max = 179; // Création de la constante entière qui sera l'angle maximum dans lequel le servo moteur pourra se positionner.



void setup() {
  pinMode(3, OUTPUT); // Déclaration du pin 3 en output pour dire à l'arduino que l'on va envoyer une tension et non en recevoir.
  myServo.attach(3); // Déclaration du pin 3 comme le pin relié à la borne MLI du servo moteur.


  
  Serial.begin(9600); // Initialisation la communication PC <---> Arduino.
}

void loop() {
  Serial.println("");
  Serial.println("Nouvelle commande d'angle."); // Affiche dans le moniteur série qu'une nouvelle angle sera envoyée.
  Serial.println("");

  potVal = analogRead(potPin); // Attribution de la valeur analogique lu à l'entier "potVal".
  Serial.print("Valeur du potentiomètre : ");
  Serial.print(potVal); // Affiche dans le moniteur série la valeur analogique

  angle = map(potVal, 0, 1023, Angle_Mini, Angle_Max); // Conversion de la valeur analogique en angle en respectant l'angle mini et l'angle max
  Serial.print(" , angle : ");
  Serial.println(angle); // Affiche dans le moniteur série l'angle convertie
  myServo.write(angle); // Envoi l'angle au servo moteur.
  delay(2500); // Pause de 2.5 secondes.

}


