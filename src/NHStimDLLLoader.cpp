#include "StdAfx.h"
#include "NHStimulatorFunctions.h"
#include <Windows.h>
#include "windef.h"
#include "NHStimDLLLoader.h"

Stim_ConnectToTransmitterPtr _Stim_ConnectToTransmitter;
SetTransceiverFrequencyPtr _SetTransceiverFrequency;
EnumerateAndSelectTargetPtr _EnumerateAndSelectTarget;
GetParameterPtr _GetParameter;
SetParameterPtr _SetParameter;
FireStimulusByValuesPtr _FireStimulusByValues;
GenerateToneTrainPtr _GenerateToneTrain;
Stim_GetBatteryVoltagePtr _Stim_GetBatteryVoltage;
Stim_MeasureImpedancePtr _Stim_MeasureImpedance;
SendStringToRemoteGPSPtr _SendStringToRemoteGPS;
GetOldestStringFromRemoteGPSPtr _GetOldestStringFromRemoteGPS;

EnumerateTargetsPtr _EnumerateTargets;
MeasureADCIntegerPtr _MeasureADCInteger;
MeasureRSSIIntegerPtr _MeasureRSSIInteger;
FireStimulusByRecordPointerPtr _FireStimulusByRecordPointer;
MeasureImpedanceIntegerPtr _MeasureImpedanceInteger;
ReadTransceiverRSSIPtr _ReadTransceiverRSSI;
SerialNumberofRestartMessagePtr _SerialNumberofRestartMessage;
ReadRemoteRSSINowPtr _ReadRemoteRSSINow;
GetDongleMsTimerPtr _GetDongleMsTimer;
ConnectTransceiverPtr _ConnectTransceiver;

Stim_SubtractPtr _Stim_Subtract;
NumberOfMessagesWaitingPtr _NumberOfMessagesWaiting;
NumberOfUnsolicitedReceptionsPtr _NumberOfUnsolicitedReceptions;
NumberOfErrorStringsPtr _NumberOfErrorStrings;
GetNextMessagePtr _GetNextMessage;
GetNextErrorStringPtr _GetNextErrorString;
ErrorCodeToStringPtr _ErrorCodeToString;
GetNextUnsolicitedReceptionPtr _GetNextUnsolicitedReception;
FetchNewSignalsPtr _FetchNewSignals;
SetTraceLevelPtr _SetTraceLevel;
ClearMessageBufferPtr _ClearMessageBuffer;
ClearUnsolicitedReceptionsPtr _ClearUnsolicitedReceptions;
ClearErrorStringsPtr _ClearErrorStrings;
TraceDetailDescriptionPtr _TraceDetailDescription;
GetSettingNamePtr _GetSettingName;

