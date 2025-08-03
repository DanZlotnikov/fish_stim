using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace NH_stim_GUI
{
    static class Program
    {
        static void ConnectStim(int freq)
        {
            int stat = StimDllWrapper.Stim_ConnectToTransmitter();
            Console.WriteLine("connect: " + stat);
            stat = StimDllWrapper.SetTransceiverFrequency(freq);
            Console.WriteLine("freq: " + stat);
            int num = 0;
            StimDllWrapper.EnumerateAndSelectTarget(ref num);
            Console.WriteLine("enum: " + num);
            double bat = 0;
            StimDllWrapper.Stim_GetBatteryVoltage(ref bat);
            Console.WriteLine("battery: " + bat);
        }
        static void FireStimulus(double phaseWidth, double pulsePeriod, double amp, int pulseCount)
        {
            StimDllWrapper.FireStimulusByValues(1, 0, phaseWidth, pulsePeriod, amp, 0, pulseCount);
        }
        /// <summary>
        /// The main entry point for the application.
        /// </summary>
        [STAThread]
        static void Main()
        {
            /*          Application.EnableVisualStyles();
                        Application.SetCompatibleTextRenderingDefault(false);
                        Application.Run(new Form1());*/
            
            ConnectStim(917000000);
            
            double baseAmp = 0.000180; // microamp
            double ampDiff = 0; // microamp
            int restTime = 1000; // milliseconds
            double maxAmp = 0.000200; // 200 microamp
            int pulseCount = 50;
            
            /* Fish stimulus parameters by Kobayashi */
            double KobayashiPhaseWidth = 0.0015; // Duration of the rectangular wave spike, there will be two (+/-) so total will be x2
            double KobayashiPulsePeriod = 0.01; // The inter pulse period, meaning time between start of the first to start of the second
            /* End */
            
            
            for (int i = 0; i < 15; i++)
            {
                double amp = baseAmp + ampDiff * i;
                amp = Math.Min(amp, maxAmp);
                Console.WriteLine("Iteration " + i + ": Stimulating brain with " + amp +"A");
                FireStimulus(KobayashiPhaseWidth, KobayashiPulsePeriod, amp, pulseCount);
                Console.WriteLine("Wait  " + restTime + "s");
                System.Threading.Thread.Sleep(restTime);
            }
        }
    }
}
