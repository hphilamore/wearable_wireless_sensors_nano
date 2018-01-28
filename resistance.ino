void resistance(){
  reading  = analogRead(probe);      // voltage on voltage divider pin read as binary value (range 0 to 1023)   
  voltage = reading*(Vs/1023.0);     // binary value converted to voltage
  R1 = (R2 * Vs / voltage) - R2;     // R1 (Ohms) calculated from equation of voltage divider
}

void resistivity(){
  resistivity_1 = R1 / dist;          // resistivity of material that forms R1 (Ohms/cm)
}

void LED_mapToInput(){
   
   int i = map(reading, min_reading, max_reading, 0, 255);
   analogWrite(A1, i);
   // neopixel_mapToInput(i);     // map to single neopixel LED 
}
