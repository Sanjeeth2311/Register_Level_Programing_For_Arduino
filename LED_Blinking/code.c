void setup() {
  volatile char *dir;
  dir = 0x24;
  *dir=0xFF;
}

void loop() {
  volatile char *data;
  data=0x25;
  long long i;
  for(i=0;i<100000;i++){
  *data=0x01;
}
for(i=0;i<100000;i++){
    *data=0x00;
}
}

