using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Runtime.InteropServices;


namespace NH_stim_GUI
{
    class StimDllWrapper
    {
        // Ensure the DLL is in the same directory as the executable
        [DllImport("DeuteronStimulator.dll", CallingConvention = CallingConvention.StdCall)]
        public static extern int Stim_ConnectToTransmitter();

        [DllImport("DeuteronStimulator.dll", CallingConvention = CallingConvention.StdCall)]
        public static extern int SetTransceiverFrequency(int freq);

        [DllImport("DeuteronStimulator.dll", CallingConvention = CallingConvention.StdCall)]
        public static extern int EnumerateAndSelectTarget(ref int targetSelected);

        [DllImport("DeuteronStimulator.dll", CallingConvention = CallingConvention.StdCall)]
        public static extern int Stim_GetBatteryVoltage(ref double volts);

        [DllImport("DeuteronStimulator.dll", CallingConvention = CallingConvention.StdCall)]
        public static extern int FireStimulusByValues(
            int FirstElectrode, 
            int SecondElectrode,
            double PhaseWidth,
            double PulsePeriod,
            double Amplitude1,
            double Amplitude2,
            int PulseCount
        );
    }
}
