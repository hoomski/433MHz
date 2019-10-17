#Plik makefile 
CFLAGS=-lwiringPi -lfahw -lm -Wall
LIB=-L /matrix/lib/ -I /matrix/lib/includes/ -I /WiringNP/wiringPi/

all:
	gcc -pthread -o nasluch $(LIB) nasluch.c rfm69_tuned.c rfm69_Pomiar_temp.c $(CFLAGS) 
