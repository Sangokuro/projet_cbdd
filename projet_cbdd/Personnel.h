#pragma once
#include"CL_svc_gestionpersonnel.h"

namespace projet_cbdd {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de Personnel
	/// </summary>
	public ref class Personnel : public System::Windows::Forms::Form
	{
	public:
		Personnel(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~Personnel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ id_personnel_txt;
	private: System::Windows::Forms::TextBox^ nom_txt;
	private: System::Windows::Forms::TextBox^ prenom_txt;
	private: System::Windows::Forms::TextBox^ nom_superieur_txt;
	private: System::Windows::Forms::TextBox^ adresse_txt;
	private: System::Windows::Forms::TextBox^ code_postal_txt;
	private: System::Windows::Forms::TextBox^ ville_txt;
	private: System::Windows::Forms::TextBox^ date_embauche_txt;
	private: System::Windows::Forms::TextBox^ id_superieur_txt;



	private: NS_Svc::CL_svc_gestionpersonnel1^ processusPersonnel;

	private: Data::DataSet^ ds;
	private: Data::DataSet^ ds2;
	private: int index;
	private: String^ mode;
	
	
	private: System::Windows::Forms::TextBox^ txt_message;



	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox10;

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->id_personnel_txt = (gcnew System::Windows::Forms::TextBox());
			this->nom_txt = (gcnew System::Windows::Forms::TextBox());
			this->prenom_txt = (gcnew System::Windows::Forms::TextBox());
			this->nom_superieur_txt = (gcnew System::Windows::Forms::TextBox());
			this->adresse_txt = (gcnew System::Windows::Forms::TextBox());
			this->code_postal_txt = (gcnew System::Windows::Forms::TextBox());
			this->ville_txt = (gcnew System::Windows::Forms::TextBox());
			this->date_embauche_txt = (gcnew System::Windows::Forms::TextBox());
			this->id_superieur_txt = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(29, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(89, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ID Personnel";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(29, 90);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nom";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(29, 145);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(57, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Prenom";
			this->label3->Click += gcnew System::EventHandler(this, &Personnel::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(29, 201);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(123, 17);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Nom du Supérieur";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(29, 260);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(60, 17);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Adresse";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(29, 317);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(84, 17);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Code Postal";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(199, 22);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(34, 17);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Ville";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(199, 90);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(119, 17);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Date d\'embauche";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(199, 145);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(107, 17);
			this->label9->TabIndex = 8;
			this->label9->Text = L"ID du Supérieur";
			// 
			// id_personnel_txt
			// 
			this->id_personnel_txt->Location = System::Drawing::Point(32, 51);
			this->id_personnel_txt->Name = L"id_personnel_txt";
			this->id_personnel_txt->Size = System::Drawing::Size(100, 22);
			this->id_personnel_txt->TabIndex = 9;
			// 
			// nom_txt
			// 
			this->nom_txt->Location = System::Drawing::Point(32, 110);
			this->nom_txt->Name = L"nom_txt";
			this->nom_txt->Size = System::Drawing::Size(100, 22);
			this->nom_txt->TabIndex = 10;
			// 
			// prenom_txt
			// 
			this->prenom_txt->Location = System::Drawing::Point(32, 165);
			this->prenom_txt->Name = L"prenom_txt";
			this->prenom_txt->Size = System::Drawing::Size(100, 22);
			this->prenom_txt->TabIndex = 11;
			// 
			// nom_superieur_txt
			// 
			this->nom_superieur_txt->Location = System::Drawing::Point(32, 221);
			this->nom_superieur_txt->Name = L"nom_superieur_txt";
			this->nom_superieur_txt->Size = System::Drawing::Size(100, 22);
			this->nom_superieur_txt->TabIndex = 12;
			this->nom_superieur_txt->TextChanged += gcnew System::EventHandler(this, &Personnel::textBox4_TextChanged);
			// 
			// adresse_txt
			// 
			this->adresse_txt->Location = System::Drawing::Point(32, 280);
			this->adresse_txt->Name = L"adresse_txt";
			this->adresse_txt->Size = System::Drawing::Size(100, 22);
			this->adresse_txt->TabIndex = 13;
			// 
			// code_postal_txt
			// 
			this->code_postal_txt->Location = System::Drawing::Point(32, 337);
			this->code_postal_txt->Name = L"code_postal_txt";
			this->code_postal_txt->Size = System::Drawing::Size(100, 22);
			this->code_postal_txt->TabIndex = 14;
			// 
			// ville_txt
			// 
			this->ville_txt->Location = System::Drawing::Point(202, 51);
			this->ville_txt->Name = L"ville_txt";
			this->ville_txt->Size = System::Drawing::Size(100, 22);
			this->ville_txt->TabIndex = 15;
			// 
			// date_embauche_txt
			// 
			this->date_embauche_txt->Location = System::Drawing::Point(202, 110);
			this->date_embauche_txt->Name = L"date_embauche_txt";
			this->date_embauche_txt->Size = System::Drawing::Size(100, 22);
			this->date_embauche_txt->TabIndex = 16;
			// 
			// id_superieur_txt
			// 
			this->id_superieur_txt->Location = System::Drawing::Point(202, 165);
			this->id_superieur_txt->Name = L"id_superieur_txt";
			this->id_superieur_txt->Size = System::Drawing::Size(100, 22);
			this->id_superieur_txt->TabIndex = 17;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(396, 40);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(86, 43);
			this->button1->TabIndex = 18;
			this->button1->Text = L"Nouveau";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Personnel::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(396, 102);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(86, 39);
			this->button2->TabIndex = 19;
			this->button2->Text = L"Modifier";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Personnel::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(396, 157);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(86, 42);
			this->button3->TabIndex = 20;
			this->button3->Text = L"Supprimer";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Personnel::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(518, 40);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(94, 151);
			this->button4->TabIndex = 21;
			this->button4->Text = L"Enregistrer";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Personnel::button4_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(728, 90);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(377, 212);
			this->dataGridView1->TabIndex = 22;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Personnel::dataGridView1_CellContentClick);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(243, 221);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(59, 38);
			this->button5->TabIndex = 23;
			this->button5->Text = L"<<";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Personnel::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(323, 221);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(63, 39);
			this->button6->TabIndex = 24;
			this->button6->Text = L"<";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Personnel::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(396, 221);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(65, 40);
			this->button7->TabIndex = 25;
			this->button7->Text = L">";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Personnel::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(480, 222);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(64, 39);
			this->button8->TabIndex = 26;
			this->button8->Text = L">>";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Personnel::button8_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(241, 303);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(65, 17);
			this->label10->TabIndex = 27;
			this->label10->Text = L"Message";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(243, 337);
			this->textBox10->Multiline = true;
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(341, 115);
			this->textBox10->TabIndex = 28;
			this->textBox10->TextChanged += gcnew System::EventHandler(this, &Personnel::textBox10_TextChanged);
			// 
			// Personnel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1185, 464);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->id_superieur_txt);
			this->Controls->Add(this->date_embauche_txt);
			this->Controls->Add(this->ville_txt);
			this->Controls->Add(this->code_postal_txt);
			this->Controls->Add(this->adresse_txt);
			this->Controls->Add(this->nom_superieur_txt);
			this->Controls->Add(this->prenom_txt);
			this->Controls->Add(this->nom_txt);
			this->Controls->Add(this->id_personnel_txt);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Personnel";
			this->Text = L"Personnel";
			this->Load += gcnew System::EventHandler(this, &Personnel::Personnel_Load);
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
			this->id_personnel_txt->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[0]);
			this->nom_txt->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[1]);
			this->prenom_txt->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[2]);
			this->nom_superieur_txt->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[3]);
			this->adresse_txt->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[4]);
			this->code_postal_txt->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[5]);
			this->ville_txt->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[6]);
			this->date_embauche_txt->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[7]);
			this->id_superieur_txt->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[8]);
		}
			   
		 private: void loadDataGridView() {
				   this->dataGridView1->DataSource = this->processusPersonnel->listePersonnel("liste2");
				   this->dataGridView1->DataMember = "liste2";
			   }

	private: System::Void Personnel_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	this->index = 0;
	this->loadData(this->index);
	this->txt_message->Text = "Enregistrement n°:" + (this->index + 1);
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->index > 0) {
		this->index--;
		//charge une collection précédemment enregistré avec savedata
		this->loadData(this->index);
		this->txt_message->Text = "Enregistrement n°:" + (this->index + 1);
	}

}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->index < this->ds->Tables["liste"]->Rows->Count - 1) {
		this->index++;
		//urilise la fonction plus en haut
		this->loadData(this->index);
		this->txt_message->Text = "Enregistrement n°:" + (this->index + 1);
	}
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	this->index = this->ds->Tables["liste"]->Rows->Count - 1;
	this->loadData(this->index);
	this->txt_message->Text = "Enregistrement n°:" + (this->index + 1);
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->id_personnel_txt->Clear();
	this->nom_txt->Clear();
	this->prenom_txt->Clear();
	this->nom_superieur_txt->Clear();
	this->adresse_txt->Clear();
	this->code_postal_txt->Clear();
	this->ville_txt->Clear();
	this->date_embauche_txt->Clear();
	this->id_superieur_txt->Clear();
	this->mode = "nouv";
	this->txt_message->Text = "Veuillez saisir les information de la nouvelle personne et enregistrer";
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->mode = "maj";
	this->txt_message->Text = "Veuillez modifier les information de la nouvelle courante et enregistrer.";
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->mode = "sup";
	this->txt_message->Text = "Veuillez confirmer la suppression de la personne en cours en enregistrant.";
}

