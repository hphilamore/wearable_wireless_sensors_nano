 /*
 * Voltage divider connections:
 * |----Vs (e.g. 3.3V)
 * |
 * | R1 (probe)
 * |
 * |----Pin A0
 * |
 * | R2
 * |
 * |---- GND
 */

#define probe A0     // the voltage divider pin (connected to Vs by probe)  
#define Vs 3.3       // nominal supply voltage (check using multimeter)
#define R2 330       // fixed resister (check using multimeter)
#define dist 1       // the distance between the probes in cm (measure e.g. using calipers)

int reading;          // voltage on voltage divider pin read as binary value (range 0 to 1023)  
float voltage;        // binary value converted to voltage
float R1;             // resistance R1 (Ohms)
float resistivity_1;  // resistivity of material that forms R1 (Ohms/cm)

// Variables used to map the binary input reading to a different scale (e.g. for output)
int max_reading = 1000;    // the maximum value 
int min_reading = 23;      // the minimum value 
