/*
  MCP3008_SPI.h library to communicate with MCP3008 8 channel adc using native SPI protocol.

  Adapted from Uros Petrevski, Nodesign.net 2013 by Thomas Combriat, 2019
  Public domain.
  ported from Python code originaly written by Adafruit learning system for rPI 
*/


#ifndef _MCP3008SPI_
#define _MCP3008SPI_

#include<SPI.h>

class MCP3008_SPI
{
 public:
  MCP3008_SPI(int cspin);
  int readADC(byte channel);
 private:
  int _cspin;
};


#endif
