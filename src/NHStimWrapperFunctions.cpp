#include "NHStimDLLLoader.h"

int Stim_ConnectToTransmitter()
{
	return _Stim_ConnectToTransmitter();
}

int SetTransceiverFrequency(int freq)
{
	return _SetTransceiverFrequency(freq);
}

int EnumerateAndSelectTarget(int* targetSelected)
{
	return _EnumerateAndSelectTarget(targetSelected);
}

int GetParameter(int Zone, int index, int* value)
{
	return _GetParameter(Zone, index, value);
}

int SetParameter(int Zone, int index, int value)
{
	return _SetParameter(Zone, index, value);
}

int FireStimulusByValues(int FirstElectrode, int SecondElectrode, double PhaseWidth, double PulsePeriod, double Amplitude1, double Amplitude2, int PulseCount)
{
	return _FireStimulusByValues(FirstElectrode, SecondElectrode, PhaseWidth, PulsePeriod, Amplitude1, Amplitude2, PulseCount);
}

int GenerateToneTrain(int freq, int cycletime, int ontime, int quantity)
{
	return _GenerateToneTrain(freq, cycletime, ontime, quantity);
}

int Stim_GetBatteryVoltage(double* volts)
{
	return _Stim_GetBatteryVoltage(volts);
}

int Stim_MeasureImpedance(int ElectrodeIndex, double* impedance)
{
	return _Stim_MeasureImpedance(ElectrodeIndex, impedance);
}

int SendStringToRemoteGPS(char* pch)
{
	return _SendStringToRemoteGPS(pch);
}

int GetOldestStringFromRemoteGPS(char* pch)
{
	return _GetOldestStringFromRemoteGPS(pch);
}



int EnumerateTargets(int* numberfound, void* pIDlist)
{
	return _EnumerateTargets(numberfound, pIDlist);
}

int MeasureADCInteger(int Channel, int* value)
{
	return _MeasureADCInteger(Channel, value);
}

int MeasureRSSIInteger(int* RSSI)
{
	return _MeasureRSSIInteger(RSSI);
}

int FireStimulusByRecordPointer(void* FSRPointer)
{
	return _FireStimulusByRecordPointer(FSRPointer);
}

int MeasureImpedanceInteger(int Index, int* value)
{
	return _MeasureImpedanceInteger(Index, value);
}

int ReadTransceiverRSSI(int* rssi)
{
	return _ReadTransceiverRSSI(rssi);
}

int SerialNumberofRestartMessage(void* BP, int bufsize)
{
	return _SerialNumberofRestartMessage(BP, bufsize);
}

int ReadRemoteRSSINow(int Frequency, unsigned char* rssi)
{
	return _ReadRemoteRSSINow(Frequency, rssi);
}

int GetDongleMsTimer()
{
	return _GetDongleMsTimer();
}

int ConnectTransceiver(int index, int ifsmart)
{
	return _ConnectTransceiver(index, ifsmart);
}


int Stim_Subtract(int A, int B)
{
	return _Stim_Subtract(A, B);
}

int NumberOfMessagesWaiting()
{
	return _NumberOfMessagesWaiting();
}

int  NumberOfUnsolicitedReceptions()
{
	return _NumberOfUnsolicitedReceptions();
}

int NumberOfErrorStrings()
{
	return _NumberOfErrorStrings();
}

char* GetNextMessage()
{
	return _GetNextMessage();
}

char* GetNextErrorString()
{
	return _GetNextErrorString();
}

char* ErrorCodeToString(int EC)
{
	return _ErrorCodeToString(EC);
}

int GetNextUnsolicitedReception(void* PointerforReceivedBytes, int* numberOfReceivedBytes)
{
	return _GetNextUnsolicitedReception(PointerforReceivedBytes, numberOfReceivedBytes);
}

int FetchNewSignals(int* TTLEventCOunt, int* MSGlength, void* TTLEventPtr, char* UnsolicitedMessage)
{
	return _FetchNewSignals(TTLEventCOunt, MSGlength, TTLEventPtr, UnsolicitedMessage);
}

void SetTraceLevel(int n)
{
	return _SetTraceLevel(n);
}

void ClearMessageBuffer()
{
	return _ClearMessageBuffer();
}

void ClearUnsolicitedReceptions()
{
	return _ClearUnsolicitedReceptions();
}

void ClearErrorStrings()
{
	return _ClearErrorStrings();
}

char* TraceDetailDescription(int Level)
{
	return _TraceDetailDescription(Level);
}

char* GetSettingName(int zone, int index)
{
	return _GetSettingName(zone, index);
}