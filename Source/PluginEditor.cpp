/*
==============================================================================

This file was auto-generated by the Introjucer!

It contains the basic startup code for a Juce application.

==============================================================================
*/
#include "PluginProcessor.h"
#include "PluginEditor.h"
#include "Gui/res.h"


//==============================================================================
ObxdAudioProcessorEditor::ObxdAudioProcessorEditor (ObxdAudioProcessor* ownerFilter)
	: AudioProcessorEditor (ownerFilter)
{
	// This is where our plugin's editor size is set.
	setSize (1087, 442);
	cutoffKnob = addNormalKnob(577,40,ownerFilter,CUTOFF,"Cutoff",0.4);
	resonanceKnob = addNormalKnob(638,40,ownerFilter,RESONANCE,"Resonance",0);
	filterEnvelopeAmtKnob = addNormalKnob(699,40,ownerFilter,ENVELOPE_AMT,"Envelope",0);
	multimodeKnob = addTinyKnob(643,106,ownerFilter,MULTIMODE,"Multimode",0.5);

	volumeKnob = addNormalKnob(53,120,ownerFilter,VOLUME,"Volume",0.4);
	portamentoKnob = addNormalKnob(175,241,ownerFilter,PORTAMENTO,"Portamento",0);
	osc1PitchKnob = addNormalKnob(271,40,ownerFilter,OSC1P,"Osc1Pitch",0);
	pulseWidthKnob = addNormalKnob(334,40,ownerFilter,PW,"PW",0);
	osc2PitchKnob = addNormalKnob(397,40,ownerFilter,OSC2P,"Osc2Pitch",0);

	osc1MixKnob = addNormalKnob(490,40,ownerFilter,OSC1MIX,"Osc1",1);
	osc2MixKnob = addNormalKnob(490,132,ownerFilter,OSC2MIX,"Osc2",1);
	noiseMixKnob = addNormalKnob(490,224,ownerFilter,NOISEMIX,"Noise",0);

	xmodKnob = addNormalKnob(334,168,ownerFilter,XMOD,"Xmod",0);
	osc2DetuneKnob = addNormalKnob(334,104,ownerFilter,OSC2_DET,"Detune",0);

	envPitchModKnob = addNormalKnob(376,232,ownerFilter,ENVPITCH,"PEnv",0);
	brightnessKnob = addNormalKnob(291,232,ownerFilter,BRIGHTNESS,"Bri",1);

	attackKnob = addNormalKnob(791,132,ownerFilter,LATK,"Atk",0);
	decayKnob = addNormalKnob(853,132,ownerFilter,LDEC,"Dec",0);
	sustainKnob = addNormalKnob(916,132,ownerFilter,LSUS,"Sus",1);
	releaseKnob = addNormalKnob(980,132,ownerFilter,LREL,"Rel",0);

	fattackKnob = addNormalKnob(791,40,ownerFilter,FATK,"Atk",0);
	fdecayKnob = addNormalKnob(853,40,ownerFilter,FDEC,"Dec",0);
	fsustainKnob = addNormalKnob(916,40,ownerFilter,FSUS,"Sus",1);
	freleaseKnob = addNormalKnob(980,40,ownerFilter,FREL,"Rel",0);

	lfoFrequencyKnob = addNormalKnob(576,207,ownerFilter,LFOFREQ,"Freq",0);
	lfoAmt1Knob = addNormalKnob(640,207,ownerFilter,LFO1AMT,"Pitch",0);
	lfoAmt2Knob = addNormalKnob(704,207,ownerFilter,LFO2AMT,"PWM",0);

	lfoSinButton = addNormalTooglableButton(587,269,ownerFilter,LFOSINWAVE,"Sin");
	lfoSquareButton = addNormalTooglableButton(587,323,ownerFilter,LFOSQUAREWAVE,"SQ");
	lfoSHButton = addNormalTooglableButton(587,378,ownerFilter,LFOSHWAVE,"S&H");

	lfoOsc1Button = addNormalTooglableButton(651,269,ownerFilter,LFOOSC1,"Osc1");
	lfoOsc2Button = addNormalTooglableButton(651,323,ownerFilter,LFOOSC2,"Osc2");
	lfoFilterButton = addNormalTooglableButton(651,378,ownerFilter,LFOFILTER,"Filt");

	lfoPwm1Button = addNormalTooglableButton(714,269,ownerFilter,LFOPW1,"Osc1");
	lfoPwm2Button = addNormalTooglableButton(714,323,ownerFilter,LFOPW2,"Osc2");

	hardSyncButton = addNormalTooglableButton(282,178,ownerFilter,OSC2HS,"Sync");
	osc1SawButton = addNormalTooglableButton(265,114,ownerFilter,OSC1Saw,"S");
	osc2SawButton = addNormalTooglableButton(394,114,ownerFilter,OSC2Saw,"S");

	osc1PulButton = addNormalTooglableButton(296,114,ownerFilter,OSC1Pul,"P");
	osc2PulButton = addNormalTooglableButton(425,114,ownerFilter,OSC2Pul,"P");

	pitchQuantButton =  addNormalTooglableButton(407,178,ownerFilter,OSCQuantize,"Step");

	filterBPBlendButton = addNormalTooglableButton(697,110,ownerFilter,BANDPASS,"Bp");
	fourPoleButton = addNormalTooglableButton(728,110,ownerFilter,FOURPOLE,"24");
	filterHQButton = addNormalTooglableButton(604,110,ownerFilter,FILTER_WARM,"HQ");

	filterKeyFollowButton =  addNormalTooglableButton(573,110,ownerFilter,FLT_KF,"Key");
	unisonButton = addNormalTooglableButton(125,251,ownerFilter,UNISON,"Uni");
	tuneKnob = addNormalKnob(114,120,ownerFilter,TUNE,"Tune",0.5);
	voiceDetuneKnob =addNormalKnob(53,241,ownerFilter,UDET,"VoiceDet",0);

	veloAmpEnvKnob = addNormalKnob(486,345,ownerFilter,VAMPENV,"VAE",0);
	veloFltEnvKnob = addNormalKnob(428,345,ownerFilter,VFLTENV,"VFE",0);
	midiLearnButton = addNormalTooglableButton(126,372,ownerFilter,MIDILEARN,"LEA");
	midiUnlearnButton = addNormalTooglableButton(185,372,ownerFilter,UNLEARN,"UNL");
	transposeKnob = addNormalKnob(176,120,ownerFilter,OCTAVE,"Transpose",0.5);

	pan1Knob = addTinyKnob(796,318,ownerFilter,PAN1,"1",0.5);
	pan2Knob = addTinyKnob(858,318,ownerFilter,PAN2,"2",0.5);
	pan3Knob = addTinyKnob(921,318,ownerFilter,PAN3,"3",0.5);
	pan4Knob = addTinyKnob(984,318,ownerFilter,PAN4,"4",0.5);

	pan5Knob = addTinyKnob(796,371,ownerFilter,PAN5,"5",0.5);
	pan6Knob = addTinyKnob(858,371,ownerFilter,PAN6,"6",0.5);
	pan7Knob = addTinyKnob(921,371,ownerFilter,PAN7,"7",0.5);
	pan8Knob = addTinyKnob(984,371,ownerFilter,PAN8,"8",0.5);

	bendOsc2OnlyButton = addNormalTooglableButton(321,354,ownerFilter,BENDOSC2,"Osc2");
	bendRangeButton = addNormalTooglableButton(267,354,ownerFilter,BENDRANGE,"12");
	asPlayedAllocButton = addNormalTooglableButton(65,372,ownerFilter,ASPLAYEDALLOCATION,"APA");

	filterDetuneKnob = addTinyKnob(817,240,ownerFilter,FILTERDER,"Flt",0.2);
	envelopeDetuneKnob = addTinyKnob(963,240,ownerFilter,ENVDER,"Env",0.2);
	portamentoDetuneKnob = addTinyKnob(890,240,ownerFilter,PORTADER,"Port",0.2);

	bendLfoRateKnob = addNormalKnob(364,345,ownerFilter,BENDLFORATE,"ModRate",0.4);

	voiceSwitch = addNormalButtonList(172,321,38,ownerFilter,VOICE_COUNT,"VoiceCount",ImageCache::getFromMemory(res::voices_png,res::voices_pngSize));
	voiceSwitch ->addChoise("1");
	voiceSwitch ->addChoise("2");
	voiceSwitch ->addChoise("3");
	voiceSwitch ->addChoise("4");
	voiceSwitch ->addChoise("5");
	voiceSwitch ->addChoise("6");
	voiceSwitch ->addChoise("7");
	voiceSwitch ->addChoise("8");
	voiceSwitch ->setValue(ownerFilter->getParameter(VOICE_COUNT),dontSendNotification);

	legatoSwitch = addNormalButtonList(65,321,95,ownerFilter,LEGATOMODE,"Legato",ImageCache::getFromMemory(res::legato_png,res::legato_pngSize));
	legatoSwitch ->addChoise("Keep all");
	legatoSwitch ->addChoise("Keep fenv");
	legatoSwitch ->addChoise("Keep aenv");
	legatoSwitch ->addChoise("Retrig");
	legatoSwitch ->setValue(ownerFilter->getParameter(LEGATOMODE),dontSendNotification);


	getFilter()->addChangeListener(this);
}
void ObxdAudioProcessorEditor::placeLabel(int x , int y , String text)
{
	Label* lab = new Label();
	lab->setBounds(x,y,110,20);
	lab->setJustificationType(Justification::centred);
	lab->setText(text,dontSendNotification);lab->setInterceptsMouseClicks(false,true);
	addAndMakeVisible(lab);
}
ButtonList* ObxdAudioProcessorEditor::addNormalButtonList(int x, int y,int width, ObxdAudioProcessor* filter, int parameter,String name,Image img)
{
	ButtonList *bl = new ButtonList(img,32);
	bl->setBounds(x, y, width, 32);
	//bl->setValue(filter->getParameter(parameter),dontSendNotification);
	addAndMakeVisible(bl);
    bl->addListener (this);
	return bl;

}
ObxdAudioProcessorEditor::~ObxdAudioProcessorEditor()
{
	getFilter()->removeChangeListener(this);
	deleteAllChildren();
}
Knob* ObxdAudioProcessorEditor::addNormalKnob(int x , int y ,ObxdAudioProcessor* filter, int parameter,String name,float defval)
{
	Knob* knob = new Knob(ImageCache::getFromMemory(res::knoblsd_png,res::knoblsd_pngSize),48);
	//Label* knobl = new Label();
	knob->setSliderStyle(Slider::RotaryVerticalDrag);
	knob->setTextBoxStyle(knob->NoTextBox,true,0,0);
	knob->setRange(0,1);
	addAndMakeVisible(knob);
	//addAndMakeVisible(knobl);
	knob->setBounds(x, y, 48,48);
	knob->setValue(filter->getParameter(parameter),dontSendNotification);
	//knobl->setJustificationType(Justification::centred);
	//knobl->setInterceptsMouseClicks(false,true);
	//knobl->setBounds(x-10,y+40,60,10);
	//knobl->setText(name,dontSendNotification);
	knob->setTextBoxIsEditable(false);
	knob->setDoubleClickReturnValue(true,defval);
	knob->addListener (this);
	return knob;
}
Knob* ObxdAudioProcessorEditor::addTinyKnob(int x , int y ,ObxdAudioProcessor* filter, int parameter,String name,float defval)
{
	Knob* knob = new Knob(ImageCache::getFromMemory(res::knobssd_png,res::knobssd_pngSize),42);
	//Label* knobl = new Label();
	knob->setSliderStyle(Slider::RotaryVerticalDrag);
	knob->setTextBoxStyle(knob->NoTextBox,true,0,0);
	knob->setRange(0,1);
	addAndMakeVisible(knob);
	//addAndMakeVisible(knobl);
	knob->setBounds(x, y, 42,42);
	knob->setValue(filter->getParameter(parameter),dontSendNotification);
	//knobl->setJustificationType(Justification::centred);
	//knobl->setInterceptsMouseClicks(false,true);
	//knobl->setBounds(x-10,y+25,50,10);
	//knobl->setText(name,dontSendNotification);
	knob->setTextBoxIsEditable(false);
	knob->setDoubleClickReturnValue(true,defval);
	knob->addListener (this);
	return knob;
}
TooglableButton*  ObxdAudioProcessorEditor::addNormalTooglableButton(int x , int y , ObxdAudioProcessor* filter,int parameter,String name)
{
	TooglableButton* button = new TooglableButton(ImageCache::getFromMemory(res::button_png,res::button_pngSize));
	//	button->setButtonStyle(DrawableButton::ButtonStyle::ImageAboveTextLabel);
	addAndMakeVisible(button);
	button->setBounds(x,y,28,35);
	button->setButtonText(name);
	button->setValue(filter->getParameter(parameter),0);
	button->addListener(this);
	return button;
}
TooglableButton*  ObxdAudioProcessorEditor::addTinyTooglableButton(int x , int y , ObxdAudioProcessor* filter,int parameter,String name)
{
	TooglableButton* button = new TooglableButton(ImageCache::getFromMemory(res::button_png,res::button_pngSize));
	//	button->setButtonStyle(DrawableButton::ButtonStyle::ImageAboveTextLabel);
	addAndMakeVisible(button);
	button->setBounds(x,y,20,20);
	button->setButtonText(name);
	button->setValue(filter->getParameter(parameter),0);
	button->addListener(this);
	return button;
}
void ObxdAudioProcessorEditor::buttonClicked(Button * b)
{
	TooglableButton* tb = (TooglableButton*)(b);
	ObxdAudioProcessor* flt = getFilter();
#define bp(T) {flt->setParameterNotifyingHost(T,tb->getValue());}
#define handleBParam(K,T)  if (tb == K) {bp(T)} else
	handleBParam(hardSyncButton,OSC2HS)
		handleBParam(osc1SawButton,OSC1Saw)
		handleBParam(osc2SawButton,OSC2Saw)
		handleBParam(osc1PulButton,OSC1Pul)
		handleBParam(osc2PulButton,OSC2Pul)
		handleBParam(filterKeyFollowButton,FLT_KF)
		handleBParam(pitchQuantButton,OSCQuantize)
		handleBParam(unisonButton,UNISON)
		handleBParam(filterHQButton,FILTER_WARM)
		handleBParam(filterBPBlendButton,BANDPASS)

		handleBParam(lfoSinButton,LFOSINWAVE)
		handleBParam(lfoSquareButton,LFOSQUAREWAVE)
		handleBParam(lfoSHButton,LFOSHWAVE)

		handleBParam(lfoOsc1Button,LFOOSC1)
		handleBParam(lfoOsc2Button,LFOOSC2)
		handleBParam(lfoFilterButton,LFOFILTER)
		handleBParam(lfoPwm1Button,LFOPW1)
		handleBParam(lfoPwm2Button,LFOPW2)
		handleBParam(bendOsc2OnlyButton,BENDOSC2)
		handleBParam(bendRangeButton,BENDRANGE)
		handleBParam(fourPoleButton,FOURPOLE)
		handleBParam(asPlayedAllocButton,ASPLAYEDALLOCATION)
		handleBParam(midiLearnButton,MIDILEARN)
		handleBParam(midiUnlearnButton,UNLEARN)
	{};

}
void ObxdAudioProcessorEditor::comboBoxChanged (ComboBox* cb)
{
	ButtonList* bl = (ButtonList*)(cb);
	ObxdAudioProcessor* flt = getFilter();
	#define cp(T) {flt->setParameterNotifyingHost(T,bl->getValue());}
#define handleCParam(K,T)  if (bl == K) {cp(T)} else
	handleCParam(voiceSwitch,VOICE_COUNT)
		handleCParam(legatoSwitch,LEGATOMODE)
	{};
}
void ObxdAudioProcessorEditor::sliderValueChanged (Slider* c)
{
	ObxdAudioProcessor* flt = getFilter();
	//		flt->beginParameterChangeGesture();
#define sp(T) {flt->setParameterNotifyingHost(T,c->getValue());}
#define handleSParam(K,T)  if (c == K) {sp(T)} else
	handleSParam(cutoffKnob,CUTOFF)
		handleSParam(resonanceKnob,RESONANCE)
		handleSParam(volumeKnob,VOLUME)
		handleSParam(osc1PitchKnob,OSC1P)
		handleSParam(osc2PitchKnob,OSC2P)
		handleSParam(osc2DetuneKnob,OSC2_DET)
		handleSParam(portamentoKnob,PORTAMENTO)
		handleSParam(filterEnvelopeAmtKnob,ENVELOPE_AMT)
		handleSParam(pulseWidthKnob,PW)
		handleSParam(xmodKnob,XMOD)
		handleSParam(multimodeKnob,MULTIMODE)

		handleSParam(attackKnob,LATK)
		handleSParam(decayKnob,LDEC)
		handleSParam(sustainKnob,LSUS)
		handleSParam(releaseKnob,LREL)

		handleSParam(fattackKnob,FATK)
		handleSParam(fdecayKnob,FDEC)
		handleSParam(fsustainKnob,FSUS)
		handleSParam(freleaseKnob,FREL)

		handleSParam(osc1MixKnob,OSC1MIX)
		handleSParam(osc2MixKnob,OSC2MIX)
		handleSParam(noiseMixKnob,NOISEMIX)
		handleSParam(voiceDetuneKnob,UDET)

		handleSParam(filterDetuneKnob,FILTERDER)
		handleSParam(envelopeDetuneKnob,ENVDER)
		handleSParam(portamentoDetuneKnob,PORTADER)

		handleSParam(lfoFrequencyKnob,LFOFREQ)
		handleSParam(lfoAmt1Knob,LFO1AMT)
		handleSParam(lfoAmt2Knob,LFO2AMT)

				handleSParam(pan1Knob,PAN1)
		handleSParam(pan2Knob,PAN2)
		handleSParam(pan3Knob,PAN3)
		handleSParam(pan4Knob,PAN4)
		handleSParam(pan5Knob,PAN5)
		handleSParam(pan6Knob,PAN6)
		handleSParam(pan7Knob,PAN7)
		handleSParam(pan8Knob,PAN8)

		handleSParam(tuneKnob,TUNE)
		handleSParam(brightnessKnob,BRIGHTNESS)
		handleSParam(envPitchModKnob,ENVPITCH)

		handleSParam(bendLfoRateKnob,BENDLFORATE)
		handleSParam(veloAmpEnvKnob,VAMPENV)
		handleSParam(veloFltEnvKnob,VFLTENV)
		handleSParam(transposeKnob,OCTAVE)
		//magic crystal
	{};



	//else if(c == cutoffKnob)
	//{sp(CUTOFF);}
	//else if(c == resonanceKnob)
	//{sp(RESONANCE);}
	//else if(c == portamentoKnob)
	//{sp(PORTAMENTO);}
	//else if(c == volumeKnob)
	//{sp(VOLUME);}
	//else if(c == osc1PitchKnob)
	//{sp(OSC1P);}
	//else if (c == osc2PitchKnob)
	//{sp(OSC2P);}
}
//==============================================================================
void ObxdAudioProcessorEditor::changeListenerCallback (ChangeBroadcaster* source)
{
	ObxdAudioProcessor* filter = getFilter();
	float pr[PARAM_COUNT];
	filter->getCallbackLock().enter();
	for(int i = 0 ; i < PARAM_COUNT;++i)
		pr[i] = filter->programs.currentProgramPtr->values[i];
	filter->getCallbackLock().exit();
#define rn(T,P) (T->setValue(pr[P],dontSendNotification));
	rn(cutoffKnob,CUTOFF)
		rn(resonanceKnob,RESONANCE)
		rn(volumeKnob,VOLUME)
		rn(osc1PitchKnob,OSC1P)
		rn(osc2PitchKnob,OSC2P)
		rn(osc2DetuneKnob,OSC2_DET)
		rn(portamentoKnob,PORTAMENTO)
		rn(filterEnvelopeAmtKnob,ENVELOPE_AMT)
		rn(pulseWidthKnob,PW)
		rn(xmodKnob,XMOD)
		rn(multimodeKnob,MULTIMODE)
		rn(brightnessKnob,BRIGHTNESS)
		rn(envPitchModKnob,ENVPITCH)

		rn(attackKnob,LATK)
		rn(decayKnob,LDEC)
		rn(sustainKnob,LSUS)
		rn(releaseKnob,LREL)

		rn(fattackKnob,FATK)
		rn(fdecayKnob,FDEC)
		rn(fsustainKnob,FSUS)
		rn(freleaseKnob,FREL)

		rn(osc1MixKnob,OSC1MIX)
		rn(osc2MixKnob,OSC2MIX)
		rn(noiseMixKnob,NOISEMIX)
		rn(voiceDetuneKnob,UDET)

		rn(lfoFrequencyKnob,LFOFREQ)
		rn(lfoAmt1Knob,LFO1AMT)
		rn(lfoAmt2Knob,LFO2AMT)
		rn(tuneKnob,TUNE)
		rn(bendLfoRateKnob,BENDLFORATE)
		rn(veloAmpEnvKnob,VAMPENV)
		rn(veloFltEnvKnob,VFLTENV)
		//buttons
		rn(hardSyncButton,OSC2HS)
		rn(osc1SawButton,OSC1Saw)
		rn(osc2SawButton,OSC2Saw)
		rn(osc1PulButton,OSC1Pul)
		rn(osc2PulButton,OSC2Pul)

		rn(filterKeyFollowButton,FLT_KF)
		rn(pitchQuantButton,OSCQuantize)
		rn(unisonButton,UNISON)

		rn(filterDetuneKnob,FILTERDER)
		rn(envelopeDetuneKnob,ENVDER)
		rn(portamentoDetuneKnob,PORTADER)

		rn(filterHQButton,FILTER_WARM)
		rn(filterBPBlendButton,BANDPASS)
		rn(lfoSinButton,LFOSINWAVE)
		rn(lfoSquareButton,LFOSQUAREWAVE)
		rn(lfoSHButton,LFOSHWAVE)

		rn(bendOsc2OnlyButton,BENDOSC2)
		rn(bendRangeButton,BENDRANGE)

		rn(lfoOsc1Button,LFOOSC1)
		rn(lfoOsc2Button,LFOOSC2)
		rn(lfoFilterButton,LFOFILTER)
		rn(lfoPwm1Button,LFOPW1)
		rn(lfoPwm2Button,LFOPW2)
		rn(fourPoleButton,FOURPOLE)

		rn(transposeKnob,OCTAVE)

		rn(pan1Knob,PAN1)
		rn(pan2Knob,PAN2)
		rn(pan3Knob,PAN3)
		rn(pan4Knob,PAN4)
		rn(pan5Knob,PAN5)
		rn(pan6Knob,PAN6)
		rn(pan7Knob,PAN7)
		rn(pan8Knob,PAN8)

		rn(voiceSwitch,VOICE_COUNT)
		rn(legatoSwitch,LEGATOMODE)
		rn(asPlayedAllocButton,ASPLAYEDALLOCATION)
		rn(midiLearnButton,MIDILEARN)
		rn(midiUnlearnButton,UNLEARN)

}
void ObxdAudioProcessorEditor::paint (Graphics& g)
{
	g.fillAll (Colours::white);

	const Image image = ImageCache::getFromMemory(res::background_png,res::background_pngSize);
    g.drawImage (image,
                 0, 0, image.getWidth(), image.getHeight(),
                 0, 0, image.getWidth(), image.getHeight());
}