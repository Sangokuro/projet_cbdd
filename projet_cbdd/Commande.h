#pragma once
#include "CL_svc_gestionCommande.h"
#include"Facture.h"

namespace projet_cbdd {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	public ref class Commande : public System::Windows::Forms::Form
	{
	public:
		Commande(void)
		{
			InitializeComponent();

		}

	protected:

		~Commande()
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
	private: System::Windows::Forms::TextBox^ txt_idCommande;


	private: System::Windows::Forms::TextBox^ txt_dateCommande;
	private: System::Windows::Forms::TextBox^ txt_dateLivraison;






	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::TextBox^ txt_message;


	private: System::Windows::Forms::Label^ label4;

	private: NS_Svc::CL_svc_gestionCommande^ processusCommande;

	private: Data::DataSet^ ds;
	private: Data::DataSet^ ds2;
	private: int index;
	private: String^ mode;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TextBox^ txt_datePaiement;
	private: System::Windows::Forms::TextBox^ txt_moyenPaiement;




	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txt_refCommande;


	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;








	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ txt_quantite;




	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ txt_nomArticle;
	private: System::Windows::Forms::Label^ label13;



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
			this->txt_idCommande = (gcnew System::Windows::Forms::TextBox());
			this->txt_dateCommande = (gcnew System::Windows::Forms::TextBox());
			this->txt_dateLivraison = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt_message = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->txt_datePaiement = (gcnew System::Windows::Forms::TextBox());
			this->txt_moyenPaiement = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txt_refCommande = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->txt_quantite = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->txt_nomArticle = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// newButton
			// 
			this->newButton->Location = System::Drawing::Point(626, 282);
			this->newButton->Name = L"newButton";
			this->newButton->Size = System::Drawing::Size(79, 36);
			this->newButton->TabIndex = 0;
			this->newButton->Text = L"Nouveau";
			this->newButton->UseVisualStyleBackColor = true;
			this->newButton->Click += gcnew System::EventHandler(this, &Commande::newButton_Click);
			// 
			// saveButton
			// 
			this->saveButton->Location = System::Drawing::Point(747, 164);
			this->saveButton->Name = L"saveButton";
			this->saveButton->Size = System::Drawing::Size(129, 171);
			this->saveButton->TabIndex = 3;
			this->saveButton->Text = L"ENREGISTRER";
			this->saveButton->UseVisualStyleBackColor = true;
			this->saveButton->Click += gcnew System::EventHandler(this, &Commande::saveButton_Click);
			// 
			// modifButton
			// 
			this->modifButton->Location = System::Drawing::Point(626, 370);
			this->modifButton->Name = L"modifButton";
			this->modifButton->Size = System::Drawing::Size(79, 36);
			this->modifButton->TabIndex = 4;
			this->modifButton->Text = L"Modifier";
			this->modifButton->UseVisualStyleBackColor = true;
			this->modifButton->Click += gcnew System::EventHandler(this, &Commande::modifButton_Click);
			// 
			// deleteButton
			// 
			this->deleteButton->Location = System::Drawing::Point(626, 437);
			this->deleteButton->Name = L"deleteButton";
			this->deleteButton->Size = System::Drawing::Size(79, 36);
			this->deleteButton->TabIndex = 5;
			this->deleteButton->Text = L"Supprimer";
			this->deleteButton->UseVisualStyleBackColor = true;
			this->deleteButton->Click += gcnew System::EventHandler(this, &Commande::deleteButton_Click);
			// 
			// beginButton
			// 
			this->beginButton->Location = System::Drawing::Point(915, 334);
			this->beginButton->Name = L"beginButton";
			this->beginButton->Size = System::Drawing::Size(57, 30);
			this->beginButton->TabIndex = 6;
			this->beginButton->Text = L"<<";
			this->beginButton->UseVisualStyleBackColor = true;
			this->beginButton->Click += gcnew System::EventHandler(this, &Commande::beginButton_Click);
			// 
			// endButton
			// 
			this->endButton->Location = System::Drawing::Point(1185, 334);
			this->endButton->Name = L"endButton";
			this->endButton->Size = System::Drawing::Size(57, 30);
			this->endButton->TabIndex = 8;
			this->endButton->Text = L">>";
			this->endButton->UseVisualStyleBackColor = true;
			this->endButton->Click += gcnew System::EventHandler(this, &Commande::endButton_Click);
			// 
			// nextButton
			// 
			this->nextButton->Location = System::Drawing::Point(1112, 334);
			this->nextButton->Name = L"nextButton";
			this->nextButton->Size = System::Drawing::Size(57, 30);
			this->nextButton->TabIndex = 9;
			this->nextButton->Text = L">";
			this->nextButton->UseVisualStyleBackColor = true;
			this->nextButton->Click += gcnew System::EventHandler(this, &Commande::nextButton_Click);
			// 
			// previousButton
			// 
			this->previousButton->Location = System::Drawing::Point(1010, 334);
			this->previousButton->Name = L"previousButton";
			this->previousButton->Size = System::Drawing::Size(57, 30);
			this->previousButton->TabIndex = 10;
			this->previousButton->Text = L"<";
			this->previousButton->UseVisualStyleBackColor = true;
			this->previousButton->Click += gcnew System::EventHandler(this, &Commande::previousButton_Click);
			// 
			// txt_idCommande
			// 
			this->txt_idCommande->Location = System::Drawing::Point(12, 42);
			this->txt_idCommande->Name = L"txt_idCommande";
			this->txt_idCommande->Size = System::Drawing::Size(189, 22);
			this->txt_idCommande->TabIndex = 11;
			this->txt_idCommande->TextChanged += gcnew System::EventHandler(this, &Commande::txt_idCommande_TextChanged);
			// 
			// txt_dateCommande
			// 
			this->txt_dateCommande->Location = System::Drawing::Point(15, 115);
			this->txt_dateCommande->Name = L"txt_dateCommande";
			this->txt_dateCommande->Size = System::Drawing::Size(196, 22);
			this->txt_dateCommande->TabIndex = 12;
			// 
			// txt_dateLivraison
			// 
			this->txt_dateLivraison->Location = System::Drawing::Point(15, 200);
			this->txt_dateLivraison->Name = L"txt_dateLivraison";
			this->txt_dateLivraison->Size = System::Drawing::Size(196, 22);
			this->txt_dateLivraison->TabIndex = 13;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(16, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(96, 17);
			this->label1->TabIndex = 14;
			this->label1->Text = L"ID Commande";
			// 
			// txt_message
			// 
			this->txt_message->Location = System::Drawing::Point(924, 388);
			this->txt_message->Multiline = true;
			this->txt_message->Name = L"txt_message";
			this->txt_message->Size = System::Drawing::Size(343, 85);
			this->txt_message->TabIndex = 17;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(9, 341);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(147, 17);
			this->label4->TabIndex = 18;
			this->label4->Text = L"Reference commande";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(916, 20);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(326, 218);
			this->dataGridView1->TabIndex = 2;
			this->dataGridView1->RowHeaderMouseClick += gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this, &Commande::dataGridView1_CellContentClick);
			// 
			// txt_datePaiement
			// 
			this->txt_datePaiement->Location = System::Drawing::Point(12, 255);
			this->txt_datePaiement->Name = L"txt_datePaiement";
			this->txt_datePaiement->Size = System::Drawing::Size(196, 22);
			this->txt_datePaiement->TabIndex = 19;
			// 
			// txt_moyenPaiement
			// 
			this->txt_moyenPaiement->Location = System::Drawing::Point(12, 316);
			this->txt_moyenPaiement->Name = L"txt_moyenPaiement";
			this->txt_moyenPaiement->Size = System::Drawing::Size(196, 22);
			this->txt_moyenPaiement->TabIndex = 20;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 79);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(131, 17);
			this->label5->TabIndex = 21;
			this->label5->Text = L"Date de commande";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(9, 164);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(114, 17);
			this->label6->TabIndex = 22;
			this->label6->Text = L"Date de livraison";
			// 
			// txt_refCommande
			// 
			this->txt_refCommande->Location = System::Drawing::Point(12, 370);
			this->txt_refCommande->Name = L"txt_refCommande";
			this->txt_refCommande->Size = System::Drawing::Size(196, 22);
			this->txt_refCommande->TabIndex = 23;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(9, 225);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(120, 17);
			this->label7->TabIndex = 25;
			this->label7->Text = L"Date de paiement";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(11, 282);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(112, 17);
			this->label8->TabIndex = 26;
			this->label8->Text = L"Moyen paiement";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(288, 296);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(196, 22);
			this->textBox5->TabIndex = 34;
			// 
			// txt_quantite
			// 
			this->txt_quantite->Location = System::Drawing::Point(288, 351);
			this->txt_quantite->Name = L"txt_quantite";
			this->txt_quantite->Size = System::Drawing::Size(196, 22);
			this->txt_quantite->TabIndex = 35;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(285, 269);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(79, 17);
			this->label11->TabIndex = 39;
			this->label11->Text = L"Prix special";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(285, 321);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(104, 17);
			this->label12->TabIndex = 40;
			this->label12->Text = L"Quantite article";
			// 
			// txt_nomArticle
			// 
			this->txt_nomArticle->Location = System::Drawing::Point(356, 444);
			this->txt_nomArticle->Name = L"txt_nomArticle";
			this->txt_nomArticle->Size = System::Drawing::Size(196, 22);
			this->txt_nomArticle->TabIndex = 41;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(353, 414);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(142, 17);
			this->label13->TabIndex = 42;
			this->label13->Text = L"Nom article concerné";
			// 
			// Commande
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1313, 489);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->txt_nomArticle);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->txt_quantite);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txt_refCommande);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txt_moyenPaiement);
			this->Controls->Add(this->txt_datePaiement);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txt_message);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_dateLivraison);
			this->Controls->Add(this->txt_dateCommande);
			this->Controls->Add(this->txt_idCommande);
			this->Controls->Add(this->previousButton);
			this->Controls->Add(this->nextButton);
			this->Controls->Add(this->endButton);
			this->Controls->Add(this->beginButton);
			this->Controls->Add(this->deleteButton);
			this->Controls->Add(this->modifButton);
			this->Controls->Add(this->saveButton);
			this->Controls->Add(this->newButton);
			this->Name = L"Commande";
			this->Text = L"Commande";
			this->Load += gcnew System::EventHandler(this, &Commande::FRM_Principal_Load);
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
		this->processusCommande = gcnew NS_Svc::CL_svc_gestionCommande();
		this->loadData(this->index);
		loadDataGridView();
		this->txt_message->Text = "Data chargées";

		this->index = 0;
	}

	private: void loadData(int index) {
		this->ds->Clear();
		//si exception ici il faut remplir la table
		this->ds = this->processusCommande->listeCommande("liste");
		this->txt_idCommande->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[0]);
		this->txt_dateCommande->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[1]);
		this->txt_dateLivraison->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[2]);
		this->txt_datePaiement->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[3]);
		this->txt_moyenPaiement->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[4]);
		this->txt_refCommande->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[5]);
		this->txt_quantite->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[7]);
	}
	private: void loadDataGridView() {
		dataGridView1->DataSource = this->processusCommande->listeCommande("liste2");
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
		this->txt_idCommande->Clear();
		this->txt_dateCommande->Clear();
		this->txt_dateLivraison->Clear();
		this->txt_datePaiement->Clear();
		this->txt_moyenPaiement->Clear();
		this->txt_refCommande->Clear();
		this->txt_quantite->Clear();
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
			Id = this->processusCommande->ajouter(Convert::ToDateTime(this->txt_dateCommande->Text), Convert::ToDateTime(this->txt_dateLivraison->Text),
				Convert::ToDateTime(this->txt_datePaiement->Text), this->txt_moyenPaiement->Text, this->txt_refCommande->Text, Convert::ToInt32(this->txt_quantite->Text), this->txt_nomArticle->Text);
			this->txt_message->Text = "L'ID généré est le : " + Id + ". ";
		}
		else if (this->mode == "maj")
		{
			this->processusCommande->modifier(Convert::ToInt32(this->txt_idCommande->Text), Convert::ToDateTime(this->txt_dateCommande->Text), Convert::ToDateTime(this->txt_dateLivraison->Text),
				Convert::ToDateTime(this->txt_datePaiement->Text), this->txt_moyenPaiement->Text, Convert::ToInt32(this->txt_quantite->Text), this->txt_refCommande->Text);
		}
		else if (this->mode == "sup")
		{
			this->processusCommande->supprimer(Convert::ToInt32(this->txt_idCommande->Text));
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
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void txt_idCommande_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
