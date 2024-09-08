using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace mob_tracker
{
    public partial class Form1 : Form
    {
        Image img;
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            img = Image.FromFile(@"c:\tes\tes.jpg");
        }

        private void Form1_Paint(object sender, PaintEventArgs e)
        {
            Bitmap bit_map = new Bitmap(img.Width, img.Height);
            Graphics gfx = Graphics.FromImage(bit_map);
            gfx.DrawImage(img, 0, 0);
            e.Graphics.DrawImage(bit_map, 0, 0);
        }
    }
}
