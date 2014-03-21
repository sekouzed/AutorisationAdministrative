#pragma once
#include "donnees.h";

namespace AutorisationAdministrative {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
    using namespace System::IO;

	/// <summary>
	/// Description résumée de formMiseAjours
	/// </summary>
	public ref class formMiseAjours : public System::Windows::Forms::Form
	{
	public:
		formMiseAjours(void)
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
		~formMiseAjours()
		{
			if (components)
			{
				delete components;
			}
		}
    private: System::Windows::Forms::Panel^  panel1;
    protected: 
    private: System::Windows::Forms::RadioButton^  radioButton3;
    private: System::Windows::Forms::RadioButton^  radioButton2;

    private: System::Windows::Forms::Button^  button_annuler;
    private: System::Windows::Forms::RadioButton^  radioButton1;
    private: System::Windows::Forms::Button^  button_terminer;



    private: System::Windows::Forms::TextBox^  textBox_adresseDemandeur;
    private: System::Windows::Forms::TextBox^  textBox_fax;
    private: System::Windows::Forms::ComboBox^  comboBox_unite;
    private: System::Windows::Forms::Label^  label12;
    private: System::Windows::Forms::Label^  label25;
    private: System::Windows::Forms::Label^  label6;
    private: System::Windows::Forms::TextBox^  textBox_adressLocal;
    private: System::Windows::Forms::TextBox^  textBox_demandeur;
    private: System::Windows::Forms::TextBox^  textBox_contratAcquisition;
    private: System::Windows::Forms::Label^  label5;
    private: System::Windows::Forms::Label^  label28;
    private: System::Windows::Forms::Label^  label7;
    private: System::Windows::Forms::Label^  label9;
    private: System::Windows::Forms::Label^  label1;
    private: System::Windows::Forms::TextBox^  textBox_assurance;
    private: System::Windows::Forms::Label^  label4;
    private: System::Windows::Forms::Label^  label24;
    private: System::Windows::Forms::TextBox^  textBox_tel;
    private: System::Windows::Forms::TextBox^  textBox_commentaire;
    private: System::Windows::Forms::TextBox^  textBox_mail;
    private: System::Windows::Forms::TextBox^  textBox_quantite;
    private: System::Windows::Forms::TextBox^  textBox_web;
    private: System::Windows::Forms::Label^  label8;
    private: System::Windows::Forms::Label^  label32;
    private: System::Windows::Forms::TextBox^  textBox_bancaire;
    private: System::Windows::Forms::TextBox^  textBox_bp;
    private: System::Windows::Forms::TextBox^  textBox_certfSanitaire;
    private: System::Windows::Forms::Label^  label31;
    private: System::Windows::Forms::TextBox^  textBox_taxe;
    private: System::Windows::Forms::Label^  label11;
    private: System::Windows::Forms::Label^  label23;

    private: System::Windows::Forms::Label^  label26;

    private: System::Windows::Forms::ComboBox^  comboBox_typeLocal;
    private: System::Windows::Forms::TextBox^  textBox_numRegi;
    private: System::Windows::Forms::Label^  label3;
    private: System::Windows::Forms::ComboBox^  comboBox_typeDemande;
    private: System::Windows::Forms::TextBox^  textBox_sanitaireProduit;
    private: System::Windows::Forms::TextBox^  textBox_pGros;
    private: System::Windows::Forms::TextBox^  textBox_douane;
    private: System::Windows::Forms::TextBox^  textBox_nominationProduit;
    private: System::Windows::Forms::Label^  label18;
    private: System::Windows::Forms::Label^  label20;
    private: System::Windows::Forms::TextBox^  textBox_pUnitaire;
    private: System::Windows::Forms::TextBox^  textBox_origine;
    private: System::Windows::Forms::TextBox^  textBox_valDouane;
    private: System::Windows::Forms::Label^  label17;
    private: System::Windows::Forms::Label^  label19;
    private: System::Windows::Forms::Label^  label22;
    private: System::Windows::Forms::Label^  label21;
    private: System::Windows::Forms::Label^  label16;
    private: System::Windows::Forms::TextBox^  textBox_homologation;
    private: System::Windows::Forms::Label^  label15;
    private: System::Windows::Forms::Label^  label13;
    private: System::Windows::Forms::Label^  label14;

    private: System::Windows::Forms::PictureBox^  pictureBox1;
    private: System::Windows::Forms::PictureBox^  pictureBox2;
    private: System::Windows::Forms::PictureBox^  pictureBox3;



    private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
private: System::Windows::Forms::ListBox^  listBox1;
private: System::Windows::Forms::Label^  label27;
    private: System::Windows::Forms::PictureBox^  pictureBox4;
    private: System::Windows::Forms::Label^  label33;
    private: System::Windows::Forms::Label^  label10;
    private: System::Windows::Forms::PictureBox^  pictureBox5;
private: System::Windows::Forms::Label^  label34;
private: System::Windows::Forms::Label^  label35;
private: System::Windows::Forms::Label^  label36;





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
            System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(formMiseAjours::typeid));
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
            this->button_annuler = (gcnew System::Windows::Forms::Button());
            this->button_terminer = (gcnew System::Windows::Forms::Button());
            this->textBox_adresseDemandeur = (gcnew System::Windows::Forms::TextBox());
            this->textBox_fax = (gcnew System::Windows::Forms::TextBox());
            this->comboBox_unite = (gcnew System::Windows::Forms::ComboBox());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->label25 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->textBox_adressLocal = (gcnew System::Windows::Forms::TextBox());
            this->textBox_demandeur = (gcnew System::Windows::Forms::TextBox());
            this->textBox_contratAcquisition = (gcnew System::Windows::Forms::TextBox());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label28 = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->textBox_assurance = (gcnew System::Windows::Forms::TextBox());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label24 = (gcnew System::Windows::Forms::Label());
            this->textBox_tel = (gcnew System::Windows::Forms::TextBox());
            this->textBox_commentaire = (gcnew System::Windows::Forms::TextBox());
            this->textBox_mail = (gcnew System::Windows::Forms::TextBox());
            this->textBox_quantite = (gcnew System::Windows::Forms::TextBox());
            this->textBox_web = (gcnew System::Windows::Forms::TextBox());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->label32 = (gcnew System::Windows::Forms::Label());
            this->textBox_bancaire = (gcnew System::Windows::Forms::TextBox());
            this->textBox_bp = (gcnew System::Windows::Forms::TextBox());
            this->textBox_certfSanitaire = (gcnew System::Windows::Forms::TextBox());
            this->label31 = (gcnew System::Windows::Forms::Label());
            this->textBox_taxe = (gcnew System::Windows::Forms::TextBox());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->label23 = (gcnew System::Windows::Forms::Label());
            this->label26 = (gcnew System::Windows::Forms::Label());
            this->comboBox_typeLocal = (gcnew System::Windows::Forms::ComboBox());
            this->textBox_numRegi = (gcnew System::Windows::Forms::TextBox());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->comboBox_typeDemande = (gcnew System::Windows::Forms::ComboBox());
            this->textBox_sanitaireProduit = (gcnew System::Windows::Forms::TextBox());
            this->textBox_pGros = (gcnew System::Windows::Forms::TextBox());
            this->textBox_douane = (gcnew System::Windows::Forms::TextBox());
            this->textBox_nominationProduit = (gcnew System::Windows::Forms::TextBox());
            this->label18 = (gcnew System::Windows::Forms::Label());
            this->label20 = (gcnew System::Windows::Forms::Label());
            this->textBox_pUnitaire = (gcnew System::Windows::Forms::TextBox());
            this->textBox_origine = (gcnew System::Windows::Forms::TextBox());
            this->textBox_valDouane = (gcnew System::Windows::Forms::TextBox());
            this->label17 = (gcnew System::Windows::Forms::Label());
            this->label19 = (gcnew System::Windows::Forms::Label());
            this->label22 = (gcnew System::Windows::Forms::Label());
            this->label21 = (gcnew System::Windows::Forms::Label());
            this->label16 = (gcnew System::Windows::Forms::Label());
            this->textBox_homologation = (gcnew System::Windows::Forms::TextBox());
            this->label15 = (gcnew System::Windows::Forms::Label());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->label14 = (gcnew System::Windows::Forms::Label());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
            this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
            this->listBox1 = (gcnew System::Windows::Forms::ListBox());
            this->label27 = (gcnew System::Windows::Forms::Label());
            this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
            this->label33 = (gcnew System::Windows::Forms::Label());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
            this->label34 = (gcnew System::Windows::Forms::Label());
            this->label35 = (gcnew System::Windows::Forms::Label());
            this->label36 = (gcnew System::Windows::Forms::Label());
            this->panel1->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->BeginInit();
            this->SuspendLayout();
            // 
            // panel1
            // 
            this->panel1->BackColor = System::Drawing::Color::Transparent;
            this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel1.BackgroundImage")));
            this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->panel1->Controls->Add(this->radioButton3);
            this->panel1->Controls->Add(this->radioButton2);
            this->panel1->Controls->Add(this->radioButton1);
            this->panel1->Location = System::Drawing::Point(512, 293);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(176, 135);
            this->panel1->TabIndex = 339;
            // 
            // radioButton3
            // 
            this->radioButton3->AutoSize = true;
            this->radioButton3->BackColor = System::Drawing::Color::Transparent;
            this->radioButton3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->radioButton3->ForeColor = System::Drawing::Color::Yellow;
            this->radioButton3->Location = System::Drawing::Point(8, 48);
            this->radioButton3->Name = L"radioButton3";
            this->radioButton3->Size = System::Drawing::Size(148, 38);
            this->radioButton3->TabIndex = 276;
            this->radioButton3->Text = L"Mettre la demande \r\nen attente";
            this->radioButton3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->radioButton3->UseVisualStyleBackColor = false;
            // 
            // radioButton2
            // 
            this->radioButton2->AutoSize = true;
            this->radioButton2->BackColor = System::Drawing::Color::Transparent;
            this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->radioButton2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->radioButton2->Location = System::Drawing::Point(8, 86);
            this->radioButton2->Name = L"radioButton2";
            this->radioButton2->Size = System::Drawing::Size(154, 21);
            this->radioButton2->TabIndex = 275;
            this->radioButton2->Text = L"Rejetter la demande";
            this->radioButton2->UseVisualStyleBackColor = false;
            // 
            // radioButton1
            // 
            this->radioButton1->AutoSize = true;
            this->radioButton1->BackColor = System::Drawing::Color::Transparent;
            this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->radioButton1->ForeColor = System::Drawing::Color::Green;
            this->radioButton1->Location = System::Drawing::Point(8, 27);
            this->radioButton1->Name = L"radioButton1";
            this->radioButton1->Size = System::Drawing::Size(161, 21);
            this->radioButton1->TabIndex = 274;
            this->radioButton1->Text = L"Autoriser la demande";
            this->radioButton1->UseVisualStyleBackColor = false;
            // 
            // button_annuler
            // 
            this->button_annuler->BackColor = System::Drawing::Color::Transparent;
            this->button_annuler->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button_annuler.BackgroundImage")));
            this->button_annuler->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->button_annuler->FlatAppearance->BorderSize = 0;
            this->button_annuler->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
            this->button_annuler->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button_annuler->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->button_annuler->Location = System::Drawing::Point(816, 469);
            this->button_annuler->Name = L"button_annuler";
            this->button_annuler->Size = System::Drawing::Size(74, 37);
            this->button_annuler->TabIndex = 273;
            this->button_annuler->Text = L"Terminer";
            this->button_annuler->UseVisualStyleBackColor = false;
            this->button_annuler->Click += gcnew System::EventHandler(this, &formMiseAjours::button_annuler_Click);
            // 
            // button_terminer
            // 
            this->button_terminer->BackColor = System::Drawing::Color::Transparent;
            this->button_terminer->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button_terminer.BackgroundImage")));
            this->button_terminer->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->button_terminer->FlatAppearance->BorderSize = 0;
            this->button_terminer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button_terminer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->button_terminer->Location = System::Drawing::Point(700, 469);
            this->button_terminer->Name = L"button_terminer";
            this->button_terminer->Size = System::Drawing::Size(110, 37);
            this->button_terminer->TabIndex = 272;
            this->button_terminer->Text = L"Enregistrer";
            this->button_terminer->UseVisualStyleBackColor = false;
            this->button_terminer->Click += gcnew System::EventHandler(this, &formMiseAjours::button_terminer_Click);
            // 
            // textBox_adresseDemandeur
            // 
            this->textBox_adresseDemandeur->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, 
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->textBox_adresseDemandeur->Location = System::Drawing::Point(131, 447);
            this->textBox_adresseDemandeur->Multiline = true;
            this->textBox_adresseDemandeur->Name = L"textBox_adresseDemandeur";
            this->textBox_adresseDemandeur->Size = System::Drawing::Size(176, 60);
            this->textBox_adresseDemandeur->TabIndex = 304;
            // 
            // textBox_fax
            // 
            this->textBox_fax->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->textBox_fax->Location = System::Drawing::Point(225, 290);
            this->textBox_fax->Name = L"textBox_fax";
            this->textBox_fax->Size = System::Drawing::Size(82, 20);
            this->textBox_fax->TabIndex = 334;
            // 
            // comboBox_unite
            // 
            this->comboBox_unite->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->comboBox_unite->FormattingEnabled = true;
            this->comboBox_unite->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"Kilogramme", L"Litre", L"Mettre cube"});
            this->comboBox_unite->Location = System::Drawing::Point(416, 135);
            this->comboBox_unite->Name = L"comboBox_unite";
            this->comboBox_unite->Size = System::Drawing::Size(82, 21);
            this->comboBox_unite->TabIndex = 327;
            // 
            // label12
            // 
            this->label12->AutoSize = true;
            this->label12->BackColor = System::Drawing::Color::Transparent;
            this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->label12->Location = System::Drawing::Point(222, 274);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(24, 13);
            this->label12->TabIndex = 336;
            this->label12->Text = L"Fax";
            // 
            // label25
            // 
            this->label25->AutoSize = true;
            this->label25->BackColor = System::Drawing::Color::Transparent;
            this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->label25->Location = System::Drawing::Point(509, 80);
            this->label25->Name = L"label25";
            this->label25->Size = System::Drawing::Size(89, 13);
            this->label25->TabIndex = 323;
            this->label25->Text = L"Localité de vente";
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->BackColor = System::Drawing::Color::Transparent;
            this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->label6->Location = System::Drawing::Point(131, 313);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(26, 13);
            this->label6->TabIndex = 308;
            this->label6->Text = L"Mail";
            // 
            // textBox_adressLocal
            // 
            this->textBox_adressLocal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, 
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->textBox_adressLocal->Location = System::Drawing::Point(512, 211);
            this->textBox_adressLocal->Multiline = true;
            this->textBox_adressLocal->Name = L"textBox_adressLocal";
            this->textBox_adressLocal->Size = System::Drawing::Size(176, 60);
            this->textBox_adressLocal->TabIndex = 321;
            // 
            // textBox_demandeur
            // 
            this->textBox_demandeur->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, 
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->textBox_demandeur->Location = System::Drawing::Point(131, 135);
            this->textBox_demandeur->Name = L"textBox_demandeur";
            this->textBox_demandeur->Size = System::Drawing::Size(176, 20);
            this->textBox_demandeur->TabIndex = 301;
            // 
            // textBox_contratAcquisition
            // 
            this->textBox_contratAcquisition->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, 
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->textBox_contratAcquisition->Location = System::Drawing::Point(512, 136);
            this->textBox_contratAcquisition->Name = L"textBox_contratAcquisition";
            this->textBox_contratAcquisition->Size = System::Drawing::Size(176, 20);
            this->textBox_contratAcquisition->TabIndex = 319;
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->BackColor = System::Drawing::Color::Transparent;
            this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->label5->Location = System::Drawing::Point(131, 272);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(22, 13);
            this->label5->TabIndex = 307;
            this->label5->Text = L"Tel";
            // 
            // label28
            // 
            this->label28->AutoSize = true;
            this->label28->BackColor = System::Drawing::Color::Transparent;
            this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->label28->Location = System::Drawing::Point(408, 120);
            this->label28->Name = L"label28";
            this->label28->Size = System::Drawing::Size(84, 13);
            this->label28->TabIndex = 335;
            this->label28->Text = L"Unité de mésure";
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->BackColor = System::Drawing::Color::Transparent;
            this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->label7->Location = System::Drawing::Point(131, 431);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(45, 13);
            this->label7->TabIndex = 309;
            this->label7->Text = L"Adresse";
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->BackColor = System::Drawing::Color::Transparent;
            this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->label9->Location = System::Drawing::Point(128, 235);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(104, 13);
            this->label9->TabIndex = 331;
            this->label9->Text = L"Numéro d\'assurance";
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->BackColor = System::Drawing::Color::Transparent;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(131, 119);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(64, 13);
            this->label1->TabIndex = 305;
            this->label1->Text = L"*Nomination";
            // 
            // textBox_assurance
            // 
            this->textBox_assurance->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, 
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->textBox_assurance->Location = System::Drawing::Point(131, 251);
            this->textBox_assurance->Name = L"textBox_assurance";
            this->textBox_assurance->Size = System::Drawing::Size(176, 20);
            this->textBox_assurance->TabIndex = 329;
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->BackColor = System::Drawing::Color::Transparent;
            this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->label4->Location = System::Drawing::Point(131, 81);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(93, 13);
            this->label4->TabIndex = 306;
            this->label4->Text = L"Type de demande";
            // 
            // label24
            // 
            this->label24->AutoSize = true;
            this->label24->BackColor = System::Drawing::Color::Transparent;
            this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->label24->Location = System::Drawing::Point(509, 195);
            this->label24->Name = L"label24";
            this->label24->Size = System::Drawing::Size(96, 13);
            this->label24->TabIndex = 324;
            this->label24->Text = L"Adresse du localité";
            // 
            // textBox_tel
            // 
            this->textBox_tel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->textBox_tel->Location = System::Drawing::Point(131, 290);
            this->textBox_tel->Name = L"textBox_tel";
            this->textBox_tel->Size = System::Drawing::Size(82, 20);
            this->textBox_tel->TabIndex = 302;
            // 
            // textBox_commentaire
            // 
            this->textBox_commentaire->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, 
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->textBox_commentaire->Location = System::Drawing::Point(322, 447);
            this->textBox_commentaire->Multiline = true;
            this->textBox_commentaire->Name = L"textBox_commentaire";
            this->textBox_commentaire->Size = System::Drawing::Size(366, 60);
            this->textBox_commentaire->TabIndex = 286;
            // 
            // textBox_mail
            // 
            this->textBox_mail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->textBox_mail->Location = System::Drawing::Point(131, 329);
            this->textBox_mail->Name = L"textBox_mail";
            this->textBox_mail->Size = System::Drawing::Size(176, 20);
            this->textBox_mail->TabIndex = 303;
            // 
            // textBox_quantite
            // 
            this->textBox_quantite->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, 
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->textBox_quantite->Location = System::Drawing::Point(322, 136);
            this->textBox_quantite->Name = L"textBox_quantite";
            this->textBox_quantite->Size = System::Drawing::Size(82, 20);
            this->textBox_quantite->TabIndex = 282;
            // 
            // textBox_web
            // 
            this->textBox_web->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->textBox_web->Location = System::Drawing::Point(131, 369);
            this->textBox_web->Name = L"textBox_web";
            this->textBox_web->Size = System::Drawing::Size(176, 20);
            this->textBox_web->TabIndex = 310;
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->BackColor = System::Drawing::Color::Transparent;
            this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->label8->Location = System::Drawing::Point(131, 195);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(87, 13);
            this->label8->TabIndex = 330;
            this->label8->Text = L"Compte bancaire";
            // 
            // label32
            // 
            this->label32->AutoSize = true;
            this->label32->BackColor = System::Drawing::Color::Transparent;
            this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->label32->Location = System::Drawing::Point(131, 352);
            this->label32->Name = L"label32";
            this->label32->Size = System::Drawing::Size(30, 13);
            this->label32->TabIndex = 311;
            this->label32->Text = L"Web";
            // 
            // textBox_bancaire
            // 
            this->textBox_bancaire->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, 
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->textBox_bancaire->Location = System::Drawing::Point(131, 211);
            this->textBox_bancaire->Name = L"textBox_bancaire";
            this->textBox_bancaire->Size = System::Drawing::Size(176, 20);
            this->textBox_bancaire->TabIndex = 328;
            // 
            // textBox_bp
            // 
            this->textBox_bp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->textBox_bp->Location = System::Drawing::Point(131, 408);
            this->textBox_bp->Name = L"textBox_bp";
            this->textBox_bp->Size = System::Drawing::Size(176, 20);
            this->textBox_bp->TabIndex = 312;
            // 
            // textBox_certfSanitaire
            // 
            this->textBox_certfSanitaire->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, 
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->textBox_certfSanitaire->Location = System::Drawing::Point(512, 172);
            this->textBox_certfSanitaire->Name = L"textBox_certfSanitaire";
            this->textBox_certfSanitaire->Size = System::Drawing::Size(176, 20);
            this->textBox_certfSanitaire->TabIndex = 320;
            // 
            // label31
            // 
            this->label31->AutoSize = true;
            this->label31->BackColor = System::Drawing::Color::Transparent;
            this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->label31->Location = System::Drawing::Point(128, 392);
            this->label31->Name = L"label31";
            this->label31->Size = System::Drawing::Size(21, 13);
            this->label31->TabIndex = 313;
            this->label31->Text = L"BP";
            // 
            // textBox_taxe
            // 
            this->textBox_taxe->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->textBox_taxe->Location = System::Drawing::Point(416, 408);
            this->textBox_taxe->Name = L"textBox_taxe";
            this->textBox_taxe->Size = System::Drawing::Size(82, 20);
            this->textBox_taxe->TabIndex = 333;
            // 
            // label11
            // 
            this->label11->AutoSize = true;
            this->label11->BackColor = System::Drawing::Color::Transparent;
            this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->label11->Location = System::Drawing::Point(131, 159);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(167, 13);
            this->label11->TabIndex = 316;
            this->label11->Text = L"*Numéro du registre de commerce";
            // 
            // label23
            // 
            this->label23->AutoSize = true;
            this->label23->BackColor = System::Drawing::Color::Transparent;
            this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->label23->Location = System::Drawing::Point(509, 159);
            this->label23->Name = L"label23";
            this->label23->Size = System::Drawing::Size(144, 13);
            this->label23->TabIndex = 325;
            this->label23->Text = L"Numéro du certificat sanitaire";
            // 
            // label26
            // 
            this->label26->AutoSize = true;
            this->label26->BackColor = System::Drawing::Color::Transparent;
            this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->label26->Location = System::Drawing::Point(509, 120);
            this->label26->Name = L"label26";
            this->label26->Size = System::Drawing::Size(160, 13);
            this->label26->TabIndex = 322;
            this->label26->Text = L"*Numéro du contrat d\'acquisition";
            // 
            // comboBox_typeLocal
            // 
            this->comboBox_typeLocal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, 
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->comboBox_typeLocal->FormattingEnabled = true;
            this->comboBox_typeLocal->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Boutique", L"Magasin", L"Centre commercial", 
                L"Entrepôt"});
            this->comboBox_typeLocal->Location = System::Drawing::Point(512, 96);
            this->comboBox_typeLocal->Name = L"comboBox_typeLocal";
            this->comboBox_typeLocal->Size = System::Drawing::Size(176, 21);
            this->comboBox_typeLocal->TabIndex = 326;
            // 
            // textBox_numRegi
            // 
            this->textBox_numRegi->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->textBox_numRegi->Location = System::Drawing::Point(131, 172);
            this->textBox_numRegi->Name = L"textBox_numRegi";
            this->textBox_numRegi->Size = System::Drawing::Size(176, 20);
            this->textBox_numRegi->TabIndex = 314;
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->BackColor = System::Drawing::Color::Transparent;
            this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->label3->Location = System::Drawing::Point(410, 395);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(28, 13);
            this->label3->TabIndex = 332;
            this->label3->Text = L"TVA";
            // 
            // comboBox_typeDemande
            // 
            this->comboBox_typeDemande->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, 
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->comboBox_typeDemande->FormattingEnabled = true;
            this->comboBox_typeDemande->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Particulier", L"Entreprise"});
            this->comboBox_typeDemande->Location = System::Drawing::Point(131, 97);
            this->comboBox_typeDemande->Name = L"comboBox_typeDemande";
            this->comboBox_typeDemande->Size = System::Drawing::Size(176, 21);
            this->comboBox_typeDemande->TabIndex = 318;
            // 
            // textBox_sanitaireProduit
            // 
            this->textBox_sanitaireProduit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, 
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->textBox_sanitaireProduit->Location = System::Drawing::Point(322, 251);
            this->textBox_sanitaireProduit->Name = L"textBox_sanitaireProduit";
            this->textBox_sanitaireProduit->Size = System::Drawing::Size(176, 20);
            this->textBox_sanitaireProduit->TabIndex = 285;
            // 
            // textBox_pGros
            // 
            this->textBox_pGros->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->textBox_pGros->Location = System::Drawing::Point(322, 369);
            this->textBox_pGros->Name = L"textBox_pGros";
            this->textBox_pGros->Size = System::Drawing::Size(176, 20);
            this->textBox_pGros->TabIndex = 294;
            // 
            // textBox_douane
            // 
            this->textBox_douane->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->textBox_douane->Location = System::Drawing::Point(322, 290);
            this->textBox_douane->Name = L"textBox_douane";
            this->textBox_douane->Size = System::Drawing::Size(176, 20);
            this->textBox_douane->TabIndex = 284;
            // 
            // textBox_nominationProduit
            // 
            this->textBox_nominationProduit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, 
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->textBox_nominationProduit->Location = System::Drawing::Point(322, 97);
            this->textBox_nominationProduit->Name = L"textBox_nominationProduit";
            this->textBox_nominationProduit->Size = System::Drawing::Size(176, 20);
            this->textBox_nominationProduit->TabIndex = 281;
            // 
            // label18
            // 
            this->label18->AutoSize = true;
            this->label18->BackColor = System::Drawing::Color::Transparent;
            this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->label18->Location = System::Drawing::Point(322, 272);
            this->label18->Name = L"label18";
            this->label18->Size = System::Drawing::Size(164, 13);
            this->label18->TabIndex = 296;
            this->label18->Text = L"Numéro de déclaration douanière";
            // 
            // label20
            // 
            this->label20->AutoSize = true;
            this->label20->BackColor = System::Drawing::Color::Transparent;
            this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->label20->Location = System::Drawing::Point(322, 431);
            this->label20->Name = L"label20";
            this->label20->Size = System::Drawing::Size(131, 13);
            this->label20->TabIndex = 292;
            this->label20->Text = L"Commentaire sur le produit";
            // 
            // textBox_pUnitaire
            // 
            this->textBox_pUnitaire->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, 
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->textBox_pUnitaire->Location = System::Drawing::Point(322, 408);
            this->textBox_pUnitaire->Name = L"textBox_pUnitaire";
            this->textBox_pUnitaire->Size = System::Drawing::Size(82, 20);
            this->textBox_pUnitaire->TabIndex = 295;
            // 
            // textBox_origine
            // 
            this->textBox_origine->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->textBox_origine->Location = System::Drawing::Point(322, 172);
            this->textBox_origine->Name = L"textBox_origine";
            this->textBox_origine->Size = System::Drawing::Size(176, 20);
            this->textBox_origine->TabIndex = 283;
            // 
            // textBox_valDouane
            // 
            this->textBox_valDouane->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, 
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->textBox_valDouane->Location = System::Drawing::Point(322, 329);
            this->textBox_valDouane->Name = L"textBox_valDouane";
            this->textBox_valDouane->Size = System::Drawing::Size(176, 20);
            this->textBox_valDouane->TabIndex = 293;
            // 
            // label17
            // 
            this->label17->AutoSize = true;
            this->label17->BackColor = System::Drawing::Color::Transparent;
            this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->label17->Location = System::Drawing::Point(322, 235);
            this->label17->Name = L"label17";
            this->label17->Size = System::Drawing::Size(144, 13);
            this->label17->TabIndex = 297;
            this->label17->Text = L"Numéro de certificat sanitaire";
            // 
            // label19
            // 
            this->label19->AutoSize = true;
            this->label19->BackColor = System::Drawing::Color::Transparent;
            this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->label19->Location = System::Drawing::Point(322, 159);
            this->label19->Name = L"label19";
            this->label19->Size = System::Drawing::Size(90, 13);
            this->label19->TabIndex = 300;
            this->label19->Text = L"Origine du produit\r\n";
            // 
            // label22
            // 
            this->label22->AutoSize = true;
            this->label22->BackColor = System::Drawing::Color::Transparent;
            this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->label22->Location = System::Drawing::Point(322, 81);
            this->label22->Name = L"label22";
            this->label22->Size = System::Drawing::Size(114, 13);
            this->label22->TabIndex = 287;
            this->label22->Text = L"*Nomination du produit";
            // 
            // label21
            // 
            this->label21->AutoSize = true;
            this->label21->BackColor = System::Drawing::Color::Transparent;
            this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->label21->Location = System::Drawing::Point(319, 120);
            this->label21->Name = L"label21";
            this->label21->Size = System::Drawing::Size(51, 13);
            this->label21->TabIndex = 288;
            this->label21->Text = L"*Quantité";
            // 
            // label16
            // 
            this->label16->AutoSize = true;
            this->label16->BackColor = System::Drawing::Color::Transparent;
            this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->label16->Location = System::Drawing::Point(322, 195);
            this->label16->Name = L"label16";
            this->label16->Size = System::Drawing::Size(180, 13);
            this->label16->TabIndex = 298;
            this->label16->Text = L"*Numéro de certificat d\'homologation";
            // 
            // textBox_homologation
            // 
            this->textBox_homologation->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, 
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->textBox_homologation->Location = System::Drawing::Point(322, 211);
            this->textBox_homologation->Name = L"textBox_homologation";
            this->textBox_homologation->Size = System::Drawing::Size(176, 20);
            this->textBox_homologation->TabIndex = 299;
            // 
            // label15
            // 
            this->label15->AutoSize = true;
            this->label15->BackColor = System::Drawing::Color::Transparent;
            this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->label15->Location = System::Drawing::Point(322, 313);
            this->label15->Name = L"label15";
            this->label15->Size = System::Drawing::Size(85, 13);
            this->label15->TabIndex = 291;
            this->label15->Text = L"Valeur douanère";
            // 
            // label13
            // 
            this->label13->AutoSize = true;
            this->label13->BackColor = System::Drawing::Color::Transparent;
            this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->label13->Location = System::Drawing::Point(319, 392);
            this->label13->Name = L"label13";
            this->label13->Size = System::Drawing::Size(61, 13);
            this->label13->TabIndex = 289;
            this->label13->Text = L"Prix unitaire";
            // 
            // label14
            // 
            this->label14->AutoSize = true;
            this->label14->BackColor = System::Drawing::Color::Transparent;
            this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->label14->Location = System::Drawing::Point(319, 355);
            this->label14->Name = L"label14";
            this->label14->Size = System::Drawing::Size(62, 13);
            this->label14->TabIndex = 290;
            this->label14->Text = L"Prix en gros";
            // 
            // pictureBox1
            // 
            this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
            this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.BackgroundImage")));
            this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox1->Location = System::Drawing::Point(700, 48);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(190, 117);
            this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox1->TabIndex = 340;
            this->pictureBox1->TabStop = false;
            this->pictureBox1->Click += gcnew System::EventHandler(this, &formMiseAjours::pictureBox1_Click);
            // 
            // pictureBox2
            // 
            this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
            this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.BackgroundImage")));
            this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox2->Location = System::Drawing::Point(700, 184);
            this->pictureBox2->Name = L"pictureBox2";
            this->pictureBox2->Size = System::Drawing::Size(190, 119);
            this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox2->TabIndex = 341;
            this->pictureBox2->TabStop = false;
            this->pictureBox2->Click += gcnew System::EventHandler(this, &formMiseAjours::pictureBox2_Click);
            // 
            // pictureBox3
            // 
            this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
            this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox3.BackgroundImage")));
            this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->pictureBox3->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox3->Location = System::Drawing::Point(700, 322);
            this->pictureBox3->Name = L"pictureBox3";
            this->pictureBox3->Size = System::Drawing::Size(190, 122);
            this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox3->TabIndex = 342;
            this->pictureBox3->TabStop = false;
            this->pictureBox3->Click += gcnew System::EventHandler(this, &formMiseAjours::pictureBox3_Click);
            // 
            // openFileDialog1
            // 
            this->openFileDialog1->FileName = L"openFileDialog1";
            // 
            // listBox1
            // 
            this->listBox1->FormattingEnabled = true;
            this->listBox1->Location = System::Drawing::Point(42, 100);
            this->listBox1->Name = L"listBox1";
            this->listBox1->Size = System::Drawing::Size(76, 407);
            this->listBox1->TabIndex = 346;
            this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &formMiseAjours::listBox1_SelectedIndexChanged);
            // 
            // label27
            // 
            this->label27->AutoSize = true;
            this->label27->BackColor = System::Drawing::Color::Transparent;
            this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->label27->Location = System::Drawing::Point(40, 81);
            this->label27->Name = L"label27";
            this->label27->Size = System::Drawing::Size(78, 13);
            this->label27->TabIndex = 347;
            this->label27->Text = L"No autorisation";
            // 
            // pictureBox4
            // 
            this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
            this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox4.Image")));
            this->pictureBox4->Location = System::Drawing::Point(634, 49);
            this->pictureBox4->Name = L"pictureBox4";
            this->pictureBox4->Size = System::Drawing::Size(68, 34);
            this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox4->TabIndex = 352;
            this->pictureBox4->TabStop = false;
            // 
            // label33
            // 
            this->label33->AutoSize = true;
            this->label33->BackColor = System::Drawing::Color::Transparent;
            this->label33->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label33->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 12, System::Drawing::FontStyle::Italic));
            this->label33->Location = System::Drawing::Point(515, 19);
            this->label33->Name = L"label33";
            this->label33->Size = System::Drawing::Size(158, 38);
            this->label33->TabIndex = 351;
            this->label33->Text = L"cliquez dans les rectangles\r\npour changer les photo";
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->BackColor = System::Drawing::Color::Transparent;
            this->label10->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 14, System::Drawing::FontStyle::Italic));
            this->label10->Location = System::Drawing::Point(42, 26);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(345, 22);
            this->label10->TabIndex = 353;
            this->label10->Text = L"Selectionnez le numéro d\'autorisation pour éditer";
            // 
            // pictureBox5
            // 
            this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
            this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox5.Image")));
            this->pictureBox5->Location = System::Drawing::Point(42, 51);
            this->pictureBox5->Name = L"pictureBox5";
            this->pictureBox5->Size = System::Drawing::Size(47, 27);
            this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox5->TabIndex = 354;
            this->pictureBox5->TabStop = false;
            // 
            // label34
            // 
            this->label34->AutoSize = true;
            this->label34->BackColor = System::Drawing::Color::Transparent;
            this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->label34->Location = System::Drawing::Point(774, 306);
            this->label34->Name = L"label34";
            this->label34->Size = System::Drawing::Size(115, 13);
            this->label34->TabIndex = 357;
            this->label34->Text = L"image de la LOCALITE";
            // 
            // label35
            // 
            this->label35->AutoSize = true;
            this->label35->BackColor = System::Drawing::Color::Transparent;
            this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->label35->Location = System::Drawing::Point(788, 168);
            this->label35->Name = L"label35";
            this->label35->Size = System::Drawing::Size(102, 13);
            this->label35->TabIndex = 356;
            this->label35->Text = L"image du PRODUIT";
            // 
            // label36
            // 
            this->label36->AutoSize = true;
            this->label36->BackColor = System::Drawing::Color::Transparent;
            this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->label36->Location = System::Drawing::Point(729, 35);
            this->label36->Name = L"label36";
            this->label36->Size = System::Drawing::Size(161, 13);
            this->label36->TabIndex = 355;
            this->label36->Text = L"image ou logo du DEMANDEUR";
            // 
            // formMiseAjours
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
            this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
            this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->ClientSize = System::Drawing::Size(930, 528);
            this->Controls->Add(this->label34);
            this->Controls->Add(this->label35);
            this->Controls->Add(this->label36);
            this->Controls->Add(this->label10);
            this->Controls->Add(this->label33);
            this->Controls->Add(this->label27);
            this->Controls->Add(this->listBox1);
            this->Controls->Add(this->pictureBox3);
            this->Controls->Add(this->pictureBox2);
            this->Controls->Add(this->pictureBox1);
            this->Controls->Add(this->panel1);
            this->Controls->Add(this->button_annuler);
            this->Controls->Add(this->button_terminer);
            this->Controls->Add(this->textBox_adresseDemandeur);
            this->Controls->Add(this->textBox_fax);
            this->Controls->Add(this->comboBox_unite);
            this->Controls->Add(this->label12);
            this->Controls->Add(this->label25);
            this->Controls->Add(this->label6);
            this->Controls->Add(this->textBox_adressLocal);
            this->Controls->Add(this->textBox_demandeur);
            this->Controls->Add(this->textBox_contratAcquisition);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->label28);
            this->Controls->Add(this->label7);
            this->Controls->Add(this->label9);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->textBox_assurance);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->label24);
            this->Controls->Add(this->textBox_tel);
            this->Controls->Add(this->textBox_commentaire);
            this->Controls->Add(this->textBox_mail);
            this->Controls->Add(this->textBox_quantite);
            this->Controls->Add(this->textBox_web);
            this->Controls->Add(this->label8);
            this->Controls->Add(this->label32);
            this->Controls->Add(this->textBox_bancaire);
            this->Controls->Add(this->textBox_bp);
            this->Controls->Add(this->textBox_certfSanitaire);
            this->Controls->Add(this->label31);
            this->Controls->Add(this->textBox_taxe);
            this->Controls->Add(this->label11);
            this->Controls->Add(this->label23);
            this->Controls->Add(this->label26);
            this->Controls->Add(this->comboBox_typeLocal);
            this->Controls->Add(this->textBox_numRegi);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->comboBox_typeDemande);
            this->Controls->Add(this->textBox_sanitaireProduit);
            this->Controls->Add(this->textBox_pGros);
            this->Controls->Add(this->textBox_douane);
            this->Controls->Add(this->textBox_nominationProduit);
            this->Controls->Add(this->label18);
            this->Controls->Add(this->label20);
            this->Controls->Add(this->textBox_pUnitaire);
            this->Controls->Add(this->textBox_origine);
            this->Controls->Add(this->textBox_valDouane);
            this->Controls->Add(this->label17);
            this->Controls->Add(this->label19);
            this->Controls->Add(this->label22);
            this->Controls->Add(this->label21);
            this->Controls->Add(this->label16);
            this->Controls->Add(this->textBox_homologation);
            this->Controls->Add(this->label15);
            this->Controls->Add(this->label13);
            this->Controls->Add(this->label14);
            this->Controls->Add(this->pictureBox4);
            this->Controls->Add(this->pictureBox5);
            this->DoubleBuffered = true;
            this->MaximizeBox = false;
            this->MaximumSize = System::Drawing::Size(940, 560);
            this->MinimumSize = System::Drawing::Size(940, 560);
            this->Name = L"formMiseAjours";
            this->Text = L"Mise à jours de l\'autorisation";
            this->Load += gcnew System::EventHandler(this, &formMiseAjours::formMiseAjours_Load);
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
         autorisation A; demande D;  localite L; produit P;
         int idProduit,idLocal;
         
        array<unsigned char> ^ img_demand ;
        array<unsigned char> ^ img_prod ;
        array<unsigned char> ^ img_local ;

