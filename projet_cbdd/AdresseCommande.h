#pragma once
#include <string>

namespace projet_cbdd {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	public ref class AdresseCommande : public System::Windows::Forms::Form
	{
	public:
		AdresseCommande(std:: string* nom, std::string* prenom)
		{
			this->nom2 = nom;
			this->prenom2 = prenom;
			InitializeComponent();
		}

	protected:
		std::string* nom2;
		std::string* prenom2;

		~AdresseCommande()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ saveButton;
	private: System::Windows::Forms::TextBox^ txt_nom;
	protected:


	private: System::Windows::Forms::TextBox^ txt_prenom;




	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::TextBox^ txt_message;


	private: System::Windows::Forms::Label^ label4;




	private:

		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->saveButton = (gcnew System::Windows::Forms::Button());
			this->txt_nom = (gcnew System::Windows::Forms::TextBox());
			this->txt_prenom = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txt_message = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// saveButton
			// 
			this->saveButton->Location = System::Drawing::Point(254, 25);
			this->saveButton->Name = L"saveButton";
			this->saveButton->Size = System::Drawing::Size(127, 91);
			this->saveButton->TabIndex = 3;
			this->saveButton->Text = L"ENREGISTRER";
			this->saveButton->UseVisualStyleBackColor = true;
			this->saveButton->Click += gcnew System::EventHandler(this, &AdresseCommande::saveButton_Click);
			// 
			// txt_nom
			// 
			this->txt_nom->Location = System::Drawing::Point(19, 42);
			this->txt_nom->Name = L"txt_nom";
			this->txt_nom->Size = System::Drawing::Size(196, 22);
			this->txt_nom->TabIndex = 11;
			// 
			// txt_prenom
			// 
			this->txt_prenom->Location = System::Drawing::Point(19, 84);
			this->txt_prenom->Name = L"txt_prenom";
			this->txt_prenom->Size = System::Drawing::Size(196, 22);
			this->txt_prenom->TabIndex = 12;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(16, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(37, 17);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Nom";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(19, 67);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 17);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Prenom";
			// 
			// txt_message
			// 
			this->txt_message->Location = System::Drawing::Point(22, 206);
			this->txt_message->Multiline = true;
			this->txt_message->Name = L"txt_message";
			this->txt_message->Size = System::Drawing::Size(343, 85);
			this->txt_message->TabIndex = 17;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(46, 158);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(65, 17);
			this->label4->TabIndex = 18;
			this->label4->Text = L"Message";
			// 
			// AdresseCommande
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(494, 326);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txt_message);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_prenom);
			this->Controls->Add(this->txt_nom);
			this->Controls->Add(this->saveButton);
			this->Name = L"AdresseCommande";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &AdresseCommande::FRM_Principal_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


		//s'éxécute au démarrage
	private: System::Void FRM_Principal_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->nouveau();
	}

	private: void nouveau() {
		this->txt_nom->Clear();
		this->txt_prenom->Clear();
		this->txt_message->Clear();
		//this->txt_message->Text=Convert::ToString(nom)
	}


	private: System::Void saveButton_Click(System::Object^ sender, System::EventArgs^ e) {


		using namespace Runtime::InteropServices;
		const char* chars =
			(const char*)(Marshal::StringToHGlobalAnsi(this->txt_prenom->Text)).ToPointer();
		*prenom2 = chars;
		Marshal::FreeHGlobal(IntPtr((void*)chars));

		using namespace Runtime::InteropServices;
		const char* chars2 =
			(const char*)(Marshal::StringToHGlobalAnsi(this->txt_nom->Text)).ToPointer();
		*nom2 = chars2;
		Marshal::FreeHGlobal(IntPtr((void*)chars2));

	}
	};
}