// **********************************************************************************
// Pomiar temperatury RegTemp1 & RegTemp2
// **********************************************************************************

#include "rfm69.h"
#include "rfm69registers.h"
#include <wiringPiSPI.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <unistd.h>

char pomiarTemp(void){
    rfm69_writeReg(REG_TEMP1, RF_TEMP1_MEAS_STATR);
    while(rfm69_readReg(REG_TEMP1) & RF_TEMP1_MEAS_RUNNING);
    return rfm69_readReg(REG_TEMP2);
}