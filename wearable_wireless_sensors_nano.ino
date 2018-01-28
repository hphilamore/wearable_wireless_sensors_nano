#include "Wire.h"
#include "accelerometer_setup.h"
#include "resistance_setup.h"
#include "Bluetooth_setup.h"
#include "neopixel_setup.h"

#define accelerometer true
#define acceleration_mag false
#define pedometer true
#define pace_monitor false
#define resistance_meter false
#define calc_resistivity false
#define bluetooth false
#define neopixel false

void setup() {
  Serial.begin(115200);
  pinMode(LED_BUILTIN, OUTPUT);

  if( accelerometer ){
    myIMU.begin();        // connects to accelerometer 
   }

  if( bluetooth ){
    BTserial.begin(9600); // connects to bluetooth module
  }

  if( neopixel ){
    strip.begin();        // connects neopixel LED
    strip.show();  
  }
}

void loop() {

  if( accelerometer ){ 
    acceleration_3D();
    //magnitude_3D();

    if( acceleration_mag ){
      magnitude_3D();
    }

    if( pedometer ){
      step_counter();
    }

    if( pace_monitor ){
      pace();
    }
  }


  if( resistance_meter ){
    resistance();
  }

  if( calc_resistivity ){
    resistivity();
  }

  print_variables();

  delay(20);
  
}


