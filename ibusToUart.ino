/*
 * Test FlySky IBus interface on an Arduino Mega.
 *  Connect FS-iA6B receiver to Serial1.
 */ 
#include "FlySky.h"

FlySkyIBus IBus;

void setup() 
{
  Serial.begin(115200);
  IBus.begin(Serial);
}

void loop() 
{
  IBus.loop();


  //Flysky Th9x
  Serial.print(IBus.readChannel(0));
  Serial.print(" | ");
  Serial.print(int((IBus.readChannel(1)-1000)*0.255));
  Serial.print(" | ");
  Serial.print(IBus.readChannel(2));
  Serial.print(" | ");
  Serial.print(IBus.readChannel(3));
  Serial.print(" | ");
  Serial.print(IBus.readSwitch(4));
  Serial.print(" | ");
  Serial.print(IBus.readChannel(5));
  Serial.print(" | ");
  Serial.print(IBus.readSwitch(6));
  Serial.print(" | ");
  Serial.println(IBus.readChannel(7));


////Radiomaster
//  Serial.print(IBus.readChannel(0));
//  Serial.print(" | ");
//  Serial.print(int((IBus.readChannel(2)-1000)*0.255));
//  Serial.print(" | ");
//  Serial.print(IBus.readChannel(1));
//  Serial.print(" | ");
//  Serial.print(IBus.readChannel(3));
//  Serial.print(" | ");
//  Serial.print(IBus.readSwitch(4));
//  Serial.print(" | ");
//  Serial.print(IBus.readChannel(5));
//  Serial.print(" | ");
//  Serial.print(IBus.readSwitch(6));
//  Serial.print(" | ");
//  Serial.println(IBus.readChannel(7));

}
