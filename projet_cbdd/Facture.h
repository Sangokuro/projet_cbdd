#pragma once
#include "CL_svc_gestionFacture.h"

namespace projet_cbdd {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	public ref class Facture : public System::Windows::Forms::Form
	{
	public:
		Facture(int idCommande, int *idFacture)
		{
			this->idCommande = idCommande;
			*idFacture = this->idFacture2;
			InitializeComponent();

		}

	protected:
		int idCommande;
		int idFacture2;

		~Facture()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ saveButton;
	protected:

	protected:





	private: System::Windows::Forms::Button^ beginButton;
	private: System::Windows::Forms::Button^ endButton;
	private: System::Windows::Forms::Button^ nextButton;
	private: System::Windows::Forms::Button^ previousButton;
	private: System::Windows::Forms::TextBox^ txt_idFacture;

	private: System::Windows::Forms::TextBox^ txt_nom;
	private: System::Windows::Forms::TextBox^ txt_adresse;








	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txt_message;


	private: System::Windows::Forms::Label^ label4;

	private: NS_Svc::CL_svc_gestionFacture^ processusFacture;

	private: Data::DataSet^ ds;
	private: Data::DataSet^ ds2;
	private: int index;
	private: String^ mode;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TextBox^ txt_codepostale;
	private: System::Windows::Forms::TextBox^ txt_ville;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txt_serviceclient;