private: System::Void formMiseAjours_Load(System::Object^  sender, System::EventArgs^  e) {
            
             OdbcDataReader^ resultNUM= autorisation::lesNumAutorisation();
                   listBox1->BeginUpdate();
                    while(resultNUM->Read())
		                    listBox1->Items->Add(resultNUM->GetValue(0)->ToString());
                    
                     listBox1->EndUpdate();
   
                     if(listBox1->Items->Count!=0)
                        listBox1->SelectedItem = listBox1->Items[0];
                     else
                       MessageBox::Show("Il n'a pas d'autorisation dans la base de données");
         }
         
    private: int numAutorisation;
private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
              
             numAutorisation=Convert::ToInt32(listBox1->Items[listBox1->SelectedIndex]);
             
              this->Text = L"Mise à jours de l\'autorisation No "+numAutorisation;
              
             OdbcDataReader ^  result= autorisation::trouver(numAutorisation);
                    while(result->Read()){
                        A.numAutorisation=int::Parse(result->GetValue(0)->ToString());
                        A.refdemande=int::Parse(result->GetValue(1)->ToString());

                        A.statut=result->GetValue(2)->ToString();

                        if(result->GetValue(2)->ToString()=="accepter")
                            radioButton1->Checked=true;
                        if(result->GetValue(2)->ToString()=="en attente")
                            radioButton3->Checked=true;
                        if(result->GetValue(2)->ToString()=="rejetter")
                            radioButton2->Checked=true;
                       
                        A.refAdministrateur=result->GetValue(3)->ToString();
                    }
 //-------------------------------------------------------------  
            
            OdbcDataReader ^  result1 = demande::trouver(A.refdemande); 
                    while(result1->Read()){
                                textBox_numRegi->Text=result1->GetValue(0)->ToString();
                               
                                if(result1->GetValue(1)->ToString()=="particulier"){
                                    comboBox_typeDemande->SelectedIndex=0;
                                    label1->Text="Nom et Prénom du demandeur";}
                                if(result1->GetValue(1)->ToString()=="entreprise"){
                                    comboBox_typeDemande->SelectedIndex=1;
                                    label1->Text="Raison social ou Forme juridique";}
                      
		                        textBox_demandeur->Text=result1->GetValue(2)->ToString();
		                        textBox_bancaire->Text=result1->GetValue(3)->ToString();
		                        textBox_assurance->Text=result1->GetValue(4)->ToString();
		                        textBox_tel->Text=result1->GetValue(5)->ToString();
		                        textBox_fax->Text=result1->GetValue(6)->ToString();
		                        textBox_mail->Text=result1->GetValue(7)->ToString();
		                        textBox_web->Text=result1->GetValue(8)->ToString();
		                        textBox_bp->Text=result1->GetValue(9)->ToString();
		                        textBox_adresseDemandeur->Text=result1->GetValue(10)->ToString();
                                idProduit=int::Parse(result1->GetValue(11)->ToString());
                                idLocal=int::Parse(result1->GetValue(12)->ToString());

                                  array<unsigned char> ^ bytImage2; 
                                bytImage2=( array<unsigned char>^)result1->GetValue(13);
                                   
                                
                                 MemoryStream ^mstImage2 = gcnew MemoryStream(bytImage2);
                                            Image ^img = Image::FromStream(mstImage2);
                                            pictureBox1->Image = img;
                            }
