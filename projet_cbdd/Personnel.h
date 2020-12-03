#pragma once
#include "CL_svc_gestionPersonnel.h"

namespace projet_cbdd {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	public ref class Personnel : public System::Windows::Forms::Form
	{
	public:
		Personnel(void)
		{
			InitializeComponent();

		}

	protected:

		~Personnel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ newButton;
	private: System::Windows::Forms::Button^ saveButton;
	protected:

	protected:

	private: System::Windows::Forms::Button^ modifButton;
	private: System::Windows::Forms::Button^ deleteButton;


	private: System::Windows::Forms::Button^ beginButton;
	private: System::Windows::Forms::Button^ endButton;
	private: System::Windows::Forms::Button^ nextButton;
	private: System::Windows::Forms::Button^ previousButton;
	private: System::Windows::Forms::TextBox^ txt_idPersonnel;
	private: System::Windows::Forms::TextBox^ txt_nomPersonnel;
	private: System::Windows::Forms::TextBox^ txt_prenomPersonnel;










	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txt_message;


	private: System::Windows::Forms::Label^ label4;

	private: NS_Svc::CL_svc_gestionpersonnel1^ processusPersonnel;
	private: Data::DataSet^ ds;
	private: Data::DataSet^ ds2;
	private: int index;
	private: String^ mode;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TextBox^ txt_nomSuperieur;
	private: System::Windows::Forms::TextBox^ txt_adressePersonnel;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txt_codePostal;
	private: System::Windows::Forms::TextBox^ txt_ville;


	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ txt_dateEmbauche;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ txt_personnelDirige;



