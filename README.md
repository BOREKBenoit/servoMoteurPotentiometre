### Projet : Servo moteur commandé via un potentiomètre.
## IDE : Visual Studio Code 1.95.3



# Les constituants nécéssaire : 

| Composant              | Description                | Quantité |
|------------------------|----------------------------|----------|
| Arduino Mega           | Microcontrôleur principal | 1        |
| Potentiomètre          | Résistance variable       | 1        |
| Servo moteur SG-5010   | Actionneur rotatif        | 1        |

# Le câblage du projet : 

| Composant              | Borne                     | Connecté à                |
|------------------------|---------------------------|---------------------------|
| Potentiomètre          | +5V                       | +5V (Arduino Mega)        |
|                        | GND                       | GND (Arduino Mega)        |
|                        | Signal                    | A0 (Arduino Mega)         |
| Servo moteur SG-5010   | +5V                       | +5V (Arduino Mega)        |
|                        | GND                       | GND (Arduino Mega)        |
|                        | Signal                    | D3 (Arduino Mega)         |



