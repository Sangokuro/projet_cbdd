#pragma once

namespace projet_cbdd {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description r�sum�e de Stock
	/// </summary>
	public ref class Stock : public System::Windows::Forms::Form
	{
	public:
		Stock(void)
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
		~Stock()
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
	private: System::Windows::Forms::TextBox^ id_article_txt;
	private: System::Windows::Forms::TextBox^ nom_txt;
	private: System::Windows::Forms::TextBox^ nature_article_txt;
	private: System::Windows::Forms::TextBox^ couleur_article_txt;




	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::DataGridView^ dataGridView1;

	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->id_article_txt = (gcnew System::Windows::Forms::TextBox());
			this->nom_txt = (gcnew System::Windows::Forms::TextBox());
			this->nature_article_txt = (gcnew System::Windows::Forms::TextBox());
			this->couleur_article_txt = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(30, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(64, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ID Article";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(30, 97);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nom";
			this->label2->Click += gcnew System::EventHandler(this, &Stock::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(30, 153);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(119, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Nature de l\'article";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(30, 207);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(57, 17);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Couleur";
			// 
			// id_article_txt
			// 
			this->id_article_txt->Location = System::Drawing::Point(33, 60);
			this->id_article_txt->Name = L"id_article_txt";
			this->id_article_txt->Size = System::Drawing::Size(100, 22);
			this->id_article_txt->TabIndex = 4;
			// 
			// nom_txt
			// 
			this->nom_txt->Location = System::Drawing::Point(33, 117);
			this->nom_txt->Name = L"nom_txt";
			this->nom_txt->Size = System::Drawing::Size(100, 22);
			this->nom_txt->TabIndex = 5;
			// 
			// nature_article_txt
			// 
			this->nature_article_txt->Location = System::Drawing::Point(33, 173);
			this->nature_article_txt->Name = L"nature_article_txt";
			this->nature_article_txt->Size = System::Drawing::Size(100, 22);
			this->nature_article_txt->TabIndex = 6;
			// 
			// couleur_article_txt
			// 
			this->couleur_article_txt->Location = System::Drawing::Point(33, 227);
			this->couleur_article_txt->Name = L"couleur_article_txt";
			this->couleur_article_txt->Size = System::Drawing::Size(100, 22);
			this->couleur_article_txt->TabIndex = 7;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(143, 372);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(65, 17);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Message";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(146, 407);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(387, 94);
			this->textBox5->TabIndex = 9;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(42, 287);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(44, 30);
			this->button1->TabIndex = 10;
			this->button1->Text = L"<<";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(92, 287);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(41, 30);
			this->button2->TabIndex = 11;
			this->button2->Text = L"<";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(139, 287);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(41, 30);
			this->button3->TabIndex = 12;
			this->button3->Text = L">";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(186, 287);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(44, 30);
			this->button4->TabIndex = 13;
			this->button4->Text = L">>";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(339, 45);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(83, 52);
			this->button5->TabIndex = 14;
			this->button5->Text = L"Nouveau";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(339, 117);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(83, 52);
			this->button6->TabIndex = 15;
			this->button6->Text = L"Modifier";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(339, 187);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(83, 57);
			this->button7->TabIndex = 16;
			this->button7->Text = L"Supprimer";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(447, 45);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(101, 199);
			this->button8->TabIndex = 17;
			this->button8->Text = L"Enregistrer";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(647, 99);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(310, 218);
			this->dataGridView1->TabIndex = 18;
			// 
			// Stock
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1016, 544);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->couleur_article_txt);
			this->Controls->Add(this->nature_article_txt);
			this->Controls->Add(this->nom_txt);
			this->Controls->Add(this->id_article_txt);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Stock";
			this->Text = L"Stock";
			this->Load += gcnew System::EventHandler(this, &Stock::Stock_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//s'�x�cute au d�marrage
	private: System::Void FRM_Principal_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->mode = "RIEN";
		this->ds = gcnew Data::DataSet();
		this->processusPersonnes = gcnew NS_Svc::CL_svc_gestionStock();
		this->loadData(this->index);
		loadDataGridView();
		this->txt_message->Text = "Data charg�es";

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
		   }

	private: System::Void Stock_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
