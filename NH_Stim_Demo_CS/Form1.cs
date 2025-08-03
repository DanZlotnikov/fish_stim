using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;


namespace NH_stim_GUI
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }


        private void btn_ConnectTransmitterClick(object sender, EventArgs e)
        {
            int error_status = 0;
            try
            {
                error_status = StimDllWrapper.Stim_ConnectToTransmitter();

            }
            catch (DllNotFoundException ex)
            {
                text_display.AppendText($"Error: The DLL could not be found.\n{ex.Message}");
            }
            catch (EntryPointNotFoundException ex)
            {
                text_display.AppendText($"Error: The function could not be found inside the DLL.\n{ex.Message}");
            }
            catch (Exception ex)
            {
                text_display.AppendText($"Unexpected error: {ex.Message}\n");
            }
            if (error_status == 0)
            {
                text_display.AppendText("Successfully connected to transmitter\n");
            }
            else
            {
                text_display.AppendText($"\"Stim_ConnectToTransmitter\" returned {error_status}\n");
            }


        }

        private void btn_setTransceiverFreq_Click(object sender, EventArgs e)
        {
            int requested_freq;
            if (!int.TryParse(txt_freq.Text, out requested_freq))
            {
                text_display.AppendText($"Requested frequency must be an integer\n");
            }

            int error_status = StimDllWrapper.SetTransceiverFrequency(requested_freq);
            if (error_status == 0)
            {
                text_display.AppendText($"Transceiver frequency set to {requested_freq}\n");
            }
            else
            {
                text_display.AppendText($"\"SetTransceiverFrequency\" returned {error_status}\n");
            }


        }

        private void btn_enumAndSelect_Click(object sender, EventArgs e)
        {
            int serial_number = 0;
            int error_status = StimDllWrapper.EnumerateAndSelectTarget(ref serial_number);
            if (error_status == 0)
            {
                text_display.AppendText($"Found target {serial_number}\n");
            }
            else
            {
                text_display.AppendText($"\"EnumerateAndSelectTarget\" returned {error_status}\n");
            }
        }

        private void btn_getBatteryVoltage_Click(object sender, EventArgs e)
        {
            double voltage_returned = 0;
            int error_status = StimDllWrapper.Stim_GetBatteryVoltage(ref voltage_returned);
            if (error_status == 0)
            {
                text_display.AppendText($"Battery voltage: {voltage_returned}\n");
            }
            else
            {
                text_display.AppendText($"\"Stim_GetBatteryVoltage\" returned {error_status}\n");
            }

        }
    }
}
