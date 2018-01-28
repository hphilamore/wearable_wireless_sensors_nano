void print_variables(){

//  // comment out if not using accelerometer
  if( accelerometer ){
    if (bluetooth){
      Serial.print(acceleration[x]);       
      Serial.print("\t");
      Serial.print(acceleration[y]);        
      Serial.print("\t");
      Serial.print(acceleration[z]);        
      Serial.print("\t");
      Serial.print(M);  
      Serial.print("\t");
    }
    else{
      Serial.print(acceleration[x]);       
      Serial.print("\t");
      Serial.print(acceleration[y]);        
      Serial.print("\t");
      Serial.print(acceleration[z]);        
      Serial.print("\t");
      Serial.print(M);  
      Serial.print("\t");
    }


      if( pedometer ){
        if ( bluetooth ){               
          BTserial.print(steps);
          BTserial.print("\t"); 
        }
        else{
          Serial.print(steps);
          Serial.print("\t");
        }
      }

    
      if( pace_monitor ){
        if( bluetooth ){
          BTserial.print(paceAve, 6); 
          BTserial.print("\t");
        }
        else{
          Serial.print(paceAve, 6); 
          Serial.print("\t");
        }
        
      }
  }


  if( resistance_meter ){
    if( bluetooth ){
      BTserial.print(R1);
      BTserial.print("\t");
    }
    else{
      Serial.print(R1);
      Serial.print("\t");
    } 
  }


  if( calc_resistivity ){
    if( bluetooth ){
      BTserial.print(resistivity_1);
      BTserial.print("\t");
    }
    else{
      Serial.print(resistivity_1);
      Serial.print("\t");
    }
  }


  if( bluetooth ){
      BTserial.print("\n");
    }
  else{
      Serial.print("\n");
    }

}

