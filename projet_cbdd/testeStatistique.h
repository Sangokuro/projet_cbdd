#pragma once
#ifndef testeStatistique
#define testeStatistique
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System;

ref class testeStatistique1
{
public:

	void comparercommande(String^ comparer1, String^ affirmer1)
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
	

};
#endif // !TestPersonnel