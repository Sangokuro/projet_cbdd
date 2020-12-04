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
	private: System::Windows::Forms::Button^ base;






	private:

		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->saveButton = (gcnew System::Windows::Forms::Button());
			this->txt_message = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->base = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
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
			// base
			// 
			this->base->Location = System::Drawing::Point(283, 259);
			this->base->Name = L"base";
			this->base->Size = System::Drawing::Size(110, 46);
			this->base->TabIndex = 19;
			this->base->Text = L"base";
			this->base->UseVisualStyleBackColor = true;
			this->base->Click += gcnew System::EventHandler(this, &Statistique::base_Click);
			// 
			// Client
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(925, 456);
			this->Controls->Add(this->base);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txt_message);
			this->Controls->Add(this->saveButton);
			this->Name = L"Client";
			this->Text = L"Form1";
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
		loadDataGridView();
		this->txt_message->Text = "Data chargées";
	}

	/*private: void loadData(int index) {
		this->ds->Clear();
		//si exception ici il faut remplir la table
		this->ds = this->processusPersonnes->listePersonnel("liste");
	}*/
	private: void loadDataGridView() {
		dataGridView1->DataSource = this->processusStatistique->listePersonnel("liste2");
		dataGridView1->DataMember = "liste2";
	}



	private: System::Void base_Click(System::Object^ sender, System::EventArgs^ e) {

		this->loadDataGridView();
		this->txt_message->Text += "Traitement terminé.";
	}
		   private: System::Void txt_message_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		   }
};
}
