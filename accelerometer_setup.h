#include "SparkFunLSM303C.h"

LSM303C myIMU;

#define x 0
#define y 1
#define z 2

#define step_threshold 3000        // the magnitude of acceleration above which a step is registered
#define pace_period 3000           // the period (in ms) over which steps are counted to calculate pace
#define pace_threshold 0.0005      // the pace above which a light will switch on

unsigned long startTime = millis();
unsigned long endTime;
float X;
float Y;
float Z;
float acceleration[3] = {0, 0, 0}; // initialisex, y, z accceleration
float M = 0;                       // initialise 3D acceleration magnitude

int steps, stepsOld, flag;         // initialise variables for pedometer

float paceAve;                      // initialise variables for pace monitor
