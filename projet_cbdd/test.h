#pragma once
#ifndef test
#define test
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System;
#include "CL_map_TBCLIENT.h"
ref class test1
{
public:
	/*void comprarerstring(String^ comparer, String^ affirmer) {
		if (comparer == affirmer)
		{
			MessageBox::Show("Selection bien effectue");
		}
		else
		{
			MessageBox::Show("Selection mal effectue");
		}
	}*/
	void comparerstring1(String^ comparer1, String^ affirmer1)
	{
		if (comparer1 == affirmer1)
		{
			MessageBox::Show("Modificataion bien effectue");

		}
		else
		{
			MessageBox::Show("Modification mal effectue");
		}
	}
	void comparerstring2(String^ comparer2, String^ affirmer2)
	{
		if (comparer2 == affirmer2)
		{
			MessageBox::Show("Ajout bien effectue");

		}
		else
		{
			MessageBox::Show("Ajout mal effectue");
		}
	}
	
	void comparerstring3(String^ comparer3, String^ affirmer3)
	{
		if (comparer3 == affirmer3)
		{
			MessageBox::Show("Supression bien effectue");

		}
		else
		{
			MessageBox::Show("Supression mal effectue");
		}
	}
};
#endif // !test

