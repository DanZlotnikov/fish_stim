#ifndef NH_STIM_DLL_LOADER_H
#define NH_STIM_DLL_LOADER_H

//  BASIC USEFUL FUNCTIONS
typedef int (__stdcall* Stim_ConnectToTransmitterPtr)();
typedef int (__stdcall* SetTransceiverFrequencyPtr)(int freq);
typedef int (__stdcall* EnumerateAndSelectTargetPtr)(int* targetSelected);
typedef int (__stdcall* GetParameterPtr)(int Zone, int index, int* value);
typedef int (__stdcall* SetParameterPtr)(int Zone, int index, int value);
typedef int (__stdcall* FireStimulusByValuesPtr)(int FirstElectrode, int SecondElectrode, double PhaseWidth, double PulsePeriod, double Amplitude1, double Amplitude2, int PulseCount);
typedef int (__stdcall* GenerateToneTrainPtr)(int freq, int cycletime, int ontime, int quantity);
typedef int (__stdcall* Stim_GetBatteryVoltagePtr)(double* volts);
typedef int (__stdcall* Stim_MeasureImpedancePtr)(int ElectrodeIndex, double* impedance);
typedef int (__stdcall* SendStringToRemoteGPSPtr)(char* pch);
typedef int (__stdcall* GetOldestStringFromRemoteGPSPtr)(char* pch);


// FUNCTIONS FOR ADVANCED PROGRAMMING
typedef int (__stdcall* EnumerateTargetsPtr)(int* numberfound, void* pIDlist);
typedef int (__stdcall* MeasureADCIntegerPtr)(int Channel, int* value);
typedef int (__stdcall* MeasureRSSIIntegerPtr)(int* RSSI);
typedef int (__stdcall* FireStimulusByRecordPointerPtr)(void* FSRPointer);
typedef int (__stdcall* MeasureImpedanceIntegerPtr)(int Index, int* value);
typedef int (__stdcall* ReadTransceiverRSSIPtr)(int* rssi);
typedef int (__stdcall* SerialNumberofRestartMessagePtr)(void* BP, int bufsize);
typedef int (__stdcall* ReadRemoteRSSINowPtr)(int Frequency, unsigned char* rssi);
typedef int (__stdcall* GetDongleMsTimerPtr)();
typedef int (__stdcall* ConnectTransceiverPtr)(int index, int ifsmart);


//  ** T R A C I N G ,  E R R O R   A N D   M E S S A G E    H A N D L I N G ***
typedef int (__stdcall* Stim_SubtractPtr)(int A, int B);
typedef int (__stdcall* NumberOfMessagesWaitingPtr)();
typedef int (__stdcall*  NumberOfUnsolicitedReceptionsPtr)();
typedef int (__stdcall* NumberOfErrorStringsPtr)();
typedef char* (__stdcall* GetNextMessagePtr)();
typedef char* (__stdcall* GetNextErrorStringPtr)();
typedef char* (__stdcall* ErrorCodeToStringPtr)(int EC);
typedef int (__stdcall* GetNextUnsolicitedReceptionPtr)(void* PointerforReceivedBytes, int* numberOfReceivedBytes);
typedef int (__stdcall* FetchNewSignalsPtr)(int* TTLEventCOunt, int* MSGlength, void* TTLEventPtr, char* UnsolicitedMessage);
typedef void (__stdcall* SetTraceLevelPtr)(int n);
typedef void (__stdcall* ClearMessageBufferPtr)();
typedef void (__stdcall* ClearUnsolicitedReceptionsPtr)();
typedef void (__stdcall* ClearErrorStringsPtr)();
typedef char* (__stdcall* TraceDetailDescriptionPtr)(int Level);
typedef char* (__stdcall* GetSettingNamePtr)(int zone, int index);

//External function pointer declarations
extern Stim_ConnectToTransmitterPtr _Stim_ConnectToTransmitter;
extern SetTransceiverFrequencyPtr _SetTransceiverFrequency;
extern EnumerateAndSelectTargetPtr _EnumerateAndSelectTarget;
extern GetParameterPtr _GetParameter;
extern SetParameterPtr _SetParameter;
extern FireStimulusByValuesPtr _FireStimulusByValues;
extern GenerateToneTrainPtr _GenerateToneTrain;
extern Stim_GetBatteryVoltagePtr _Stim_GetBatteryVoltage;
extern Stim_MeasureImpedancePtr _Stim_MeasureImpedance;
extern SendStringToRemoteGPSPtr _SendStringToRemoteGPS;
extern GetOldestStringFromRemoteGPSPtr _GetOldestStringFromRemoteGPS;

extern EnumerateTargetsPtr _EnumerateTargets;
extern MeasureADCIntegerPtr _MeasureADCInteger;
extern MeasureRSSIIntegerPtr _MeasureRSSIInteger;
extern FireStimulusByRecordPointerPtr _FireStimulusByRecordPointer;
extern MeasureImpedanceIntegerPtr _MeasureImpedanceInteger;
extern ReadTransceiverRSSIPtr _ReadTransceiverRSSI;
extern SerialNumberofRestartMessagePtr _SerialNumberofRestartMessage;
extern ReadRemoteRSSINowPtr _ReadRemoteRSSINow;
extern GetDongleMsTimerPtr _GetDongleMsTimer;
extern ConnectTransceiverPtr _ConnectTransceiver;

extern Stim_SubtractPtr _Stim_Subtract;
extern NumberOfMessagesWaitingPtr _NumberOfMessagesWaiting;
extern NumberOfUnsolicitedReceptionsPtr _NumberOfUnsolicitedReceptions;
extern NumberOfErrorStringsPtr _NumberOfErrorStrings;
extern GetNextMessagePtr _GetNextMessage;
extern GetNextErrorStringPtr _GetNextErrorString;
extern ErrorCodeToStringPtr _ErrorCodeToString;
extern GetNextUnsolicitedReceptionPtr _GetNextUnsolicitedReception;
extern FetchNewSignalsPtr _FetchNewSignals;
extern SetTraceLevelPtr _SetTraceLevel;
extern ClearMessageBufferPtr _ClearMessageBuffer;
extern ClearUnsolicitedReceptionsPtr _ClearUnsolicitedReceptions;
extern ClearErrorStringsPtr _ClearErrorStrings;
extern TraceDetailDescriptionPtr _TraceDetailDescription;
extern GetSettingNamePtr _GetSettingName;

int LoadStimDLL();

#endif //NH_STIM_DLL_LOADER_H