# Matériel nécessaire
Pour réaliser votre bouton Alt0183, vous aurez besoin des produits suivants :
* [une carte Arduino Pro Micro](https://www.amazon.fr/gp/product/B019SXN84E)
* [deux fils électriques](https://www.amazon.fr/Elegoo-Multicolore-M%C3%A2le-Femelle-M%C3%A2le-M%C3%A2le-Femelle-Femelle/dp/B01JD5WCG2)
* [un bouton poussoir](https://www.amazon.fr/gp/product/B01FDJLVFK)

> Les liens sont donnés à titre indicatifs. C'est ceux que nous avons utilisé pour le prototype donc nous savons que ce matériel est compatible. Cependant, ce projet est également réalisable avec une carte Arduino Leonardo et avec n'importe quel type de bouton poussoir. N'hésitez donc pas à adapter le matériel selon vos besoins ou ce que vous avez sous la main.

> Attention à ne pas confondre la carte Arduino Pro Micro avec une Arduino Nano ou Mini. Le microcontroleur est différent et ne permet pas de se faire passer pour un clavier. Par contre, la carte Leonardo
est compatible, cependant elle ne rentrera pas dans le boitier proposé ici. Si vous avez un doute lors du choix de la carte, l'important est de vérifier que le microcontrôleur soit un Atmega32u4.

Vous aurez également besoin des équipements suivants :
* fer à souder
* imprimante 3D

> Si vous ne disposez pas de ces outils, nous vous conseillons de prendre contact avec un fablab près de chez vous ou de passer par un service d'impression 3D à la demande comme [Sculpteo](www.sculpteo.com) ou [3DHubs](www.3dhubs.com).


# Impression 3D du boitier

Téléchargez les fichiers STL puis imprimez les en 3D :
* [Dessous](CAO/STL/Dessous.stl)
* [Dessus](CAO/STL/dessus.stl)
* [Buzzer](CAO/STL/buzzer.stl)

Dans notre cas, nous avons choisi d'imprimer le boitier en jaune et le buzzer en rouge mais libre à vous de choisir le filament de votre choix.

![impression 3D](IMG/alt-2.jpg)

![impression 3D](IMG/alt.jpg)

# Fabrication et assemblage du boutton

## Cablage / Soudage

Soudez un fil sur chaque patte du bouton poussoir

![cablage](IMG/wiring.png)

Dans certains cas il peut être également nécessaire de souder les broches sur la carte Arduino Pro Micro

## Montage du bouton dans le boitier

Visser le bouton dans le boitier :

![assemblage](IMG/alt-4.jpg)

Brancher les deux fils du bouton sur la carte Arduino. Un des deux fils doit se brancher sur le port 8 et l'autre sur un port GND. Vous pouvez bien sur brancher autrement, mais il faudra alors apporter les modifications nécessaires dans le code Arduino.

Positionner l'arduino dans la boite et la refermer.

![Assemblage](IMG/alt-5.jpg)

## Collez le buzzer

Collez le buzzer sur le bouton poussoir avec de la colle néoprène ou de la super glue.

![Assemblage final](IMG/alt6.jpg)

# Programmation 
A cette étape, vous pouvez brancher l'arduino à votre ordinateur

## Installer le Logiciel arduino
Pour programmer votre carte Arduino vous aurez besoin d'installer le logiciel disponible sur la [page téléchargement du site Arduino](https://www.arduino.cc/en/Main/Software).

## Installation des librairies nécessaires à ce projet
Les librairies apportent des fonctions supplémentaires à Arduino. Dans ce projet, nous allons utiliser les librairies suivantes :
* Keyboard qui permet à la carte Arduino d'envoyer des signaux correspondant à des touches claviers
* oneButton qui permet de détecter un double clic

![Installer des librairies](IMG/inclurebiblio.png)

![Installer la librairie oneButton](IMG/oneButton.PNG)

![Installer la librairie Keyboard](IMG/keyboard.PNG)

## Code

Dans la fenètre du logiciel Arduino, copiez le code disponible [sur ce lien](Alt0183_ProMicro.ino)

Votre fenêtre doit maintenant ressembler à cela :

![Fenetre Arduino après avoir collé le code](IMG/arduino.PNG)

Sauvegarez le fichier

## Téléverser le code sur la carte Arduino

La dernière étape consiste à envoyer ce code sur la carte Arduino. Pour celà :

* Sélectionnez le type de carte que vous utilisez dans le menu approprié :

![Sélection de la carte](IMG/carte.png)

* Dans le menu "port" sélectionnez le seul disponible (le numéro derrière COM peut varier, ce n'est pas important)

![Sélection du port](IMG/port.png)

* Cliquez sur le bouton téléverser en forme de flèche pour envoyer le script sur l'Arduino :

![televerser](IMG/televerser.PNG)

Si la partie noire en bas de la fenètre ne renvoie que du texte écrit en blanc et pas d'erreur (écrites en orange), le script est bien chargé sur l'Arduino :

![check](IMG/check.PNG)

# Partagez

Voilà, vous avez réalisé un Alt0183! Pensez à nous envoyer une photo en situation [par mail](mailto:contact.alt0183@gmail.com) ou sur Instagram avec le hashtag #Alt0183!

# En cas de problème

Allez dans l'onglet "Issues" de ce site et décrivez votre problème. Nous ferons notre possible pour vous répondre au plus vite.
