/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"


//==============================================================================
LooperAudioProcessorEditor::LooperAudioProcessorEditor (LooperAudioProcessor& p)
    : AudioProcessorEditor (&p), processor (p)
{
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    
    addAndMakeVisible (button1);
    button1.setButtonText("looper");
    button1.addListener (this);
    
    
    
    setSize (400, 300);
}

LooperAudioProcessorEditor::~LooperAudioProcessorEditor()
{
}

//==============================================================================
void LooperAudioProcessorEditor::paint (Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));

    g.setColour (Colours::white);
    g.setFont (15.0f);
    //g.drawFittedText ("Hello World!", getLocalBounds(), Justification::centred, 1);
}

void LooperAudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
    
    button1.setBounds (getWidth() * 0.1, getHeight() * 0.1, getWidth()*0.8, getHeight() * 0.1);
}

void LooperAudioProcessorEditor::buttonClicked(Button* button){
    if (processor.onoff==0)  processor.onoff = 1;
    else  processor.onoff=0;
}



//////////