int LoadStimDLL()
{
	int error = 0;

	HINSTANCE DLL_Handle = LoadLibrary(TEXT("C:\\Deuteron\\DeuteronStimulator.dll"));
	if (DLL_Handle == NULL)
	{
		return GetLastError();
	}

	_Stim_ConnectToTransmitter = (Stim_ConnectToTransmitterPtr)GetProcAddress(DLL_Handle, "Stim_ConnectToTransmitter");
	if (_Stim_ConnectToTransmitter == NULL)
	{
		return GetLastError();
	}
	_SetTransceiverFrequency = (SetTransceiverFrequencyPtr)GetProcAddress(DLL_Handle, "SetTransceiverFrequency");
	if (_SetTransceiverFrequency == NULL)
	{
		return GetLastError();
	}
	_EnumerateAndSelectTarget = (EnumerateAndSelectTargetPtr)GetProcAddress(DLL_Handle, "EnumerateAndSelectTarget");
	if (_EnumerateAndSelectTarget == NULL)
	{
		return GetLastError();
	}
	_GetParameter = (GetParameterPtr)GetProcAddress(DLL_Handle, "GetParameter");
	if (_GetParameter == NULL)
	{
		return GetLastError();
	}
	_SetParameter = (SetParameterPtr)GetProcAddress(DLL_Handle, "SetParameter");
	if (_SetParameter == NULL)
	{
		return GetLastError();
	}
	_FireStimulusByValues = (FireStimulusByValuesPtr)GetProcAddress(DLL_Handle, "FireStimulusByValues");
	if (_FireStimulusByValues == NULL)
	{
		return GetLastError();
	}
	_GenerateToneTrain = (GenerateToneTrainPtr)GetProcAddress(DLL_Handle, "GenerateToneTrain");
	if (_GenerateToneTrain == NULL)
	{
		return GetLastError();
	}
	_Stim_GetBatteryVoltage = (Stim_GetBatteryVoltagePtr)GetProcAddress(DLL_Handle, "Stim_GetBatteryVoltage");
	if (_Stim_GetBatteryVoltage == NULL)
	{
		return GetLastError();
	}
	_Stim_MeasureImpedance = (Stim_MeasureImpedancePtr)GetProcAddress(DLL_Handle, "Stim_MeasureImpedance");
	if (_Stim_MeasureImpedance == NULL)
	{
		return GetLastError();
	}
	_SendStringToRemoteGPS = (SendStringToRemoteGPSPtr)GetProcAddress(DLL_Handle, "SendStringToRemoteGPS");
	if (_SendStringToRemoteGPS == NULL)
	{
		return GetLastError();
	}
	_GetOldestStringFromRemoteGPS = (GetOldestStringFromRemoteGPSPtr)GetProcAddress(DLL_Handle, "GetOldestStringFromRemoteGPS");
	if (_GetOldestStringFromRemoteGPS == NULL)
	{
		return GetLastError();
	}

	_EnumerateTargets = (EnumerateTargetsPtr)GetProcAddress(DLL_Handle, "EnumerateTargets");
	_MeasureADCInteger = (MeasureADCIntegerPtr)GetProcAddress(DLL_Handle, "MeasureADCInteger");
	_MeasureRSSIInteger = (MeasureRSSIIntegerPtr)GetProcAddress(DLL_Handle, "MeasureRSSIInteger");
	_FireStimulusByRecordPointer = (FireStimulusByRecordPointerPtr)GetProcAddress(DLL_Handle, "FireStimulusByRecordPointer");
	_MeasureImpedanceInteger = (MeasureImpedanceIntegerPtr)GetProcAddress(DLL_Handle, "MeasureImpedanceInteger");
	_ReadTransceiverRSSI = (ReadTransceiverRSSIPtr)GetProcAddress(DLL_Handle, "ReadTransceiverRSSI");
	_SerialNumberofRestartMessage = (SerialNumberofRestartMessagePtr)GetProcAddress(DLL_Handle, "SerialNumberofRestartMessage");
	_ReadRemoteRSSINow = (ReadRemoteRSSINowPtr)GetProcAddress(DLL_Handle, "ReadRemoteRSSINow");
	_GetDongleMsTimer = (GetDongleMsTimerPtr)GetProcAddress(DLL_Handle, "GetDongleMsTimer");
	_ConnectTransceiver = (ConnectTransceiverPtr)GetProcAddress(DLL_Handle, "ConnectTransceiver");

	_Stim_Subtract = (Stim_SubtractPtr)GetProcAddress(DLL_Handle, "Stim_Subtract");
	_NumberOfMessagesWaiting = (NumberOfMessagesWaitingPtr)GetProcAddress(DLL_Handle, "NumberOfMessagesWaiting");
	_NumberOfUnsolicitedReceptions = (NumberOfUnsolicitedReceptionsPtr)GetProcAddress(DLL_Handle, "NumberOfUnsolicitedReceptions");
	_NumberOfErrorStrings = (NumberOfErrorStringsPtr)GetProcAddress(DLL_Handle, "NumberOfErrorStrings");
	_GetNextMessage = (GetNextMessagePtr)GetProcAddress(DLL_Handle, "GetNextMessage");
	_GetNextErrorString = (GetNextErrorStringPtr)GetProcAddress(DLL_Handle, "GetNextErrorString");
	_ErrorCodeToString = (ErrorCodeToStringPtr)GetProcAddress(DLL_Handle, "ErrorCodeToString");
	_GetNextUnsolicitedReception = (GetNextUnsolicitedReceptionPtr)GetProcAddress(DLL_Handle, "GetNextUnsolicitedReception");
	_FetchNewSignals = (FetchNewSignalsPtr)GetProcAddress(DLL_Handle, "FetchNewSignals");
	_SetTraceLevel = (SetTraceLevelPtr)GetProcAddress(DLL_Handle, "SetTraceLevel");
	_ClearMessageBuffer = (ClearMessageBufferPtr)GetProcAddress(DLL_Handle, "ClearMessageBuffer");
	_ClearUnsolicitedReceptions = (ClearUnsolicitedReceptionsPtr)GetProcAddress(DLL_Handle, "ClearUnsolicitedReceptions");
	_ClearErrorStrings = (ClearErrorStringsPtr)GetProcAddress(DLL_Handle, "ClearErrorStrings");
	_TraceDetailDescription = (TraceDetailDescriptionPtr)GetProcAddress(DLL_Handle, "TraceDetailDescription");
	_GetSettingName = (GetSettingNamePtr)GetProcAddress(DLL_Handle, "GetSettingName");

	return error;
}






