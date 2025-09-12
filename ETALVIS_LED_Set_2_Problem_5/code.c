void setup() {
  volatile char *dir;
  dir = 0x30;
  *dir=0xFF;

}

void loop() {
  volatile char *data;
  data=0x31;
  long long i;
  for(i=0; i<100000; i++){
  *data=0x02;
  }
  for(i=0; i<100000; i++){
  *data=0x0A;
  }
  for(i=0; i<100000; i++){
  *data=0x2A;
  }
  for(i=0; i<100000; i++){
  *data=0xAA;
  }
for(i=1; i>0; i++){
    *data=0xAA;
  }

}
