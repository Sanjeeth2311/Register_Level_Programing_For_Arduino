void setup() {
  volatile char *dir;
  dir = 0x30;
  *dir=0x30;

}

void loop() {
  volatile char *data;
  data=0x31;
  long long i;
  for(i=0; i<100000; i++){
    *data=0x01;
  }
  for(i=0; i<100000; i++){
  *data=0x00;
  }
  for(i=0; i<100000; i++){
  *data=0x02;
  }
  for(i=0; i<100000; i++){
  *data=0x00;
  }
  for(i=0; i<100000; i++){
  *data=0x04;
  }
  for(i=0; i<100000; i++){
  *data=0x00;
  }
  for(i=0; i<100000; i++){
  *data=0x08;
  }
  for(i=0; i<100000; i++){
  *data=0x00;
  }
  for(i=0; i<100000; i++){
    *data=0x10;
  }
  for(i=0; i<100000; i++){
  *data=0x00;
  }
  for(i=0; i<100000; i++){
  *data=0x20;
  }
  for(i=0; i<100000; i++){
  *data=0x00;
  }
  for(i=0; i<100000; i++){
  *data=0x40;
  }
  for(i=0; i<100000; i++){
  *data=0x00;
  }
  for(i=0; i<100000; i++){
  *data=0x80;
  }
  for(i=0; i<100000; i++){
  *data=0x00;
  }


}
