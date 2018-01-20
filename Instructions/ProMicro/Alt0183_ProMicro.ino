// Chargement des librairies
#include <Keyboard.h>
#include <OneButton.h>

// Creation de l'objet boutton et definition de la broche sur laquelle il est branché
OneButton button(8, true);

void setup() {
    // Le contenu de cette boucle est lancée une fois au démarrage de l'arduino
    Keyboard.begin(); 
    button.attachClick(myClickFunction);  // Fonction qui sera exécutée lors d'un clic
    button.attachDoubleClick(myDoubleClickFunction);  // Fonction qui sera exécutée lors d'un double clic
    button.setDebounceTicks(10);  // Temps entre deux clics pour que ce soit considéré comme un double clic (en ms)
    button.setClickTicks(200);   // Temps d'attente après un clic avant de considérer que c'était un simple clic(en ms) attention, mettre un temps trop court peut empécher de réaliser un double clic
}

void loop() {
    // Le contenu de cette boucle est répété continuellement tant que l'arduino est allumé
    unsigned long now = millis(); // current (relative) time in msecs. <- utile pour la biblioteque oneButton
    button.tick(); // recherche d'un évènement boutton
}

void ptMed() {
        // Fonction qui fait croire à windows qu'on clique successivement sur ALT 0183
        Keyboard.press(KEY_LEFT_ALT);
        Keyboard.press(234);
        delay(10);
        Keyboard.release(234);
        Keyboard.press(225);
        delay(10);
        Keyboard.release(225);
        Keyboard.press(232);
        delay(10);
        Keyboard.release(232);
        Keyboard.press(227);
        delay(10);
        Keyboard.release(227);
        Keyboard.releaseAll();
}

void myClickFunction() {
        // Cette fonction est appelée lors d'un clic simple
        ptMed();   // point médian
}

void myDoubleClickFunction() {
        // Cette fonction est appelée lors d'un double clic 
        ptMed();
        delay(10);
        Keyboard.print("es");
}
