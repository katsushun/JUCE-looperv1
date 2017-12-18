/*
  ==============================================================================

    loop.cpp
    Created: 14 Dec 2017 8:03:18pm
    Author:  勝見瞬

  ==============================================================================
*/

#include "loop.h"
#include <math.h>

loop::loop()
:loopstatus(0),looplength(1),storedloop{0},looptime(0)
{}

loop::~loop(){}


void loop::setloop(float* bufferPtr, int bufferSize)
{
    
    for(int i = 0 ; i < bufferSize;i++){
        storedloop[(looplength - 1) * bufferSize + i] = bufferPtr[i];
    }
    
    if(looplength < 900){
    looplength = looplength + 1 ;
    }
    
};



void loop::getloop(float* bufferPtr, int bufferSize){
    
    for(int i = 0 ; i < bufferSize;i++){
        bufferPtr[i] = storedloop[looptime * bufferSize + i];
    }
      looptime = (looptime + 1) % looplength;
    
    
    
    
};