//------------------------------------------------------------------
                    OdbcDataReader ^  result2 = localite::trouver(idLocal); 
                        while(result2->Read()){
		                        textBox_contratAcquisition->Text=result2->GetValue(0)->ToString();
                                
                                if(result2->GetValue(1)->ToString()=="Boutique")
                                    comboBox_typeLocal->SelectedIndex=0;
                                if(result2->GetValue(1)->ToString()=="Magasin")
                                    comboBox_typeLocal->SelectedIndex=1;
                                if(result2->GetValue(1)->ToString()=="Centre commercial")
                                    comboBox_typeLocal->SelectedIndex=2;
                                if(result2->GetValue(1)->ToString()=="Entrepôt")
                                    comboBox_typeLocal->SelectedIndex=3;

		                        textBox_certfSanitaire->Text=result2->GetValue(2)->ToString();
		                        textBox_adressLocal->Text = result2->GetValue(3)->ToString();

                                
                                  array<unsigned char> ^ bytImage3; 
                                bytImage3=( array<unsigned char>^)result2->GetValue(4);
                                   
                                
                                 MemoryStream ^mstImage3 = gcnew MemoryStream(bytImage3);
                                            Image ^img2 = Image::FromStream(mstImage3);
                                            pictureBox3->Image = img2;
                                            }
