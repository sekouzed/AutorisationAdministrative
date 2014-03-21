#pragma once
#include "donnees.h";

namespace AutorisationAdministrative {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
    using namespace Odbc;

	/// <summary>
	/// Description résumée de formVoirAutorisation
	/// </summary>
	public ref class formVoirAutorisation : public System::Windows::Forms::Form
	{
	 OdbcConnection ^myConnection;
	public:
		formVoirAutorisation(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}
		formVoirAutorisation(OdbcConnection ^myCnx)
		{
			InitializeComponent();
			myConnection = gcnew OdbcConnection;
			myConnection = myCnx;
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~formVoirAutorisation()
		{
			if (components)
			{
				delete components;
			}
		}

    protected: 
    private: System::Windows::Forms::DataGridView^  dataGridView1;






    private: System::Windows::Forms::Panel^  panel1;
    private: System::Windows::Forms::Button^  button4;
    private: System::Windows::Forms::Button^  button3;
    private: System::Windows::Forms::Button^  button2;
    private: System::Windows::Forms::Button^  button1;


    private: System::Windows::Forms::Button^  button8;
    private: System::Windows::Forms::Button^  button7;
    private: System::Windows::Forms::Button^  button6;
    private: System::Windows::Forms::Button^  button5;
    private: System::Windows::Forms::PictureBox^  pictureBox1;
    private: System::Windows::Forms::Button^  button9;

    private: System::Windows::Forms::Button^  button10;
    private: System::Windows::Forms::TextBox^  textBox_cherche;
    private: System::Windows::Forms::Label^  label1;

















	protected: 






































































































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
            System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(formVoirAutorisation::typeid));
            this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->textBox_cherche = (gcnew System::Windows::Forms::TextBox());
            this->button10 = (gcnew System::Windows::Forms::Button());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->button9 = (gcnew System::Windows::Forms::Button());
            this->button8 = (gcnew System::Windows::Forms::Button());
            this->button7 = (gcnew System::Windows::Forms::Button());
            this->button6 = (gcnew System::Windows::Forms::Button());
            this->button5 = (gcnew System::Windows::Forms::Button());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->label1 = (gcnew System::Windows::Forms::Label());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
            this->panel1->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
            this->SuspendLayout();
            // 
            // dataGridView1
            // 
            this->dataGridView1->AllowUserToOrderColumns = true;
            this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
            this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::Control;
            this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->dataGridView1->Location = System::Drawing::Point(163, 0);
            this->dataGridView1->Name = L"dataGridView1";
            this->dataGridView1->Size = System::Drawing::Size(790, 466);
            this->dataGridView1->TabIndex = 0;
            // 
            // panel1
            // 
            this->panel1->BackColor = System::Drawing::Color::Transparent;
            this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel1.BackgroundImage")));
            this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->panel1->Controls->Add(this->label1);
            this->panel1->Controls->Add(this->textBox_cherche);
            this->panel1->Controls->Add(this->button10);
            this->panel1->Controls->Add(this->pictureBox1);
            this->panel1->Controls->Add(this->button9);
            this->panel1->Controls->Add(this->button8);
            this->panel1->Controls->Add(this->button7);
            this->panel1->Controls->Add(this->button6);
            this->panel1->Controls->Add(this->button5);
            this->panel1->Controls->Add(this->button4);
            this->panel1->Controls->Add(this->button3);
            this->panel1->Controls->Add(this->button2);
            this->panel1->Controls->Add(this->button1);
            this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
            this->panel1->Location = System::Drawing::Point(0, 0);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(163, 466);
            this->panel1->TabIndex = 1;
            // 
            // textBox_cherche
            // 
            this->textBox_cherche->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->textBox_cherche->Location = System::Drawing::Point(16, 48);
            this->textBox_cherche->Name = L"textBox_cherche";
            this->textBox_cherche->Size = System::Drawing::Size(91, 20);
            this->textBox_cherche->TabIndex = 2;
            // 
            // button10
            // 
            this->button10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button10.BackgroundImage")));
            this->button10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->button10->FlatAppearance->BorderSize = 0;
            this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->button10->Location = System::Drawing::Point(116, 48);
            this->button10->Name = L"button10";
            this->button10->Size = System::Drawing::Size(30, 20);
            this->button10->TabIndex = 27;
            this->button10->Text = L"OK";
            this->button10->UseVisualStyleBackColor = true;
            this->button10->Click += gcnew System::EventHandler(this, &formVoirAutorisation::button10_Click);
            // 
            // pictureBox1
            // 
            this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
            this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
            this->pictureBox1->Location = System::Drawing::Point(3, 364);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(157, 90);
            this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox1->TabIndex = 25;
            this->pictureBox1->TabStop = false;
            // 
            // button9
            // 
            this->button9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button9.BackgroundImage")));
            this->button9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->button9->FlatAppearance->BorderSize = 0;
            this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->button9->Location = System::Drawing::Point(16, 96);
            this->button9->Name = L"button9";
            this->button9->Size = System::Drawing::Size(130, 26);
            this->button9->TabIndex = 26;
            this->button9->Text = L"DEMANDES";
            this->button9->UseVisualStyleBackColor = true;
            this->button9->Click += gcnew System::EventHandler(this, &formVoirAutorisation::button9_Click);
            // 
            // button8
            // 
            this->button8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button8.BackgroundImage")));
            this->button8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->button8->FlatAppearance->BorderSize = 0;
            this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
            this->button8->Location = System::Drawing::Point(16, 287);
            this->button8->Name = L"button8";
            this->button8->Size = System::Drawing::Size(87, 26);
            this->button8->TabIndex = 7;
            this->button8->Text = L"Localités";
            this->button8->UseVisualStyleBackColor = true;
            this->button8->Click += gcnew System::EventHandler(this, &formVoirAutorisation::button8_Click);
            // 
            // button7
            // 
            this->button7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button7.BackgroundImage")));
            this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->button7->FlatAppearance->BorderSize = 0;
            this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button7->Location = System::Drawing::Point(16, 235);
            this->button7->Name = L"button7";
            this->button7->Size = System::Drawing::Size(87, 26);
            this->button7->TabIndex = 6;
            this->button7->Text = L"Entreprises";
            this->button7->UseVisualStyleBackColor = true;
            this->button7->Click += gcnew System::EventHandler(this, &formVoirAutorisation::button7_Click);
            // 
            // button6
            // 
            this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button6.BackgroundImage")));
            this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->button6->FlatAppearance->BorderSize = 0;
            this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button6->Location = System::Drawing::Point(56, 209);
            this->button6->Name = L"button6";
            this->button6->Size = System::Drawing::Size(87, 26);
            this->button6->TabIndex = 5;
            this->button6->Text = L"Particuliers";
            this->button6->UseVisualStyleBackColor = true;
            this->button6->Click += gcnew System::EventHandler(this, &formVoirAutorisation::button6_Click);
            // 
            // button5
            // 
            this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button5.BackgroundImage")));
            this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->button5->FlatAppearance->BorderSize = 0;
            this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
            this->button5->Location = System::Drawing::Point(56, 261);
            this->button5->Name = L"button5";
            this->button5->Size = System::Drawing::Size(87, 26);
            this->button5->TabIndex = 4;
            this->button5->Text = L"Produits";
            this->button5->UseVisualStyleBackColor = true;
            this->button5->Click += gcnew System::EventHandler(this, &formVoirAutorisation::button5_Click);
            // 
            // button4
            // 
            this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button4.BackgroundImage")));
            this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->button4->FlatAppearance->BorderSize = 0;
            this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button4->Location = System::Drawing::Point(56, 155);
            this->button4->Name = L"button4";
            this->button4->Size = System::Drawing::Size(87, 27);
            this->button4->TabIndex = 3;
            this->button4->Text = L"En attentes";
            this->button4->UseVisualStyleBackColor = true;
            this->button4->Click += gcnew System::EventHandler(this, &formVoirAutorisation::button4_Click);
            // 
            // button3
            // 
            this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button3.BackgroundImage")));
            this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->button3->FlatAppearance->BorderSize = 0;
            this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button3->Location = System::Drawing::Point(16, 182);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(87, 27);
            this->button3->TabIndex = 2;
            this->button3->Text = L"Non validées";
            this->button3->UseVisualStyleBackColor = true;
            this->button3->Click += gcnew System::EventHandler(this, &formVoirAutorisation::button3_Click);
            // 
            // button2
            // 
            this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button2.BackgroundImage")));
            this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->button2->FlatAppearance->BorderSize = 0;
            this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button2->Location = System::Drawing::Point(16, 128);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(87, 27);
            this->button2->TabIndex = 1;
            this->button2->Text = L"Validées";
            this->button2->UseVisualStyleBackColor = true;
            this->button2->Click += gcnew System::EventHandler(this, &formVoirAutorisation::button2_Click);
            // 
            // button1
            // 
            this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button1.BackgroundImage")));
            this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->button1->FlatAppearance->BorderSize = 0;
            this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->button1->Location = System::Drawing::Point(16, 319);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(130, 26);
            this->button1->TabIndex = 0;
            this->button1->Text = L"AUTORISATIONS";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &formVoirAutorisation::button1_Click);
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(16, 32);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(50, 13);
            this->label1->TabIndex = 2;
            this->label1->Text = L"Chercher";
            // 
            // formVoirAutorisation
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
            this->ClientSize = System::Drawing::Size(953, 466);
            this->Controls->Add(this->dataGridView1);
            this->Controls->Add(this->panel1);
            this->DoubleBuffered = true;
            this->Name = L"formVoirAutorisation";
            this->Text = L"Affichage";
            this->Load += gcnew System::EventHandler(this, &formVoirAutorisation::formVoirAutorisation_Load);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
            this->ResumeLayout(false);

        }
