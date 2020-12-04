#pragma once
#ifndef TestFacture
#define TestFacture
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System;

ref class TestFacture1
{
public:

	
	
	void comparerfacture(String^ comparer5, String^ affirmer5)
	{
		if (comparer5 == affirmer5)
		{
			MessageBox::Show("Facture datant de 10ans");

		}
		else
		{
			MessageBox::Show("Supression mal effectue");
		}
	}


};
#endif // !TestPersonnel