//------------------------------------------------------------------------
                    OdbcDataReader ^  result3 = produit::trouver(idProduit); 
                        while(result3->Read()){
		                        textBox_homologation->Text=result3->GetValue(0)->ToString();
		                        textBox_nominationProduit->Text= result3->GetValue(1)->ToString();
		                        textBox_quantite->Text= result3->GetValue(2)->ToString();
                                
                                if(result3->GetValue(3)->ToString()=="Kilogramme")
                                    comboBox_unite->SelectedIndex=0;
                                if(result3->GetValue(3)->ToString()=="Litre")
                                    comboBox_unite->SelectedIndex=1;
                                if(result3->GetValue(3)->ToString()=="Mettre cube")
                                    comboBox_unite->SelectedIndex=2;

		                        textBox_origine->Text= result3->GetValue(4)->ToString();
		                        textBox_sanitaireProduit->Text= result3->GetValue(5)->ToString();
		                        textBox_douane->Text= result3->GetValue(6)->ToString();
		                        textBox_valDouane->Text= result3->GetValue(7)->ToString();
		                        textBox_pUnitaire->Text= result3->GetValue(8)->ToString();
		                        textBox_pGros->Text= result3->GetValue(9)->ToString();
		                        textBox_taxe->Text= result3->GetValue(10)->ToString();
		                        textBox_commentaire->Text= result3->GetValue(11)->ToString(); 
                                
                                  array<unsigned char> ^ bytImage4; 
                                bytImage4=( array<unsigned char>^)result3->GetValue(12);
                                   
                                
                                 MemoryStream ^mstImage4 = gcnew MemoryStream(bytImage4);
                                            Image ^img3 = Image::FromStream(mstImage4);
                                            pictureBox2->Image = img3;
                        }
         }
