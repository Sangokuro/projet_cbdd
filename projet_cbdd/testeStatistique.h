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
			MessageBox::Show("Valeur du stock juste");

		}
		else
		{
			MessageBox::Show("Valeur du stock faux");
		}
	}
	void comparercommande1(String^ comparer2, String^ affirmer2)
	{
		if (comparer2 == affirmer2)
		{
			MessageBox::Show("Sous seuil a jour");

		}
		else
		{
			MessageBox::Show("Sous seuil pas a jour");
		}
	}
	void comparercommande2(String^ comparer3, String^ affirmer3)
	{
		if (comparer3 == affirmer3)
		{
			MessageBox::Show("Valeur commercial a jour");

		}
		else
		{
			MessageBox::Show("Valeur commercial pas a jour");
		}
	}

	void comparercommande3(String^ comparer4, String^ affirmer4)
	{
		if (comparer4 == affirmer4)
		{
			MessageBox::Show("Produit les plus vendu a jour");

		}
		else
		{
			MessageBox::Show("Produit les plus vendu pas a jour");
		}
	}
	


	

};
#endif // !TestPersonnel