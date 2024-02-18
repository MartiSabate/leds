#include <Arduino.h>

#include <Adafruit_NeoPixel.h>

#define PIN            D4  // Pin de salida al que está conectada la tira de LEDs
#define NUM_LEDS       60  // Número de LEDs en tu tira

Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUM_LEDS, PIN, NEO_GRB + NEO_KHZ800);


// Rellena la tira de LEDs con un color específico
void colorWipe(uint32_t color, int wait) {
  for(int i=0; i<strip.numPixels(); i++) {
    strip.setPixelColor(i, color); // Establece el color del LED en la posición i
    strip.show();  // Actualiza la tira de LEDs para mostrar el color
    delay(wait);   // Espera un poco antes de actualizar el siguiente LED
  }
}


//Indicate color with hex code
void setColor(uint32_t color) {
  for(int i = 0; i < strip.numPixels(); i++) {
    strip.setPixelColor(i, color);  // Establecer el color del LED en la posición i
  }
  strip.show();  // Actualizar la tira de LEDs para mostrar el color
}

void setup() {
  strip.begin();  // Inicializar la tira de LEDs
  strip.show();   // Apagar todos los LEDs al principio
  setColor(0x000000);
}

void loop() {
  // put your main code here, to run repeatedly:
}

