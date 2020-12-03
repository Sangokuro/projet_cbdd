#pragma once
#include "CL_svc_gestionCatalogue.h"

namespace projet_cbdd {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	public ref class Catalogue : public System::Windows::Forms::Form
	{
	public:
		Catalogue(void)
		{
			InitializeComponent();

		}

	protected:

		~Catalogue()
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
	private: System::Windows::Forms::TextBox^ txt_idCatalogue;
	private: System::Windows::Forms::TextBox^ txt_prixarticleht;
	private: System::Windows::Forms::TextBox^ txt_quantiteStock;









	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txt_message;


	private: System::Windows::Forms::Label^ label4;

	private: NS_Svc::CL_svc_gestionCatalogue^ processusCatalogue;

	private: Data::DataSet^ ds;
	private: Data::DataSet^ ds2;
	private: int index;
	private: String^ mode;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TextBox^ txt_seuilRea;
	private: System::Windows::Forms::TextBox^ txt_tauxTva;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txt_idArticle;

	private: System::Windows::Forms::Label^ label7;


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
			this->txt_idCatalogue = (gcnew System::Windows::Forms::TextBox());
			this->txt_prixarticleht = (gcnew System::Windows::Forms::TextBox());
			this->txt_quantiteStock = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txt_message = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->txt_seuilRea = (gcnew System::Windows::Forms::TextBox());
			this->txt_tauxTva = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txt_idArticle = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
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
			this->newButton->Click += gcnew System::EventHandler(this, &Catalogue::newButton_Click);
			// 
			// saveButton
			// 
			this->saveButton->Location = System::Drawing::Point(348, 67);
			this->saveButton->Name = L"saveButton";
			this->saveButton->Size = System::Drawing::Size(129, 171);
			this->saveButton->TabIndex = 3;
			this->saveButton->Text = L"ENREGISTRER";
			this->saveButton->UseVisualStyleBackColor = true;
			this->saveButton->Click += gcnew System::EventHandler(this, &Catalogue::saveButton_Click);
			// 
			// modifButton
			// 
			this->modifButton->Location = System::Drawing::Point(263, 135);
			this->modifButton->Name = L"modifButton";
			this->modifButton->Size = System::Drawing::Size(79, 36);
			this->modifButton->TabIndex = 4;
			this->modifButton->Text = L"Modifier";
			this->modifButton->UseVisualStyleBackColor = true;
			this->modifButton->Click += gcnew System::EventHandler(this, &Catalogue::modifButton_Click);
			// 
			// deleteButton
			// 
			this->deleteButton->Location = System::Drawing::Point(263, 195);
			this->deleteButton->Name = L"deleteButton";
			this->deleteButton->Size = System::Drawing::Size(79, 36);
			this->deleteButton->TabIndex = 5;
			this->deleteButton->Text = L"Supprimer";
			this->deleteButton->UseVisualStyleBackColor = true;
			this->deleteButton->Click += gcnew System::EventHandler(this, &Catalogue::deleteButton_Click);
			// 
			// beginButton
			// 
			this->beginButton->Location = System::Drawing::Point(12, 281);
			this->beginButton->Name = L"beginButton";
			this->beginButton->Size = System::Drawing::Size(57, 30);
			this->beginButton->TabIndex = 6;
			this->beginButton->Text = L"<<";
			this->beginButton->UseVisualStyleBackColor = true;
			this->beginButton->Click += gcnew System::EventHandler(this, &Catalogue::beginButton_Click);
			// 
			// endButton
			// 
			this->endButton->Location = System::Drawing::Point(212, 307);
			this->endButton->Name = L"endButton";
			this->endButton->Size = System::Drawing::Size(57, 30);
			this->endButton->TabIndex = 8;
			this->endButton->Text = L">>";
			this->endButton->UseVisualStyleBackColor = true;
			this->endButton->Click += gcnew System::EventHandler(this, &Catalogue::endButton_Click);
			// 
			// nextButton
			// 
			this->nextButton->Location = System::Drawing::Point(149, 301);
			this->nextButton->Name = L"nextButton";
			this->nextButton->Size = System::Drawing::Size(57, 30);
			this->nextButton->TabIndex = 9;
			this->nextButton->Text = L">";
			this->nextButton->UseVisualStyleBackColor = true;
			this->nextButton->Click += gcnew System::EventHandler(this, &Catalogue::nextButton_Click);
			// 
			// previousButton
			// 
			this->previousButton->Location = System::Drawing::Point(75, 281);
			this->previousButton->Name = L"previousButton";
			this->previousButton->Size = System::Drawing::Size(57, 30);
			this->previousButton->TabIndex = 10;
			this->previousButton->Text = L"<";
			this->previousButton->UseVisualStyleBackColor = true;
			this->previousButton->Click += gcnew System::EventHandler(this, &Catalogue::previousButton_Click);
			// 
			// txt_idCatalogue
			// 
			this->txt_idCatalogue->Location = System::Drawing::Point(19, 42);
			this->txt_idCatalogue->Name = L"txt_idCatalogue";
			this->txt_idCatalogue->Size = System::Drawing::Size(196, 22);
			this->txt_idCatalogue->TabIndex = 11;
			this->txt_idCatalogue->TextChanged += gcnew System::EventHandler(this, &Catalogue::txt_idPersonne_TextChanged);
			// 
			// txt_prixarticleht
			// 
			this->txt_prixarticleht->Location = System::Drawing::Point(19, 84);
			this->txt_prixarticleht->Name = L"txt_prixarticleht";
			this->txt_prixarticleht->Size = System::Drawing::Size(196, 22);
			this->txt_prixarticleht->TabIndex = 12;
			// 
			// txt_quantiteStock
			// 
			this->txt_quantiteStock->Location = System::Drawing::Point(19, 129);
			this->txt_quantiteStock->Name = L"txt_quantiteStock";
			this->txt_quantiteStock->Size = System::Drawing::Size(196, 22);
			this->txt_quantiteStock->TabIndex = 13;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(16, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(89, 17);
			this->label1->TabIndex = 14;
			this->label1->Text = L"ID Catalogue";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(19, 67);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(89, 17);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Prix article ht";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(19, 109);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(99, 17);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Quantite stock";
			// 
			// txt_message
			// 
			this->txt_message->Location = System::Drawing::Point(38, 343);
			this->txt_message->Multiline = true;
			this->txt_message->Name = L"txt_message";
			this->txt_message->Size = System::Drawing::Size(343, 85);
			this->txt_message->TabIndex = 17;
			this->txt_message->TextChanged += gcnew System::EventHandler(this, &Catalogue::txt_message_TextChanged);
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
			this->dataGridView1->Size = System::Drawing::Size(463, 283);
			this->dataGridView1->TabIndex = 2;
			this->dataGridView1->RowHeaderMouseClick += gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this, &Catalogue::dataGridView1_CellContentClick);
			// 
			// txt_seuilRea
			// 
			this->txt_seuilRea->Location = System::Drawing::Point(19, 173);
			this->txt_seuilRea->Name = L"txt_seuilRea";
			this->txt_seuilRea->Size = System::Drawing::Size(196, 22);
			this->txt_seuilRea->TabIndex = 19;
			// 
			// txt_tauxTva
			// 
			this->txt_tauxTva->Location = System::Drawing::Point(19, 216);
			this->txt_tauxTva->Name = L"txt_tauxTva";
			this->txt_tauxTva->Size = System::Drawing::Size(196, 22);
			this->txt_tauxTva->TabIndex = 20;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(19, 153);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(176, 17);
			this->label5->TabIndex = 21;
			this->label5->Text = L"Seuil reapprovisionnement";
			this->label5->Click += gcnew System::EventHandler(this, &Catalogue::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(19, 198);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(62, 17);
			this->label6->TabIndex = 22;
			this->label6->Text = L"Taux tva";
			// 
			// txt_idArticle
			// 
			this->txt_idArticle->Location = System::Drawing::Point(164, 273);
			this->txt_idArticle->Name = L"txt_idArticle";
			this->txt_idArticle->Size = System::Drawing::Size(196, 22);
			this->txt_idArticle->TabIndex = 23;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(161, 253);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(61, 17);
			this->label7->TabIndex = 24;
			this->label7->Text = L"id article";
			// 
			// Catalogue
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1040, 466);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txt_idArticle);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txt_tauxTva);
			this->Controls->Add(this->txt_seuilRea);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txt_message);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_quantiteStock);
			this->Controls->Add(this->txt_prixarticleht);
			this->Controls->Add(this->txt_idCatalogue);
			this->Controls->Add(this->previousButton);
			this->Controls->Add(this->nextButton);
			this->Controls->Add(this->endButton);
			this->Controls->Add(this->beginButton);
			this->Controls->Add(this->deleteButton);
			this->Controls->Add(this->modifButton);
			this->Controls->Add(this->saveButton);
			this->Controls->Add(this->newButton);
			this->Name = L"Catalogue";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Catalogue::FRM_Principal_Load);
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
		this->processusCatalogue = gcnew NS_Svc::CL_svc_gestionCatalogue();
		this->loadData(this->index);
		loadDataGridView();
		this->txt_message->Text = "Data chargées";

		this->index = 0;
	}

	private: void loadData(int index) {
		this->ds->Clear();
		//si exception ici il faut remplir la table
		this->ds = this->processusCatalogue->listeCatalogue("liste");
		this->txt_idCatalogue->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[0]);
		this->txt_prixarticleht->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[1]);
		this->txt_quantiteStock->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[2]);
		this->txt_seuilRea->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[3]);
		this->txt_tauxTva->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[4]);
		//this->txt_idArticle->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[5]);
	}
	private: void loadDataGridView() {
		dataGridView1->DataSource = this->processusCatalogue->listeCatalogue("liste2");
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
		this->txt_idCatalogue->Clear();
		this->txt_prixarticleht->Clear();
		this->txt_quantiteStock->Clear();
		this->txt_seuilRea->Clear();
		this->txt_tauxTva->Clear();
		this->txt_idArticle->Clear();
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
			Id = this->processusCatalogue->ajouter(Convert::ToInt32(this->txt_prixarticleht->Text), Convert::ToInt32(this->txt_quantiteStock->Text)
				, Convert::ToInt32(this->txt_seuilRea->Text), Convert::ToInt32(this->txt_tauxTva->Text));
			this->txt_message->Text = "L'ID généré est le : " + Id + ". ";
		}

		else if (this->mode == "maj")
		{
			this->processusCatalogue->modifier(Convert::ToInt32(this->txt_idCatalogue->Text), Convert::ToInt32(this->txt_prixarticleht->Text), Convert::ToInt32(this->txt_quantiteStock->Text)
				, Convert::ToInt32(this->txt_seuilRea->Text), Convert::ToInt32(this->txt_tauxTva->Text), 1);

		}
		else if (this->mode == "sup")
		{
			this->processusCatalogue->supprimer(Convert::ToInt32(this->txt_idCatalogue->Text));
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
