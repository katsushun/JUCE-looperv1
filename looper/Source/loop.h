/*
  ==============================================================================

    loop.h
    Created: 14 Dec 2017 8:03:18pm
    Author:  勝見瞬

  ==============================================================================
*/

#pragma once

#ifndef LOOP_H_INCLUDEDED
#define LOOP_H_INCLUDEDED

class loop
{
    
public:
    loop();
    ~loop();
    
    void setloop(float* bufferPtr, int bufferSize);
    void getloop(float* bufferPtr, int bufferSize);
    
//private:
    int loopstatus;
    int looplength;
    float storedloop[500000];
    int looptime;

};

#endif

