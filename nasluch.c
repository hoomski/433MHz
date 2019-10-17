#include "rfm69.h"
#include <wiringPi.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <pthread.h>
#include <errno.h>

#define FREQUENCY RF69_433MHZ
#define NODEID 1
#define NETWORKID 100
#define TXPOWER 31


int main(int argc, char* argv[])
{
  unsigned char Temp;
  rfm69_initialize(FREQUENCY, NODEID, NETWORKID);
  printf("Inicjalizacja modułu RFM69 ...... OK\n");
  Temp = pomiarTemp();
  printf("Pomiar temperatury z RFM69:%d, %u, %x\n", Temp, Temp, Temp);
}
