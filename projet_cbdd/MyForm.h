#pragma once
#include "Client.h"
#include "Commande.h"
#include"Personnel.h"
#include"Facture.h"
#include "AdresseCommande.h"
#include "Catalogue.h"
#include"Stock.h"
#include"Statistique.h"


namespace projet_cbdd {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description r�sum�e de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilis�es.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ label3;
	protected:

	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(32, 349);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(152, 43);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Gestion Client";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(219, 349);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(152, 43);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Gestion Commande";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(399, 437);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(152, 43);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Gestion Stock";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(32, 439);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(152, 41);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Gestion Statistique";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(219, 439);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(152, 41);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Gestion Personnel";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(271, 114);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(66, 30);
			this->label2->TabIndex = 7;
			this->label2->Text = L"CYC";
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(399, 349);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(152, 39);
			this->button7->TabIndex = 8;
			this->button7->Text = L"Catalogue";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label3->Location = System::Drawing::Point(144, 185);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(306, 20);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Control Your Company in One Click";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(641, 505);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"Menu";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Client^ f2 = gcnew Client;
			f2->ShowDialog();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Commande^ f3 = gcnew Commande;
			f3->ShowDialog();
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
			projet_cbdd::Personnel^ f4 = gcnew projet_cbdd::Personnel;
			f4->ShowDialog();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	projet_cbdd::Stock^ f6 = gcnew projet_cbdd::Stock;
	f6->ShowDialog();
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	projet_cbdd::Catalogue^ f5 = gcnew projet_cbdd::Catalogue;
	f5->ShowDialog();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	projet_cbdd::Statistique^ f6 = gcnew projet_cbdd::Statistique;
	f6->ShowDialog();
}
};
}
