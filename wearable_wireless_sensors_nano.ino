#include "Wire.h"
#include "accelerometer_setup.h"
#include "resistance_setup.h"
#include "Bluetooth_setup.h"
#include "neopixel_setup.h"

#define accelerometer false
#define pedometer false
#define pace_monitor false
#define resistance_meter true
#define calc_resistivity true
#define bluetooth false
#define neopixel false

void setup() {
  Serial.begin(115200);
  pinMode(LED_BUILTIN, OUTPUT);

  if( accelerometer ){
    if (myIMU.begin() != IMU_SUCCESS)
        {
          Serial.println("Failed accelerometer setup.");
          while(1);
        }
    }

  if( bluetooth ){
    BTserial.begin(9600);
  }

  if( neopixel ){
    strip.begin();
    strip.show();  
  }
}

void loop() {
  // put your main code here, to run repeatedly:

  if( accelerometer ){ 
    acceleration_3D();
    magnitude_3D();

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

  delay(200);
  
}