private: System::Void comboBox_typeDemande_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
                 if(comboBox_typeDemande->SelectedItem=="Entreprise"){
                     label1->Text="Raison social ou Forme juridique";
                 }

                if(comboBox_typeDemande->SelectedItem=="Particulier"){
                    label1->Text="Nom et Prénom du demandeur";
                 }
         }
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
				    openFileDialog1->Title = "Selectionner l'image à inserer";
				    openFileDialog1->Filter = "Fichiers image (*.BMP;*.JPG;*.GIF)|*.BMP;*.JPG;*.GIF|All files (*.*)|*.*" ;
                    openFileDialog1->ShowDialog();
                    pictureBox1->Image = Image::FromFile(openFileDialog1->FileName);
         }
private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
				    openFileDialog1->Title = "Selectionner l'image à inserer";
				    openFileDialog1->Filter = "Fichiers image (*.BMP;*.JPG;*.GIF)|*.BMP;*.JPG;*.GIF|All files (*.*)|*.*" ;
                    openFileDialog1->ShowDialog();
                    pictureBox2->Image = Image::FromFile(openFileDialog1->FileName);

         }
private: System::Void pictureBox3_Click(System::Object^  sender, System::EventArgs^  e) {
				    openFileDialog1->Title = "Selectionner l'image à inserer";
				    openFileDialog1->Filter = "Fichiers image (*.BMP;*.JPG;*.GIF)|*.BMP;*.JPG;*.GIF|All files (*.*)|*.*" ;
                    openFileDialog1->ShowDialog();
                    pictureBox3->Image = Image::FromFile(openFileDialog1->FileName);
         }
