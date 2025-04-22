#ifndef MOTORCONTROLLER_H
#define MOTORCONTROLLER_H
#include <Arduino.h>
//#include <analogWrite.h>//Will give analogwrite.h error. 

void forward(int AIN1,int AIN2,int BIN1,int BIN2,int Speed);
void backward(int AIN1,int AIN2,int BIN1,int BIN2,int Speed);
void right(int AIN1,int AIN2,int BIN1,int BIN2,int Speed);
void left(int AIN1,int AIN2,int BIN1,int BIN2,int Speed);
void Stop(int AIN1,int AIN2,int BIN1,int BIN2,int Speed);

#endif