private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->mode == "nouv")
	{
		int Id;
		//utilise le nom et le prénom entré pour faire un id
		Id = this->processusPersonnel->ajouter(this->nom_txt->Text, this->prenom_txt->Text, this->nom_superieur_txt->Text, this->adresse_txt->Text, Convert::ToInt32(this->code_postal_txt->Text), this->ville_txt->Text, Convert::ToDateTime(this->date_embauche_txt->Text));
		this->txt_message->Text = "L'ID généré est le : " + Id + ". ";
	}

	else if (this->mode == "maj")
	{
		this->processusPersonnel->modifier(Convert::ToInt32(this->id_personnel_txt->Text), this->nom_txt->Text, this->prenom_txt->Text, this->nom_superieur_txt->Text, this->adresse_txt->Text, Convert::ToInt32(this->code_postal_txt->Text), this->ville_txt->Text, Convert::ToDateTime(this->date_embauche_txt->Text), Convert::ToInt32(this->id_superieur_txt->Text));

	}
	else if (this->mode == "sup")
	{
		this->processusPersonnel->supprimer(Convert::ToInt32(this->id_personnel_txt->Text));
	}
	this->index = 0;
	this->loadData(this->index);
	this->loadDataGridView();
	this->txt_message->Text += "Traitement terminé.";
}

private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	//int a=this->dataGridView1->CurrentRow->Index;
	int a = e->RowIndex;
	//this->txt_idPersonne->Text = a.ToString();
	this->index = a;
	this->loadData(this->index);
	//Form1.DataGridView1.Item(y, x).Value
}

private: System::Void textBox10_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
};

