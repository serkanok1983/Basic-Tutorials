using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloWorld
{
    class ItalianChef : Chef
    {
        public void MakePasta()
        {
            Console.WriteLine("The chef makes pasta");
        }
        public override void MakeSpecialDish()                  // OVERRIDING THE SUPERCLASS METHOD
        {
            Console.WriteLine("The chef makes chicken parm");
        }
    }
}
