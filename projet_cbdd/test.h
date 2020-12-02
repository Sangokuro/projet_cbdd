#pragma once
#ifndef test
#define test
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System;
ref class test1
{
public:
	void comprarerstring(String^ comparer, String^ affirmer) {
		if (comparer == affirmer)
		{
			MessageBox::Show("Selection bien effectue");
		}
		else
		{
			MessageBox::Show("Selection mal effectue");
		}
	}
	void comparerstring1(String^ comparer1, String^ affirmer2)
	{
		if (comparer1 == affirmer2)
		{
			MessageBox::Show("Modifiactaion bien effectue");
		}
		else
		{
			MessageBox::Show("Modification mal effectue");
		}
	}
};
#endif // !test

