#include <Arduino.h>             // Arduino-Bibliothek
#include <DIYables_LED_Matrix.h> // LED Matrix Bibliothek

// Definiere die GPIO-Pins deines ESP32, die mit dem MAX7219 verbunden sind.
// PASSE DIESE WERTE AN DEINE TATSÄCHLICHE VERKABELUNG AN!
#define HARDWARE_TYPE MD_MAX72XX::GENERIC_HW
#define NUM_MATRICES 1
#define CS_PIN 21

// Erstelle ein Objekt der DIYables_LED_Matrix Klasse
// Parameter: DataPin, ClockPin, CSPin, Anzahl der Matrizen
DIYables_Max7219 matrix(CS_PIN, NUM_MATRICES);

void setup()
{
  delay(500);
  Serial.begin(115200);
  delay(2000); // Warte kurz, um sicherzustellen, dass die serielle Verbindung bereit ist.
  Serial.println("ESP32 gestartet. Initialisiere LED-Matrix...");
  delay(500); // Wartezeit, um sicherzustellen, dass die Matrix initialisiert ist.

  // Setze die Helligkeit der Matrix (0-15, wobei 0 am dunkelsten, 15 am hellsten ist).
  matrix.setBrightness(1); // Setze eine niedrige Helligkeit (Wert zwischen 0 und 15)
  Serial.println("Helligkeit gesetzt.");
  delay(500); // Wartezeit, um die Helligkeitseinstellung zu übernehmen.

  // Lösche den gesamten Inhalt der Matrix, um sicherzustellen, dass alles aus ist.
  matrix.clear();
  Serial.println("Matrix gelöscht.");
  delay(500);

  // Schalte die erste LED ein (Position x=0, y=0).
  u_int8_t bitmap_0_0[8] = {
      0b10000000, // Zeile 0
      0b00000000, // Zeile 1
      0b00000000, // Zeile 2
      0b00000000, // Zeile 3
      0b00000000, // Zeile 4
      0b00000000, // Zeile 5
      0b00000000, // Zeile 6
      0b00000000  // Zeile 7 (LED bei (0,0) auf EIN)
  };

  matrix.printBitmap(bitmap_0_0); // Setzt die LED bei (Spalte 0, Reihe 0) auf EIN (true)
  Serial.println("Erste LED (0,0) sollte jetzt leuchten.");
  delay(500);

  // Zeige die Änderungen auf der Matrix an.
  // Ohne show() werden die gesetzten LEDs nicht sichtbar.
  matrix.show();
  Serial.println("Änderungen auf Matrix angezeigt.");
  delay(500);
  Serial.flush();
}

void loop()
{
  // Im Loop muss nichts getan werden, da die LED dauerhaft leuchten soll.
  // Hier könnten komplexere Muster oder Animationen programmiert werden.
}
