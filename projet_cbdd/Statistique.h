#pragma once
#include "CL_svc_gestionStatistique.h"

namespace projet_cbdd {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	public ref class Statistique : public System::Windows::Forms::Form
	{
	public:
		Statistique(void)
		{
			InitializeComponent();

		}

	protected:

		~Statistique()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ saveButton;
	protected:

	protected:

	private: System::Windows::Forms::TextBox^ txt_message;


	private: System::Windows::Forms::Label^ label4;

	private: NS_Svc::CL_svc_gestionStatistique^ processusStatistique;

	private: Data::DataSet^ ds;
	private: Data::DataSet^ ds2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;

	private: System::Windows::Forms::Button^ sous_seuil;
	private: System::Windows::Forms::Button^ valeurstock;
	private: System::Windows::Forms::Button^ valeurcommerciale;

	private: System::Windows::Forms::Button^ topdesventes;
	private: System::Windows::Forms::Button^ topdesinvendus;
	private: System::Windows::Forms::Button^ depense_client;
	private: System::Windows::Forms::Button^ panier_moyen;
	private: System::Windows::Forms::Button^ ca_mois;








	private:

		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->saveButton = (gcnew System::Windows::Forms::Button());
			this->txt_message = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->sous_seuil = (gcnew System::Windows::Forms::Button());
			this->valeurstock = (gcnew System::Windows::Forms::Button());
			this->valeurcommerciale = (gcnew System::Windows::Forms::Button());
			this->topdesventes = (gcnew System::Windows::Forms::Button());
			this->topdesinvendus = (gcnew System::Windows::Forms::Button());
			this->depense_client = (gcnew System::Windows::Forms::Button());
			this->panier_moyen = (gcnew System::Windows::Forms::Button());
			this->ca_mois = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// saveButton
			// 
			this->saveButton->Location = System::Drawing::Point(0, 0);
			this->saveButton->Name = L"saveButton";
			this->saveButton->Size = System::Drawing::Size(75, 23);
			this->saveButton->TabIndex = 20;
			// 
			// txt_message
			// 
			this->txt_message->Location = System::Drawing::Point(38, 343);
			this->txt_message->Multiline = true;
			this->txt_message->Name = L"txt_message";
			this->txt_message->Size = System::Drawing::Size(343, 85);
			this->txt_message->TabIndex = 17;
			this->txt_message->TextChanged += gcnew System::EventHandler(this, &Statistique::txt_message_TextChanged);
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
			this->dataGridView1->Location = System::Drawing::Point(484, 42);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(416, 386);
			this->dataGridView1->TabIndex = 2;
			// 
			// sous_seuil
			// 
			this->sous_seuil->Location = System::Drawing::Point(283, 249);
			this->sous_seuil->Name = L"sous_seuil";
			this->sous_seuil->Size = System::Drawing::Size(98, 37);
			this->sous_seuil->TabIndex = 21;
			this->sous_seuil->Text = L"sous_seuil";
			this->sous_seuil->UseVisualStyleBackColor = true;
			this->sous_seuil->Click += gcnew System::EventHandler(this, &Statistique::sous_seuil_Click);
			// 
			// valeurstock
			// 
			this->valeurstock->Location = System::Drawing::Point(298, 175);
			this->valeurstock->Name = L"valeurstock";
			this->valeurstock->Size = System::Drawing::Size(124, 35);
			this->valeurstock->TabIndex = 22;
			this->valeurstock->Text = L"Valeur du stock";
			this->valeurstock->UseVisualStyleBackColor = true;
			this->valeurstock->Click += gcnew System::EventHandler(this, &Statistique::valeurstock_Click);
			// 
			// valeurcommerciale
			// 
			this->valeurcommerciale->Location = System::Drawing::Point(326, 101);
			this->valeurcommerciale->Name = L"valeurcommerciale";
			this->valeurcommerciale->Size = System::Drawing::Size(132, 47);
			this->valeurcommerciale->TabIndex = 23;
			this->valeurcommerciale->Text = L"Valeur commerciale";
			this->valeurcommerciale->UseVisualStyleBackColor = true;
			this->valeurcommerciale->Click += gcnew System::EventHandler(this, &Statistique::valeurcommercial_Click);
			// 
			// topdesventes
			// 
			this->topdesventes->Location = System::Drawing::Point(135, 259);
			this->topdesventes->Name = L"topdesventes";
			this->topdesventes->Size = System::Drawing::Size(96, 46);
			this->topdesventes->TabIndex = 24;
			this->topdesventes->Text = L"Top des ventes";
			this->topdesventes->UseVisualStyleBackColor = true;
			this->topdesventes->Click += gcnew System::EventHandler(this, &Statistique::topdesventes_Click);
			// 
			// topdesinvendus
			// 
			this->topdesinvendus->Location = System::Drawing::Point(135, 166);
			this->topdesinvendus->Name = L"topdesinvendus";
			this->topdesinvendus->Size = System::Drawing::Size(122, 53);
			this->topdesinvendus->TabIndex = 25;
			this->topdesinvendus->Text = L"Top des invendus";
			this->topdesinvendus->UseVisualStyleBackColor = true;
			this->topdesinvendus->Click += gcnew System::EventHandler(this, &Statistique::topdesinvendus_Click);
			// 
			// depense_client
			// 
			this->depense_client->Location = System::Drawing::Point(157, 65);
			this->depense_client->Name = L"depense_client";
			this->depense_client->Size = System::Drawing::Size(123, 44);
			this->depense_client->TabIndex = 26;
			this->depense_client->Text = L"Depense client";
			this->depense_client->UseVisualStyleBackColor = true;
			this->depense_client->Click += gcnew System::EventHandler(this, &Statistique::depense_client_Click);
			// 
			// panier_moyen
			// 
			this->panier_moyen->Location = System::Drawing::Point(23, 79);
			this->panier_moyen->Name = L"panier_moyen";
			this->panier_moyen->Size = System::Drawing::Size(98, 48);
			this->panier_moyen->TabIndex = 27;
			this->panier_moyen->Text = L"Panier Moyen";
			this->panier_moyen->UseVisualStyleBackColor = true;
			this->panier_moyen->Click += gcnew System::EventHandler(this, &Statistique::panier_moyen_Click);
			// 
			// ca_mois
			// 
			this->ca_mois->Location = System::Drawing::Point(23, 196);
			this->ca_mois->Name = L"ca_mois";
			this->ca_mois->Size = System::Drawing::Size(86, 44);
			this->ca_mois->TabIndex = 28;
			this->ca_mois->Text = L"CA sur un mois";
			this->ca_mois->UseVisualStyleBackColor = true;
			this->ca_mois->Click += gcnew System::EventHandler(this, &Statistique::ca_mois_Click);
			// 
			// Statistique
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(925, 456);
			this->Controls->Add(this->ca_mois);
			this->Controls->Add(this->panier_moyen);
			this->Controls->Add(this->depense_client);
			this->Controls->Add(this->topdesinvendus);
			this->Controls->Add(this->topdesventes);
			this->Controls->Add(this->valeurcommerciale);
			this->Controls->Add(this->valeurstock);
			this->Controls->Add(this->sous_seuil);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txt_message);
			this->Controls->Add(this->saveButton);
			this->Name = L"Statistique";
			this->Text = L"Statistiques";
			this->Load += gcnew System::EventHandler(this, &Statistique::FRM_Principal_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


		//s'éxécute au démarrage
	private: System::Void FRM_Principal_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->ds = gcnew Data::DataSet();
		this->processusStatistique = gcnew NS_Svc::CL_svc_gestionStatistique();
		//this->loadData(this->index);
		this->txt_message->Text = "Data chargées";
	}

