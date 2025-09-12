void setup() {
  volatile char *dir;
  dir = 0x24;
  *dir=0xFF;

}

void loop() {
  volatile char *data;
  data=0x25;
  long long i;
  for(i=0; i<100000; i++){
    *data=0x01;
  }
  for(i=0; i<100000; i++){
  *data=0x03;
  }
  for(i=0; i<100000; i++){
  *data=0x07;
  }
  for(i=0; i<100000; i++){
  *data=0x0F;
  }
  for(i=0; i<100000; i++){
  *data=0x1F;
  }
  for(i=0; i<100000; i++){
  *data=0x3F;
  }
  for(i=0; i<100000; i++){
  *data=0x7F;
  }
  for(i=0; i<100000; i++){
  *data=0xFF;
  }
for(i=1; i>0; i++){
    *data=0xFF;
  }

}
