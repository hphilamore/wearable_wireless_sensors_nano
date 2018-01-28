void neopixelRED(){
   strip.setPixelColor(0, 255, 0, 0);
   strip.show();
}


void neopixelBLUE(){
  strip.setPixelColor(0, 0, 255, 0);
  strip.show();
}


void neopixelOFF(){
   strip.setPixelColor(0, 0, 0, 0);
   strip.show();
}

void neopixel_scaleToInput(int j){
  strip.setPixelColor(0, j, j, j);
  strip.show();
}

