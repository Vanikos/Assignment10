#include <Smartcar.h>

SR04 sensor1, sensor2;
const int TRIGGER_1 = 6; // Χρησιμοποιήστε τα pin που θέλετε
const int ECHO_1 = 7; 
const int TRIGGER_2 = 5;
const int ECHO_2 = 4;
int T.R.D = 0; // totalrightdistanse
int T.L.D = 0;// totalleftdistanse
int R.M = 10; //rightmesurements
int L.M = 10; //leftmesurements
void setup() {
  Serial.begin(9600);
  sensor1.attach(TRIGGER_1, ECHO_1);
  sensor2.attach(TRIGGER_2, ECHO_2);
}

void loop() {
  unsigned int rightDistance = sensor1.getDistance();
  unsigned int leftDistance = sensor2.getDistance();

if ( rightDistance > 0 ){
  T.R.D = T.R.D + rightDistance;
  R.M = R.M -1;
}
}
