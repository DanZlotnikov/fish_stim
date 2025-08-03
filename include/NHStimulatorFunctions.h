#ifndef NH_STIM_FUNCTIONS_H
#define NH_STIM_FUNCTIONS_H

#pragma pack(4)
struct StimulusParameters
{
	int FirstElectrode;
	int SecondElectrode;
	double PhaseWidth;
	double PulsePeriod;
	double Amplitude1;
	double Amplitude2;
	int PulseCount;
};
typedef StimulusParameters StimulusRecord;

//  BASIC USEFUL FUNCTIONS
int Stim_ConnectToTransmitter();
int SetTransceiverFrequency(int freq);
int EnumerateAndSelectTarget(int* targetSelected);
int GetParameter(int Zone, int index, int* value);
int SetParameter(int Zone, int index, int value);
int FireStimulusByValues(int FirstElectrode, int SecondElectrode, double PhaseWidth, double PulsePeriod, double Amplitude1, double Amplitude2, int PulseCount);
int GenerateToneTrain(int freq, int cycletime, int ontime, int quantity);
int Stim_GetBatteryVoltage(double* volts);
int Stim_MeasureImpedance(int ElectrodeIndex, double* impedance);
int SendStringToRemoteGPS(char* pch);
int GetOldestStringFromRemoteGPS(char* pch);


// FUNCTIONS FOR ADVANCED PROGRAMMING
int EnumerateTargets(int* numberfound, void* pIDlist);
int MeasureADCInteger(int Channel, int* value);
int MeasureRSSIInteger(int* RSSI);
int FireStimulusByRecordPointer(StimulusRecord* FSRPointer);
int MeasureImpedanceInteger(int Index, int* value);
int ReadTransceiverRSSI(int* rssi);
int SerialNumberofRestartMessage(void* BP, int bufsize);
int ReadRemoteRSSINow(int Frequency, unsigned char* rssi);
int GetDongleMsTimer();
int ConnectTransceiver(int index, int ifsmart);


//  ** T R A C I N G ,  E R R O R   A N D   M E S S A G E    H A N D L I N G ***
int Stim_Subtract(int A, int B);
int NumberOfMessagesWaiting();
int  NumberOfUnsolicitedReceptions();
int NumberOfErrorStrings();
char* GetNextMessage();
char* GetNextErrorString();
char* ErrorCodeToString(int EC);
int GetNextUnsolicitedReception(void* PointerforReceivedBytes, int* numberOfReceivedBytes);
int FetchNewSignals(int* TTLEventCOunt, int* MSGlength, void* TTLEventPtr, char* UnsolicitedMessage);
void SetTraceLevel(int n);
void ClearMessageBuffer();
void ClearUnsolicitedReceptions();
void ClearErrorStrings();
char* TraceDetailDescription(int Level);
char* GetSettingName(int zone, int index);

#endif //NH_STIM_FUNCTIONS_H