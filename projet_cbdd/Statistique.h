#pragma once

namespace projet_cbdd {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de Statistique
	/// </summary>
	public ref class Statistique : public System::Windows::Forms::Form
	{
	public:
		Statistique(void)
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
		~Statistique()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(39, 36);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(190, 47);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Panier moyen";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(39, 89);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(190, 40);
			this->button2->TabIndex = 1;
			this->button2->Text = L"CA sur un mois";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(39, 135);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(190, 47);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Produit sous seuil de réaprovisionnement";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(39, 188);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(190, 49);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Montant total des achats d\'un client";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(39, 243);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(190, 50);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Les 10 articles les plus vendus";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(39, 299);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(190, 42);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Les 10 articles les moins vendus";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(39, 347);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(190, 41);
			this->button7->TabIndex = 6;
			this->button7->Text = L"Valeur commercial du stock";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(39, 394);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(190, 45);
			this->button8->TabIndex = 7;
			this->button8->Text = L"Valeur d\'achat du stock";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(39, 445);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(190, 47);
			this->button9->TabIndex = 8;
			this->button9->Text = L"Simulation des variations de valeurs";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// Statistique
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1075, 551);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Statistique";
			this->Text = L"Statistique";
			this->Load += gcnew System::EventHandler(this, &Statistique::Statistique_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Statistique_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
