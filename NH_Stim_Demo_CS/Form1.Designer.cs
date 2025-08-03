
namespace NH_stim_GUI
{
    partial class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.btn_connect_transmitter = new System.Windows.Forms.Button();
            this.text_display = new System.Windows.Forms.RichTextBox();
            this.btn_setTransceiverFreq = new System.Windows.Forms.Button();
            this.txt_freq = new System.Windows.Forms.TextBox();
            this.btn_enumAndSelect = new System.Windows.Forms.Button();
            this.btn_getBatteryVoltage = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // btn_connect_transmitter
            // 
            this.btn_connect_transmitter.Location = new System.Drawing.Point(42, 77);
            this.btn_connect_transmitter.Name = "btn_connect_transmitter";
            this.btn_connect_transmitter.Size = new System.Drawing.Size(210, 28);
            this.btn_connect_transmitter.TabIndex = 0;
            this.btn_connect_transmitter.Text = "Connect";
            this.btn_connect_transmitter.UseVisualStyleBackColor = true;
            this.btn_connect_transmitter.Click += new System.EventHandler(this.btn_ConnectTransmitterClick);
            // 
            // text_display
            // 
            this.text_display.Location = new System.Drawing.Point(530, 31);
            this.text_display.Name = "text_display";
            this.text_display.Size = new System.Drawing.Size(509, 452);
            this.text_display.TabIndex = 1;
            this.text_display.Text = "";
            // 
            // btn_setTransceiverFreq
            // 
            this.btn_setTransceiverFreq.Location = new System.Drawing.Point(42, 122);
            this.btn_setTransceiverFreq.Name = "btn_setTransceiverFreq";
            this.btn_setTransceiverFreq.Size = new System.Drawing.Size(210, 35);
            this.btn_setTransceiverFreq.TabIndex = 2;
            this.btn_setTransceiverFreq.Text = "Set Transceiver Frequency";
            this.btn_setTransceiverFreq.UseVisualStyleBackColor = true;
            this.btn_setTransceiverFreq.Click += new System.EventHandler(this.btn_setTransceiverFreq_Click);
            // 
            // txt_freq
            // 
            this.txt_freq.Location = new System.Drawing.Point(274, 128);
            this.txt_freq.Name = "txt_freq";
            this.txt_freq.Size = new System.Drawing.Size(201, 22);
            this.txt_freq.TabIndex = 3;
            // 
            // btn_enumAndSelect
            // 
            this.btn_enumAndSelect.Location = new System.Drawing.Point(42, 182);
            this.btn_enumAndSelect.Name = "btn_enumAndSelect";
            this.btn_enumAndSelect.Size = new System.Drawing.Size(210, 35);
            this.btn_enumAndSelect.TabIndex = 4;
            this.btn_enumAndSelect.Text = "Enumerate and Select";
            this.btn_enumAndSelect.UseVisualStyleBackColor = true;
            this.btn_enumAndSelect.Click += new System.EventHandler(this.btn_enumAndSelect_Click);
            // 
            // btn_getBatteryVoltage
            // 
            this.btn_getBatteryVoltage.Location = new System.Drawing.Point(42, 242);
            this.btn_getBatteryVoltage.Name = "btn_getBatteryVoltage";
            this.btn_getBatteryVoltage.Size = new System.Drawing.Size(210, 35);
            this.btn_getBatteryVoltage.TabIndex = 5;
            this.btn_getBatteryVoltage.Text = "Get battery voltage";
            this.btn_getBatteryVoltage.UseVisualStyleBackColor = true;
            this.btn_getBatteryVoltage.Click += new System.EventHandler(this.btn_getBatteryVoltage_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(1063, 495);
            this.Controls.Add(this.btn_getBatteryVoltage);
            this.Controls.Add(this.btn_enumAndSelect);
            this.Controls.Add(this.txt_freq);
            this.Controls.Add(this.btn_setTransceiverFreq);
            this.Controls.Add(this.text_display);
            this.Controls.Add(this.btn_connect_transmitter);
            this.Name = "Form1";
            this.Text = "Form1";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button btn_connect_transmitter;
        private System.Windows.Forms.RichTextBox text_display;
        private System.Windows.Forms.Button btn_setTransceiverFreq;
        private System.Windows.Forms.TextBox txt_freq;
        private System.Windows.Forms.Button btn_enumAndSelect;
        private System.Windows.Forms.Button btn_getBatteryVoltage;
    }
}

