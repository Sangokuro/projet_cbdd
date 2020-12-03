#pragma once
#ifndef TestPersonnel
#define TestPersonnel
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System;
#include "CL_map_TBpersonnel.h"

ref class TestPersonnel1
{
public:
	
	void comparerpersonnel(String^ comparer1, String^ affirmer1)
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
	void comparerpersonnel1(String^ comparer2, String^ affirmer2)
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

	void comparerpersonnel2(String^ comparer3, String^ affirmer3)
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
#endif // !TestPersonnel