private: System::Void button_terminer_Click(System::Object^  sender, System::EventArgs^  e) {
             
            try{
                    MemoryStream^ buff_demand  = gcnew MemoryStream();
                    pictureBox1->Image->Save(buff_demand, System::Drawing::Imaging::ImageFormat::Jpeg);
                    img_demand = buff_demand->GetBuffer();

                    MemoryStream^ buff_prod  = gcnew MemoryStream();
                    pictureBox2->Image->Save(buff_prod, System::Drawing::Imaging::ImageFormat::Jpeg);
                    img_prod = buff_prod->GetBuffer();

                    MemoryStream^ buff_local  = gcnew MemoryStream();
                    pictureBox3->Image->Save(buff_local, System::Drawing::Imaging::ImageFormat::Jpeg);
                    img_local = buff_local->GetBuffer();
            }
            catch(Exception ^e){MessageBox::Show("Vous devez inserer des images de format JPEG et moins de 300 Ko");return;}

            try{
//=produit====================================================
		            P.munCertifHomologation =Int32::Parse(textBox_homologation->Text);
		            P.nom=textBox_nominationProduit->Text ;
		            P.numCertifSanitaire=Int32::Parse(textBox_sanitaireProduit->Text);
		            P.numDeclarationDouaniere=Int32::Parse(textBox_douane->Text);
		            P.quantite=Int32::Parse(textBox_quantite->Text);
                    P.unite=comboBox_unite->SelectedItem->ToString();
		            P.valDouaniere=double::Parse(textBox_valDouane->Text);
		            P.prixUnitaire =double::Parse(textBox_pUnitaire->Text);
		            P.prixEnGros=double::Parse(textBox_pGros->Text);
		            P.taxe=double::Parse(textBox_taxe->Text);
		            P.origine=textBox_origine->Text;
		            P.commentaire=textBox_commentaire->Text;
                    P.image=img_prod;
//=localite====================================================   
		            L.contratAcquisition =Int32::Parse(textBox_contratAcquisition->Text);
		            L.numCertifSanitaire =Int32::Parse(textBox_certfSanitaire->Text);
		            L.typeLocalite=comboBox_typeLocal->SelectedItem->ToString() ;
		            L.adresse=textBox_adressLocal->Text ;
                    L.image=img_local;
//=demande=====================================================   
		            D.numRegCom=Int32::Parse(textBox_numRegi->Text);
		            D.comptbanq=Int32::Parse(textBox_bancaire->Text);
		            D.numAssurance=Int32::Parse(textBox_assurance->Text);
		            D.bp=Int32::Parse(textBox_bp->Text);
		            D.demandeur=textBox_demandeur->Text;
		            D.type=comboBox_typeDemande->SelectedItem->ToString();
		            D.tel=textBox_tel->Text;
		            D.fax=textBox_fax->Text;
		            D.mail=textBox_mail->Text;
		            D.web=textBox_web->Text ;
		            D.adresse =textBox_adresseDemandeur->Text;
                    D.refProduit=P.munCertifHomologation;
                    D.refLocalite=L.contratAcquisition;
                    D.image=img_demand;
//=Autorisation============================================== 
                    A.refdemande=D.numRegCom;
		            A.refAdministrateur=session::admin.login;
		            if(radioButton1->Checked)
                        A.statut="accepter" ;
		            if(radioButton2->Checked)
                        A.statut="en attente" ;
		            if(radioButton3->Checked)
                        A.statut="rejetter" ;		                         
            }
            catch(Exception ^e){MessageBox::Show("Format incorect! Veillez revoir les differents champs");return;}
        
           try{P.mettreAjours(idProduit);}catch(Exception ^e){MessageBox::Show("Les informations du produit n'ont pas été enregistrées !\nVeillez corriger les erreurs suivantes :\n"+e->Message);return;}
           try{L.mettreAjours(idLocal);}catch(Exception ^e){MessageBox::Show("Les informations de la localité n'ont pas été enregistrées !\nVeillez corriger les erreurs suivantes :\n"+e->Message);return;}
		   try{D.mettreAjours(A.refdemande);}catch(Exception ^e){MessageBox::Show("Les informations du demandeur n'ont pas été enregistrées !\nVeillez corriger les erreurs suivantes :\n"+e->Message);return;}
           try{A.mettreAjours(numAutorisation);}catch(Exception ^e){MessageBox::Show("L'aurisation n'a pas été enregistrée !\nVeillez corriger les erreurs suivantes :\n"+e->Message);return;}
            
           MessageBox::Show("L'autorisation a été bien Mise à jours");
         }
private: System::Void button_annuler_Click(System::Object^  sender, System::EventArgs^  e) {
             this->Close();
         }
};
}
