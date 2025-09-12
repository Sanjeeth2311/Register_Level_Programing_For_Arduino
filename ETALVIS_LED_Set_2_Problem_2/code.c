void setup() {
  volatile char *dir;
  dir=0x21;
  *dir=0xFF;
}

void loop() {
  volatile char *data;
  data=0x22;
  long long i;
  for(i=0; i<100000; i++){
  *data=0x01;
  *data=0x02;
  *data=0x04;
  *data=0x08;
  *data=0x10;
  *data=0x20;
  *data=0x40;
  *data=0x80;
  }
  for(i=0; i<100000; i++){
  *data=0x00;
  }
}