#pragma endregion
        
private: Void tableEnDataGridView(OdbcDataAdapter^ odbcAdapter) {
            try
                {
                    OdbcCommandBuilder^ commandBuilder = gcnew OdbcCommandBuilder(odbcAdapter);
                    DataTable^ table = gcnew DataTable();
                    table->Locale = System::Globalization::CultureInfo::InvariantCulture;
                    odbcAdapter->Fill(table);
                    dataGridView1->DataSource = table;
                }
                catch (System::Exception^ e)
                {
                    MessageBox::Show("Veiller corriger les erreurs suivantes\n"+e->Message);
                }
         }
private: System::Void formVoirAutorisation_Load(System::Object^  sender, System::EventArgs^  e) {
                    tableEnDataGridView(autorisation::afficher());
         }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
            
                    tableEnDataGridView(autorisation::afficher());
         }
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {

                    tableEnDataGridView(demande::afficher());
         }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
               
                    tableEnDataGridView(autorisation::afficherValider());
         }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

                    tableEnDataGridView(autorisation::afficherNonValider());
         }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {

                    tableEnDataGridView(autorisation::afficherEnAttente());
         }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
             tableEnDataGridView(demande::afficherParticulier());
         }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
             tableEnDataGridView(demande::afficherEntreprise());
         }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
             tableEnDataGridView(produit::afficher());
         }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
              tableEnDataGridView(localite::afficher());
         }
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
             tableEnDataGridView(demande::chercher(textBox_cherche->Text));
         }
};
}