	private:

		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->newButton = (gcnew System::Windows::Forms::Button());
			this->saveButton = (gcnew System::Windows::Forms::Button());
			this->modifButton = (gcnew System::Windows::Forms::Button());
			this->deleteButton = (gcnew System::Windows::Forms::Button());
			this->beginButton = (gcnew System::Windows::Forms::Button());
			this->endButton = (gcnew System::Windows::Forms::Button());
			this->nextButton = (gcnew System::Windows::Forms::Button());
			this->previousButton = (gcnew System::Windows::Forms::Button());
			this->txt_idPersonnel = (gcnew System::Windows::Forms::TextBox());
			this->txt_nomPersonnel = (gcnew System::Windows::Forms::TextBox());
			this->txt_prenomPersonnel = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txt_message = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->txt_nomSuperieur = (gcnew System::Windows::Forms::TextBox());
			this->txt_adressePersonnel = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txt_codePostal = (gcnew System::Windows::Forms::TextBox());
			this->txt_ville = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txt_dateEmbauche = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txt_personnelDirige = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// newButton
			// 
			this->newButton->Location = System::Drawing::Point(263, 77);
			this->newButton->Name = L"newButton";
			this->newButton->Size = System::Drawing::Size(79, 36);
			this->newButton->TabIndex = 0;
			this->newButton->Text = L"Nouveau";
			this->newButton->UseVisualStyleBackColor = true;
			this->newButton->Click += gcnew System::EventHandler(this, &Personnel::newButton_Click);
			// 
			// saveButton
			// 
			this->saveButton->Location = System::Drawing::Point(348, 67);
			this->saveButton->Name = L"saveButton";
			this->saveButton->Size = System::Drawing::Size(129, 171);
			this->saveButton->TabIndex = 3;
			this->saveButton->Text = L"ENREGISTRER";
			this->saveButton->UseVisualStyleBackColor = true;
			this->saveButton->Click += gcnew System::EventHandler(this, &Personnel::saveButton_Click);
			// 
			// modifButton
			// 
			this->modifButton->Location = System::Drawing::Point(263, 135);
			this->modifButton->Name = L"modifButton";
			this->modifButton->Size = System::Drawing::Size(79, 36);
			this->modifButton->TabIndex = 4;
			this->modifButton->Text = L"Modifier";
			this->modifButton->UseVisualStyleBackColor = true;
			this->modifButton->Click += gcnew System::EventHandler(this, &Personnel::modifButton_Click);
			// 
			// deleteButton
			// 
			this->deleteButton->Location = System::Drawing::Point(263, 195);
			this->deleteButton->Name = L"deleteButton";
			this->deleteButton->Size = System::Drawing::Size(79, 36);
			this->deleteButton->TabIndex = 5;
			this->deleteButton->Text = L"Supprimer";
			this->deleteButton->UseVisualStyleBackColor = true;
			this->deleteButton->Click += gcnew System::EventHandler(this, &Personnel::deleteButton_Click);
			// 
			// beginButton
			// 
			this->beginButton->Location = System::Drawing::Point(12, 257);
			this->beginButton->Name = L"beginButton";
			this->beginButton->Size = System::Drawing::Size(57, 30);
			this->beginButton->TabIndex = 6;
			this->beginButton->Text = L"<<";
			this->beginButton->UseVisualStyleBackColor = true;
			this->beginButton->Click += gcnew System::EventHandler(this, &Personnel::beginButton_Click);
			// 
			// endButton
			// 
			this->endButton->Location = System::Drawing::Point(211, 257);
			this->endButton->Name = L"endButton";
			this->endButton->Size = System::Drawing::Size(57, 30);
			this->endButton->TabIndex = 8;
			this->endButton->Text = L">>";
			this->endButton->UseVisualStyleBackColor = true;
			this->endButton->Click += gcnew System::EventHandler(this, &Personnel::endButton_Click);
			// 
			// nextButton
			// 
			this->nextButton->Location = System::Drawing::Point(148, 257);
			this->nextButton->Name = L"nextButton";
			this->nextButton->Size = System::Drawing::Size(57, 30);
			this->nextButton->TabIndex = 9;
			this->nextButton->Text = L">";
			this->nextButton->UseVisualStyleBackColor = true;
			this->nextButton->Click += gcnew System::EventHandler(this, &Personnel::nextButton_Click);
			// 
			// previousButton
			// 
			this->previousButton->Location = System::Drawing::Point(75, 257);
			this->previousButton->Name = L"previousButton";
			this->previousButton->Size = System::Drawing::Size(57, 30);
			this->previousButton->TabIndex = 10;
			this->previousButton->Text = L"<";
			this->previousButton->UseVisualStyleBackColor = true;
			this->previousButton->Click += gcnew System::EventHandler(this, &Personnel::previousButton_Click);
			// 
			// txt_idPersonnel
			// 
			this->txt_idPersonnel->Location = System::Drawing::Point(19, 42);
			this->txt_idPersonnel->Name = L"txt_idPersonnel";
			this->txt_idPersonnel->Size = System::Drawing::Size(196, 22);
			this->txt_idPersonnel->TabIndex = 11;
			this->txt_idPersonnel->TextChanged += gcnew System::EventHandler(this, &Personnel::txt_idPersonne_TextChanged);
			// 
			// txt_nomPersonnel
			// 
			this->txt_nomPersonnel->Location = System::Drawing::Point(19, 84);
			this->txt_nomPersonnel->Name = L"txt_nomPersonnel";
			this->txt_nomPersonnel->Size = System::Drawing::Size(196, 22);
			this->txt_nomPersonnel->TabIndex = 12;
			// 
			// txt_prenomPersonnel
			// 
			this->txt_prenomPersonnel->Location = System::Drawing::Point(19, 129);
			this->txt_prenomPersonnel->Name = L"txt_prenomPersonnel";
			this->txt_prenomPersonnel->Size = System::Drawing::Size(196, 22);
			this->txt_prenomPersonnel->TabIndex = 13;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(16, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(89, 17);
			this->label1->TabIndex = 14;
			this->label1->Text = L"ID Personnel";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(19, 67);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(105, 17);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Nom Personnel";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(19, 109);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(125, 17);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Prénom Personnel";
			// 
			// txt_message
			// 
			this->txt_message->Location = System::Drawing::Point(38, 343);
			this->txt_message->Multiline = true;
			this->txt_message->Name = L"txt_message";
			this->txt_message->Size = System::Drawing::Size(343, 85);
			this->txt_message->TabIndex = 17;
			this->txt_message->TextChanged += gcnew System::EventHandler(this, &Personnel::txt_message_TextChanged);
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
			this->dataGridView1->RowHeaderMouseClick += gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this, &Personnel::dataGridView1_CellContentClick);
			// 
			// txt_nomSuperieur
			// 
			this->txt_nomSuperieur->Location = System::Drawing::Point(19, 173);
			this->txt_nomSuperieur->Name = L"txt_nomSuperieur";
			this->txt_nomSuperieur->Size = System::Drawing::Size(196, 22);
			this->txt_nomSuperieur->TabIndex = 19;
			// 
			// txt_adressePersonnel
			// 
			this->txt_adressePersonnel->Location = System::Drawing::Point(19, 216);
			this->txt_adressePersonnel->Name = L"txt_adressePersonnel";
			this->txt_adressePersonnel->Size = System::Drawing::Size(196, 22);
			this->txt_adressePersonnel->TabIndex = 20;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(19, 153);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(100, 17);
			this->label5->TabIndex = 21;
			this->label5->Text = L"Nom Supéreur";
			this->label5->Click += gcnew System::EventHandler(this, &Personnel::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(19, 198);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(128, 17);
			this->label6->TabIndex = 22;
			this->label6->Text = L"Adresse Personnel";
			// 
			// txt_codePostal
			// 
			this->txt_codePostal->Location = System::Drawing::Point(321, 273);
			this->txt_codePostal->Name = L"txt_codePostal";
			this->txt_codePostal->Size = System::Drawing::Size(196, 22);
			this->txt_codePostal->TabIndex = 23;
			// 
			// txt_ville
			// 
			this->txt_ville->Location = System::Drawing::Point(321, 315);
			this->txt_ville->Name = L"txt_ville";
			this->txt_ville->Size = System::Drawing::Size(196, 22);
			this->txt_ville->TabIndex = 24;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(318, 253);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(84, 17);
			this->label7->TabIndex = 25;
			this->label7->Text = L"Code Postal";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(318, 295);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(34, 17);
			this->label8->TabIndex = 26;
			this->label8->Text = L"Ville";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(571, 318);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(109, 17);
			this->label9->TabIndex = 27;
			this->label9->Text = L"Date Embauche";
			// 
			// txt_dateEmbauche
			// 
			this->txt_dateEmbauche->Location = System::Drawing::Point(548, 343);
			this->txt_dateEmbauche->Name = L"txt_dateEmbauche";
			this->txt_dateEmbauche->Size = System::Drawing::Size(196, 22);
			this->txt_dateEmbauche->TabIndex = 28;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(560, 368);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(125, 17);
			this->label10->TabIndex = 29;
			this->label10->Text = L"Id personnel dirige";
			// 
			// txt_personnelDirige
			// 
			this->txt_personnelDirige->Location = System::Drawing::Point(548, 388);
			this->txt_personnelDirige->Name = L"txt_personnelDirige";
			this->txt_personnelDirige->Size = System::Drawing::Size(196, 22);
			this->txt_personnelDirige->TabIndex = 30;
			// 
			// Personnel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(925, 456);
			this->Controls->Add(this->txt_personnelDirige);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->txt_dateEmbauche);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txt_ville);
			this->Controls->Add(this->txt_codePostal);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txt_adressePersonnel);
			this->Controls->Add(this->txt_nomSuperieur);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txt_message);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_prenomPersonnel);
			this->Controls->Add(this->txt_nomPersonnel);
			this->Controls->Add(this->txt_idPersonnel);
			this->Controls->Add(this->previousButton);
			this->Controls->Add(this->nextButton);
			this->Controls->Add(this->endButton);
			this->Controls->Add(this->beginButton);
			this->Controls->Add(this->deleteButton);
			this->Controls->Add(this->modifButton);
			this->Controls->Add(this->saveButton);
			this->Controls->Add(this->newButton);
			this->Name = L"Personnel";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Personnel::FRM_Principal_Load);
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
		this->processusPersonnel = gcnew NS_Svc::CL_svc_gestionpersonnel1();
		this->loadData(this->index);
		loadDataGridView();
		this->txt_message->Text = "Data chargées";

		this->index = 0;
	}

	private: void loadData(int index) {
		this->ds->Clear();
		//si exception ici il faut remplir la table
		this->ds = this->processusPersonnel->listePersonnel("liste");
		this->txt_idPersonnel->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[0]);
		this->txt_nomPersonnel->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[1]);
		this->txt_prenomPersonnel->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[2]);
		this->txt_nomSuperieur->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[3]);
		this->txt_adressePersonnel->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[4]);
		this->txt_codePostal->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[5]);
		this->txt_ville->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[6]);
		this->txt_dateEmbauche->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[7]);
		this->txt_personnelDirige->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[8]);
	}
	private: void loadDataGridView() {
		dataGridView1->DataSource = this->processusPersonnel->listePersonnel("liste2");
		dataGridView1->DataMember = "liste2";
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

	private: System::Void newButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->txt_idPersonnel->Clear();
		this->txt_nomPersonnel->Clear();
		this->txt_prenomPersonnel->Clear();
		this->txt_nomSuperieur->Clear();
		this->txt_adressePersonnel->Clear();
		this->txt_codePostal-> Clear();
		this->txt_ville->Clear();
		this->txt_dateEmbauche->Clear();
		this->txt_personnelDirige->Clear();
		this->mode = "nouv";
		this->txt_message->Text = "Veuillez saisir les information de la nouvelle personne et enregistrer";
	}

	private: System::Void modifButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->mode = "maj";
		this->txt_message->Text = "Veuillez modifier les information de la nouvelle courante et enregistrer.";
	}

	private: System::Void deleteButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->mode = "sup";
		this->txt_message->Text = "Veuillez confirmer la suppression de la personne en cours en enregistrant.";
	}

	private: System::Void saveButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->mode == "nouv")
		{
			int Id;
			//utilise le nom et le prénom entré pour faire un id
			Id = this->processusPersonnel->ajouter(this->txt_nomPersonnel->Text, this->txt_prenomPersonnel->Text, this->txt_nomSuperieur->Text, this->txt_adressePersonnel->Text, Convert::ToInt32(this->txt_codePostal->Text), this->txt_ville->Text, Convert::ToDateTime(this->txt_dateEmbauche->Text));
			this->txt_message->Text = "L'ID généré est le : " + Id + ". ";
		}

		else if (this->mode == "maj")
		{
			this->processusPersonnel->modifier(Convert::ToInt32(this->txt_idPersonnel->Text), this->txt_nomPersonnel->Text, this->txt_prenomPersonnel->Text, this->txt_nomSuperieur->Text, this->txt_adressePersonnel->Text, Convert::ToInt32(this->txt_codePostal->Text), this->txt_ville->Text, Convert::ToDateTime(this->txt_dateEmbauche->Text),0);

		}
		else if (this->mode == "sup")
		{
			this->processusPersonnel->supprimer(Convert::ToInt32(this->txt_idPersonnel->Text));
		}
		this->index = 0;
		this->loadData(this->index);
		this->loadDataGridView();
		this->txt_message->Text += "Traitement terminé.";
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
	private: System::Void txt_message_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void txt_idPersonne_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
