using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
namespace ObsoleteTest{
	[Obsolete("A is Obsolete,Use C")]

	class A{}

	[Obsolete("B is Obsolete,Use C",true)]

	class B{}

	class C{}

	class Program
	{
		[Obsolete("FuncA is Obsolete,Use FunC")]

		static void FuncA() { }

		[Obsolete("FuncB is Obsolete,Use FunC",true)]

		static void FuncB() { }

		static void FuncC() { }

		static void Main(string[] args)
		{
			FuncA();

			FuncB();

			A a = new A();

			B b = new B();
		}    
	}
}