	/*private: void loadData(int index) {
		this->ds->Clear();
		//si exception ici il faut remplir la table
		this->ds = this->processusPersonnes->listePersonnel("liste");
	}*/



	private: System::Void txt_message_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}



private: System::Void sous_seuil_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->DataSource = this->processusStatistique->listeSousSeuil("liste2");
	dataGridView1->DataMember = "liste2";
	this->txt_message->Text += "Traitement terminé.";
}
private: System::Void valeurstock_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->DataSource = this->processusStatistique->valeurduStock("liste2");
	dataGridView1->DataMember = "liste2";
	this->txt_message->Text += "Traitement terminé.";
}
private: System::Void valeurcommercial_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->DataSource = this->processusStatistique->valeurduCommerce("liste2");
	dataGridView1->DataMember = "liste2";
	this->txt_message->Text += "Traitement terminé.";
}
private: System::Void topdesventes_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->DataSource = this->processusStatistique->topdesventes("liste2");
	dataGridView1->DataMember = "liste2";
	this->txt_message->Text += "Traitement terminé.";
}
private: System::Void topdesinvendus_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->DataSource = this->processusStatistique->topdesinvendus("liste2");
	dataGridView1->DataMember = "liste2";
	this->txt_message->Text += "Traitement terminé.";
}
private: System::Void depense_client_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->DataSource = this->processusStatistique->depensedesclients("liste2");
	dataGridView1->DataMember = "liste2";
	this->txt_message->Text += "Traitement terminé.";
}
private: System::Void panier_moyen_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->DataSource = this->processusStatistique->paniermoyen("liste2");
	dataGridView1->DataMember = "liste2";
	this->txt_message->Text += "Traitement terminé.";
}
private: System::Void ca_mois_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->DataSource = this->processusStatistique->camois("liste2");
	dataGridView1->DataMember = "liste2";
	this->txt_message->Text += "Traitement terminé.";
}
};
}