	private:

		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->saveButton = (gcnew System::Windows::Forms::Button());
			this->beginButton = (gcnew System::Windows::Forms::Button());
			this->endButton = (gcnew System::Windows::Forms::Button());
			this->nextButton = (gcnew System::Windows::Forms::Button());
			this->previousButton = (gcnew System::Windows::Forms::Button());
			this->txt_idFacture = (gcnew System::Windows::Forms::TextBox());
			this->txt_nom = (gcnew System::Windows::Forms::TextBox());
			this->txt_adresse = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txt_message = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->txt_codepostale = (gcnew System::Windows::Forms::TextBox());
			this->txt_ville = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txt_serviceclient = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// saveButton
			// 
			this->saveButton->Location = System::Drawing::Point(309, 55);
			this->saveButton->Name = L"saveButton";
			this->saveButton->Size = System::Drawing::Size(129, 171);
			this->saveButton->TabIndex = 3;
			this->saveButton->Text = L"ENREGISTRER";
			this->saveButton->UseVisualStyleBackColor = true;
			this->saveButton->Click += gcnew System::EventHandler(this, &Facture::saveButton_Click);
			// 
			// beginButton
			// 
			this->beginButton->Location = System::Drawing::Point(12, 281);
			this->beginButton->Name = L"beginButton";
			this->beginButton->Size = System::Drawing::Size(57, 30);
			this->beginButton->TabIndex = 6;
			this->beginButton->Text = L"<<";
			this->beginButton->UseVisualStyleBackColor = true;
			this->beginButton->Click += gcnew System::EventHandler(this, &Facture::beginButton_Click);
			// 
			// endButton
			// 
			this->endButton->Location = System::Drawing::Point(210, 307);
			this->endButton->Name = L"endButton";
			this->endButton->Size = System::Drawing::Size(57, 30);
			this->endButton->TabIndex = 8;
			this->endButton->Text = L">>";
			this->endButton->UseVisualStyleBackColor = true;
			this->endButton->Click += gcnew System::EventHandler(this, &Facture::endButton_Click);
			// 
			// nextButton
			// 
			this->nextButton->Location = System::Drawing::Point(147, 301);
			this->nextButton->Name = L"nextButton";
			this->nextButton->Size = System::Drawing::Size(57, 30);
			this->nextButton->TabIndex = 9;
			this->nextButton->Text = L">";
			this->nextButton->UseVisualStyleBackColor = true;
			this->nextButton->Click += gcnew System::EventHandler(this, &Facture::nextButton_Click);
			// 
			// previousButton
			// 
			this->previousButton->Location = System::Drawing::Point(75, 281);
			this->previousButton->Name = L"previousButton";
			this->previousButton->Size = System::Drawing::Size(57, 30);
			this->previousButton->TabIndex = 10;
			this->previousButton->Text = L"<";
			this->previousButton->UseVisualStyleBackColor = true;
			this->previousButton->Click += gcnew System::EventHandler(this, &Facture::previousButton_Click);
			// 
			// txt_idFacture
			// 
			this->txt_idFacture->Location = System::Drawing::Point(19, 42);
			this->txt_idFacture->Name = L"txt_idFacture";
			this->txt_idFacture->Size = System::Drawing::Size(196, 22);
			this->txt_idFacture->TabIndex = 11;
			// 
			// txt_nom
			// 
			this->txt_nom->Location = System::Drawing::Point(19, 84);
			this->txt_nom->Name = L"txt_nom";
			this->txt_nom->Size = System::Drawing::Size(196, 22);
			this->txt_nom->TabIndex = 12;
			// 
			// txt_adresse
			// 
			this->txt_adresse->Location = System::Drawing::Point(19, 129);
			this->txt_adresse->Name = L"txt_adresse";
			this->txt_adresse->Size = System::Drawing::Size(196, 22);
			this->txt_adresse->TabIndex = 13;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(16, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(73, 17);
			this->label1->TabIndex = 14;
			this->label1->Text = L"ID Facture";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(19, 67);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(88, 17);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Nom Societe";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(19, 109);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(111, 17);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Adresse Societe";
			// 
			// txt_message
			// 
			this->txt_message->Location = System::Drawing::Point(38, 343);
			this->txt_message->Multiline = true;
			this->txt_message->Name = L"txt_message";
			this->txt_message->Size = System::Drawing::Size(343, 85);
			this->txt_message->TabIndex = 17;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(44, 314);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(65, 17);
			this->label4->TabIndex = 18;
			this->label4->Text = L"Message";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(548, 77);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(326, 218);
			this->dataGridView1->TabIndex = 2;
			this->dataGridView1->RowHeaderMouseClick += gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this, &Facture::dataGridView1_CellContentClick);
			// 
			// txt_codepostale
			// 
			this->txt_codepostale->Location = System::Drawing::Point(19, 173);
			this->txt_codepostale->Name = L"txt_codepostale";
			this->txt_codepostale->Size = System::Drawing::Size(196, 22);
			this->txt_codepostale->TabIndex = 19;
			// 
			// txt_ville
			// 
			this->txt_ville->Location = System::Drawing::Point(19, 216);
			this->txt_ville->Name = L"txt_ville";
			this->txt_ville->Size = System::Drawing::Size(196, 22);
			this->txt_ville->TabIndex = 20;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(19, 153);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(92, 17);
			this->label5->TabIndex = 21;
			this->label5->Text = L"Code Postale";
			this->label5->Click += gcnew System::EventHandler(this, &Facture::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(19, 198);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(34, 17);
			this->label6->TabIndex = 22;
			this->label6->Text = L"Ville";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(294, 257);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(144, 17);
			this->label7->TabIndex = 23;
			this->label7->Text = L"Numéro service client";
			// 
			// txt_serviceclient
			// 
			this->txt_serviceclient->Location = System::Drawing::Point(281, 281);
			this->txt_serviceclient->Name = L"txt_serviceclient";
			this->txt_serviceclient->Size = System::Drawing::Size(196, 22);
			this->txt_serviceclient->TabIndex = 24;
			// 
			// Facture
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(925, 456);
			this->Controls->Add(this->txt_serviceclient);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txt_ville);
			this->Controls->Add(this->txt_codepostale);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txt_message);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_adresse);
			this->Controls->Add(this->txt_nom);
			this->Controls->Add(this->txt_idFacture);
			this->Controls->Add(this->previousButton);
			this->Controls->Add(this->nextButton);
			this->Controls->Add(this->endButton);
			this->Controls->Add(this->beginButton);
			this->Controls->Add(this->saveButton);
			this->Name = L"Facture";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Facture::FRM_Principal_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


		//s'éxécute au démarrage
	private: System::Void FRM_Principal_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->mode = "RIEN";
		this->ds = gcnew Data::DataSet();
		this->processusFacture = gcnew NS_Svc::CL_svc_gestionFacture();
		this->loadData(this->index);
		this->loadDataGridView();
		this->txt_message->Text = "Data chargées";

		this->index = 0;
		this->nouveau();
	}

	private: void loadData(int index) {
		this->ds->Clear();
		//si exception ici il faut remplir la table
		this->ds = this->processusFacture->listeFacture("liste");
		this->txt_idFacture->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[0]);
		this->txt_nom->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[1]);
		this->txt_adresse->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[2]);
		this->txt_codepostale->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[3]);
		this->txt_ville->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[4]);
		this->txt_serviceclient->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[5]);
	}
	private: void loadDataGridView() {
		dataGridView1->DataSource = this->processusFacture->listeFacture("liste2");
		dataGridView1->DataMember = "liste2";
	}

	private: void nouveau() {
		this->txt_idFacture->Clear();
		this->txt_nom->Clear();
		this->txt_adresse->Clear();
		this->txt_codepostale->Clear();
		this->txt_ville->Clear();
		this->txt_serviceclient->Clear();
		this->txt_message->Clear();
	}

	private: System::Void beginButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->index = 0;
		this->loadData(this->index);
		this->txt_message->Text = "Enregistrement n°:" + (this->index + 1);
	}

	private: System::Void previousButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->index > 0) {
			this->index--;
			//charge une collection précédemment enregistré avec savedata
			this->loadData(this->index);
			this->txt_message->Text = "Enregistrement n°:" + (this->index + 1);
		}
	}
	private: System::Void nextButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->index < this->ds->Tables["liste"]->Rows->Count - 1) {
			this->index++;
			//urilise la fonction plus en haut
			this->loadData(this->index);
			this->txt_message->Text = "Enregistrement n°:" + (this->index + 1);
		}
	}

	private: System::Void endButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->index = this->ds->Tables["liste"]->Rows->Count - 1;
		this->loadData(this->index);
		this->txt_message->Text = "Enregistrement n°:" + (this->index + 1);
	}

	

	private: System::Void saveButton_Click(System::Object^ sender, System::EventArgs^ e) {
		int Id;
		//utilise le nom et le prénom entré pour faire un id
		Id = this->processusFacture->ajouter(this->txt_nom->Text, this->txt_adresse->Text, Convert::ToInt32(this->txt_codepostale->Text), this->txt_ville->Text, Convert::ToInt32(this->txt_serviceclient->Text), this->idCommande);
		this->txt_message->Text = "L'ID généré est le : " + Id + ". ";
		this->idFacture2 = Id;
	}


	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellMouseEventArgs^ e) {
		//int a=this->dataGridView1->CurrentRow->Index;
		int a = e->RowIndex;
		//this->txt_idPersonne->Text = a.ToString();
		this->index = a;
		this->loadData(this->index);
		//Form1.DataGridView1.Item(y, x).Value
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
