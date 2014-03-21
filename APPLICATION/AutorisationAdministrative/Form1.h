#pragma once
#include "formDemande.h"
#include "formVoirAutorisation.h"
#include "formMiseAjours.h"
#include "donnees.h"

namespace AutorisationAdministrative {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing; 
    using namespace Odbc;

	/// <summary>
	/// Description résumée de Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^  label3_titre;
	private: System::Windows::Forms::Panel^  panel1_titre;
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel2;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  nouveauToolStripMenuItem;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::PictureBox^  pictureBox1_titre;


	private: System::Windows::Forms::ToolStripMenuItem^  afficerToolStripMenuItem1;
    private: System::Windows::Forms::ToolStripMenuItem^  miseAjourToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  quiterToolStripMenuItem;
	private: System::Windows::Forms::Panel^  panel_connexion;
	private: System::Windows::Forms::PictureBox^  pictureBox1;

	private: System::Windows::Forms::PictureBox^  pictureBox1_close;
	private: System::Windows::Forms::Label^  label3;
    private: System::Windows::Forms::Button^  button_connexion;

	private: System::Windows::Forms::Label^  label1;
    private: System::Windows::Forms::TextBox^  textBox_user;



	private: System::Windows::Forms::Label^  label2;
    private: System::Windows::Forms::TextBox^  textBox_password;



    private: System::Windows::Forms::Label^  label6;
    private: System::Windows::Forms::Label^  label7;
    private: System::Windows::Forms::TextBox^  textBox_login;

    private: System::Windows::Forms::Label^  label8;
    private: System::Windows::Forms::TextBox^  textBox_motDePasse;

    private: System::Windows::Forms::Label^  label_error;
    private: System::Windows::Forms::LinkLabel^  linkLabel_inscription;


    private: System::Windows::Forms::Label^  label11;
    private: System::Windows::Forms::TextBox^  textBox_confirmer;

    private: System::Windows::Forms::Button^  button_inscrir;
    private: System::Windows::Forms::Label^  label9;
    private: System::Windows::Forms::TextBox^  textBox_log;

    private: System::Windows::Forms::Label^  label10;
    private: System::Windows::Forms::TextBox^  textBox_pass;


    private: System::Windows::Forms::Panel^  panel_config;
    private: System::Windows::Forms::TextBox^  textBox_server;


    private: System::Windows::Forms::Label^  label12;
    private: System::Windows::Forms::TextBox^  textBox_database;

    private: System::Windows::Forms::Label^  label13;
    private: System::Windows::Forms::Button^  button_OKconfig;

    private: System::Windows::Forms::Panel^  panel_inscription;

    private: System::Windows::Forms::Label^  label14;
    private: System::Windows::Forms::Label^  label4;
    private: System::Windows::Forms::TextBox^  textBox_poste;
    private: System::Windows::Forms::TextBox^  textBox_prenom;
    private: System::Windows::Forms::Label^  label5;
    private: System::Windows::Forms::Label^  label15;
    private: System::Windows::Forms::TextBox^  textBox_nom;
    private: System::Windows::Forms::Button^  button1;
    private: System::Windows::Forms::ToolStripMenuItem^  configurationToolStripMenuItem;
    private: System::Windows::Forms::Button^  button2;













	private: System::ComponentModel::IContainer^  components;
	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->label3_titre = (gcnew System::Windows::Forms::Label());
			this->panel1_titre = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1_titre = (gcnew System::Windows::Forms::PictureBox());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel2 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->nouveauToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->afficerToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->miseAjourToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->configurationToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->quiterToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel_connexion = (gcnew System::Windows::Forms::Panel());
			this->linkLabel_inscription = (gcnew System::Windows::Forms::LinkLabel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox_login = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox_motDePasse = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1_close = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button_connexion = (gcnew System::Windows::Forms::Button());
			this->label_error = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox_user = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox_password = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox_confirmer = (gcnew System::Windows::Forms::TextBox());
			this->button_inscrir = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox_log = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox_pass = (gcnew System::Windows::Forms::TextBox());
			this->panel_config = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button_OKconfig = (gcnew System::Windows::Forms::Button());
			this->textBox_server = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox_database = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->panel_inscription = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox_poste = (gcnew System::Windows::Forms::TextBox());
			this->textBox_prenom = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox_nom = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->panel1_titre->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1_titre))->BeginInit();
			this->statusStrip1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->panel_connexion->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1_close))->BeginInit();
			this->panel_config->SuspendLayout();
			this->panel_inscription->SuspendLayout();
			this->SuspendLayout();
			// 
			// label3_titre
			// 
			this->label3_titre->AutoSize = true;
			this->label3_titre->BackColor = System::Drawing::Color::Transparent;
			this->label3_titre->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 16));
			this->label3_titre->ForeColor = System::Drawing::Color::White;
			this->label3_titre->Location = System::Drawing::Point(6, 23);
			this->label3_titre->Name = L"label3_titre";
			this->label3_titre->Size = System::Drawing::Size(630, 27);
			this->label3_titre->TabIndex = 5;
			this->label3_titre->Text = L"Service d\' autorisation administrative du commerce alimentaire";
			this->label3_titre->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// panel1_titre
			// 
			this->panel1_titre->BackColor = System::Drawing::Color::Transparent;
			this->panel1_titre->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel1_titre.BackgroundImage")));
			this->panel1_titre->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1_titre->Controls->Add(this->pictureBox1_titre);
			this->panel1_titre->Controls->Add(this->label3_titre);
			this->panel1_titre->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1_titre->Location = System::Drawing::Point(0, 0);
			this->panel1_titre->Name = L"panel1_titre";
			this->panel1_titre->Size = System::Drawing::Size(1059, 59);
			this->panel1_titre->TabIndex = 6;
			// 
			// pictureBox1_titre
			// 
			this->pictureBox1_titre->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1_titre->Dock = System::Windows::Forms::DockStyle::Right;
			this->pictureBox1_titre->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1_titre.Image")));
			this->pictureBox1_titre->Location = System::Drawing::Point(640, 0);
			this->pictureBox1_titre->Name = L"pictureBox1_titre";
			this->pictureBox1_titre->Size = System::Drawing::Size(419, 59);
			this->pictureBox1_titre->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1_titre->TabIndex = 15;
			this->pictureBox1_titre->TabStop = false;
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->toolStripStatusLabel2});
			this->statusStrip1->Location = System::Drawing::Point(0, 640);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(1059, 22);
			this->statusStrip1->TabIndex = 42;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel2
			// 
			this->toolStripStatusLabel2->BackColor = System::Drawing::SystemColors::Control;
			this->toolStripStatusLabel2->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 11.25F, System::Drawing::FontStyle::Italic));
			this->toolStripStatusLabel2->Name = L"toolStripStatusLabel2";
			this->toolStripStatusLabel2->Size = System::Drawing::Size(233, 17);
			this->toolStripStatusLabel2->Text = L"réaliser par DIOUBATE SEKOU, LSI-1";
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"menuStrip1.BackgroundImage")));
			this->menuStrip1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {this->nouveauToolStripMenuItem, 
				this->afficerToolStripMenuItem1, this->miseAjourToolStripMenuItem, this->configurationToolStripMenuItem, this->quiterToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 59);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1059, 24);
			this->menuStrip1->TabIndex = 43;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// nouveauToolStripMenuItem
			// 
			this->nouveauToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"nouveauToolStripMenuItem.Image")));
			this->nouveauToolStripMenuItem->Name = L"nouveauToolStripMenuItem";
			this->nouveauToolStripMenuItem->Size = System::Drawing::Size(83, 23);
			this->nouveauToolStripMenuItem->Text = L"Nouveau";
			this->nouveauToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::nouveauToolStripMenuItem_Click);
			// 
			// afficerToolStripMenuItem1
			// 
			this->afficerToolStripMenuItem1->Name = L"afficerToolStripMenuItem1";
			this->afficerToolStripMenuItem1->Size = System::Drawing::Size(61, 23);
			this->afficerToolStripMenuItem1->Text = L"Afficher";
			this->afficerToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::afficerToolStripMenuItem1_Click);
			// 
			// miseAjourToolStripMenuItem
			// 
			this->miseAjourToolStripMenuItem->Name = L"miseAjourToolStripMenuItem";
			this->miseAjourToolStripMenuItem->Size = System::Drawing::Size(82, 23);
			this->miseAjourToolStripMenuItem->Text = L"Mise à jours";
			this->miseAjourToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::miseAjourToolStripMenuItem_Click);
			// 
			// configurationToolStripMenuItem
			// 
			this->configurationToolStripMenuItem->Name = L"configurationToolStripMenuItem";
			this->configurationToolStripMenuItem->Size = System::Drawing::Size(93, 23);
			this->configurationToolStripMenuItem->Text = L"Configuration";
			this->configurationToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::configurationToolStripMenuItem_Click);
			// 
			// quiterToolStripMenuItem
			// 
			this->quiterToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"quiterToolStripMenuItem.Image")));
			this->quiterToolStripMenuItem->Name = L"quiterToolStripMenuItem";
			this->quiterToolStripMenuItem->Size = System::Drawing::Size(68, 23);
			this->quiterToolStripMenuItem->Text = L"Quiter";
			this->quiterToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::quiterToolStripMenuItem_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// panel_connexion
			// 
			this->panel_connexion->BackColor = System::Drawing::Color::Transparent;
			this->panel_connexion->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel_connexion.BackgroundImage")));
			this->panel_connexion->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel_connexion->Controls->Add(this->linkLabel_inscription);
			this->panel_connexion->Controls->Add(this->label6);
			this->panel_connexion->Controls->Add(this->label7);
			this->panel_connexion->Controls->Add(this->textBox_login);
			this->panel_connexion->Controls->Add(this->label8);
			this->panel_connexion->Controls->Add(this->textBox_motDePasse);
			this->panel_connexion->Controls->Add(this->pictureBox1);
			this->panel_connexion->Controls->Add(this->pictureBox1_close);
			this->panel_connexion->Controls->Add(this->label3);
			this->panel_connexion->Controls->Add(this->button_connexion);
			this->panel_connexion->Location = System::Drawing::Point(11, 100);
			this->panel_connexion->Name = L"panel_connexion";
			this->panel_connexion->Size = System::Drawing::Size(657, 286);
			this->panel_connexion->TabIndex = 45;
			// 
			// linkLabel_inscription
			// 
			this->linkLabel_inscription->AutoSize = true;
			this->linkLabel_inscription->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->linkLabel_inscription->LinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->linkLabel_inscription->Location = System::Drawing::Point(420, 230);
			this->linkLabel_inscription->Name = L"linkLabel_inscription";
			this->linkLabel_inscription->Size = System::Drawing::Size(205, 24);
			this->linkLabel_inscription->TabIndex = 31;
			this->linkLabel_inscription->TabStop = true;
			this->linkLabel_inscription->Text = L"Nouveau adminisrateur";
			this->linkLabel_inscription->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Form1::linkLabel_inscription_LinkClicked);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(354, 59);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(271, 17);
			this->label6->TabIndex = 30;
			this->label6->Text = L"Identification_______________________";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(431, 105);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(43, 17);
			this->label7->TabIndex = 28;
			this->label7->Text = L"Login";
			// 
			// textBox_login
			// 
			this->textBox_login->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox_login->Location = System::Drawing::Point(480, 104);
			this->textBox_login->Name = L"textBox_login";
			this->textBox_login->Size = System::Drawing::Size(140, 20);
			this->textBox_login->TabIndex = 26;
			this->textBox_login->Text = L"titi";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(381, 131);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(93, 17);
			this->label8->TabIndex = 29;
			this->label8->Text = L"Mot de passe";
			// 
			// textBox_motDePasse
			// 
			this->textBox_motDePasse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox_motDePasse->Location = System::Drawing::Point(480, 130);
			this->textBox_motDePasse->Name = L"textBox_motDePasse";
			this->textBox_motDePasse->PasswordChar = '*';
			this->textBox_motDePasse->Size = System::Drawing::Size(140, 20);
			this->textBox_motDePasse->TabIndex = 27;
			this->textBox_motDePasse->Text = L"titi";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(44, 60);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(269, 189);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 24;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox1_close
			// 
			this->pictureBox1_close->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1_close->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1_close->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1_close.Image")));
			this->pictureBox1_close->Location = System::Drawing::Point(602, 16);
			this->pictureBox1_close->Name = L"pictureBox1_close";
			this->pictureBox1_close->Size = System::Drawing::Size(35, 25);
			this->pictureBox1_close->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1_close->TabIndex = 21;
			this->pictureBox1_close->TabStop = false;
			this->pictureBox1_close->Click += gcnew System::EventHandler(this, &Form1::pictureBox1_close_Click);
			this->pictureBox1_close->MouseLeave += gcnew System::EventHandler(this, &Form1::pictureBox1_fin_survol);
			this->pictureBox1_close->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::pictureBox1_survol);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(17, 23);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(625, 24);
			this->label3->TabIndex = 20;
			this->label3->Text = L"Administrateur___ ______________________________________________";
			// 
			// button_connexion
			// 
			this->button_connexion->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button_connexion.BackgroundImage")));
			this->button_connexion->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button_connexion->FlatAppearance->BorderSize = 0;
			this->button_connexion->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_connexion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button_connexion->Location = System::Drawing::Point(508, 164);
			this->button_connexion->Name = L"button_connexion";
			this->button_connexion->Size = System::Drawing::Size(112, 27);
			this->button_connexion->TabIndex = 19;
			this->button_connexion->Text = L"se connecter";
			this->button_connexion->UseVisualStyleBackColor = true;
			this->button_connexion->Click += gcnew System::EventHandler(this, &Form1::button1_connexion_Click);
			// 
			// label_error
			// 
			this->label_error->AutoSize = true;
			this->label_error->BackColor = System::Drawing::Color::Transparent;
			this->label_error->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label_error->ForeColor = System::Drawing::Color::Black;
			this->label_error->Location = System::Drawing::Point(9, 44);
			this->label_error->Name = L"label_error";
			this->label_error->Size = System::Drawing::Size(261, 20);
			this->label_error->TabIndex = 25;
			this->label_error->Text = L"Configuration de la base de donnée";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(41, 150);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(38, 17);
			this->label1->TabIndex = 17;
			this->label1->Text = L"User";
			// 
			// textBox_user
			// 
			this->textBox_user->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox_user->Location = System::Drawing::Point(85, 149);
			this->textBox_user->Name = L"textBox_user";
			this->textBox_user->Size = System::Drawing::Size(175, 20);
			this->textBox_user->TabIndex = 15;
			this->textBox_user->Text = L"root";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(10, 178);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(69, 17);
			this->label2->TabIndex = 18;
			this->label2->Text = L"Password";
			// 
			// textBox_password
			// 
			this->textBox_password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox_password->Location = System::Drawing::Point(85, 177);
			this->textBox_password->Name = L"textBox_password";
			this->textBox_password->PasswordChar = '*';
			this->textBox_password->Size = System::Drawing::Size(175, 20);
			this->textBox_password->TabIndex = 16;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(63, 231);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(69, 17);
			this->label11->TabIndex = 36;
			this->label11->Text = L"Confirmer";
			// 
			// textBox_confirmer
			// 
			this->textBox_confirmer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox_confirmer->Location = System::Drawing::Point(138, 230);
			this->textBox_confirmer->Name = L"textBox_confirmer";
			this->textBox_confirmer->PasswordChar = '*';
			this->textBox_confirmer->Size = System::Drawing::Size(171, 20);
			this->textBox_confirmer->TabIndex = 35;
			// 
			// button_inscrir
			// 
			this->button_inscrir->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button_inscrir.BackgroundImage")));
			this->button_inscrir->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button_inscrir->FlatAppearance->BorderSize = 0;
			this->button_inscrir->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_inscrir->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button_inscrir->Location = System::Drawing::Point(138, 266);
			this->button_inscrir->Name = L"button_inscrir";
			this->button_inscrir->Size = System::Drawing::Size(87, 27);
			this->button_inscrir->TabIndex = 34;
			this->button_inscrir->Text = L"s\'inscrire";
			this->button_inscrir->UseVisualStyleBackColor = true;
			this->button_inscrir->Click += gcnew System::EventHandler(this, &Form1::button_inscrir_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(89, 179);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(43, 17);
			this->label9->TabIndex = 32;
			this->label9->Text = L"Login";
			// 
			// textBox_log
			// 
			this->textBox_log->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox_log->Location = System::Drawing::Point(138, 178);
			this->textBox_log->Name = L"textBox_log";
			this->textBox_log->Size = System::Drawing::Size(171, 20);
			this->textBox_log->TabIndex = 30;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(39, 205);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(93, 17);
			this->label10->TabIndex = 33;
			this->label10->Text = L"Mot de passe";
			// 
			// textBox_pass
			// 
			this->textBox_pass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox_pass->Location = System::Drawing::Point(138, 204);
			this->textBox_pass->Name = L"textBox_pass";
			this->textBox_pass->PasswordChar = '*';
			this->textBox_pass->Size = System::Drawing::Size(171, 20);
			this->textBox_pass->TabIndex = 31;
			// 
			// panel_config
			// 
			this->panel_config->BackColor = System::Drawing::Color::Transparent;
			this->panel_config->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel_config.BackgroundImage")));
			this->panel_config->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel_config->Controls->Add(this->button2);
			this->panel_config->Controls->Add(this->button_OKconfig);
			this->panel_config->Controls->Add(this->textBox_server);
			this->panel_config->Controls->Add(this->label12);
			this->panel_config->Controls->Add(this->textBox_database);
			this->panel_config->Controls->Add(this->label13);
			this->panel_config->Controls->Add(this->textBox_password);
			this->panel_config->Controls->Add(this->label2);
			this->panel_config->Controls->Add(this->textBox_user);
			this->panel_config->Controls->Add(this->label1);
			this->panel_config->Controls->Add(this->label_error);
			this->panel_config->Enabled = false;
			this->panel_config->Location = System::Drawing::Point(674, 100);
			this->panel_config->Name = L"panel_config";
			this->panel_config->Size = System::Drawing::Size(278, 286);
			this->panel_config->TabIndex = 47;
			this->panel_config->Visible = false;
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(183, 215);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(78, 27);
			this->button2->TabIndex = 31;
			this->button2->Text = L"annuler";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button_OKconfig
			// 
			this->button_OKconfig->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button_OKconfig.BackgroundImage")));
			this->button_OKconfig->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button_OKconfig->FlatAppearance->BorderSize = 0;
			this->button_OKconfig->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_OKconfig->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button_OKconfig->Location = System::Drawing::Point(85, 215);
			this->button_OKconfig->Name = L"button_OKconfig";
			this->button_OKconfig->Size = System::Drawing::Size(92, 27);
			this->button_OKconfig->TabIndex = 30;
			this->button_OKconfig->Text = L"Configurer";
			this->button_OKconfig->UseVisualStyleBackColor = true;
			this->button_OKconfig->Click += gcnew System::EventHandler(this, &Form1::button_OKconfig_Click);
			// 
			// textBox_server
			// 
			this->textBox_server->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox_server->Location = System::Drawing::Point(85, 93);
			this->textBox_server->Name = L"textBox_server";
			this->textBox_server->Size = System::Drawing::Size(175, 20);
			this->textBox_server->TabIndex = 27;
			this->textBox_server->Text = L"localhost";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(29, 94);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(50, 17);
			this->label12->TabIndex = 29;
			this->label12->Text = L"Server";
			// 
			// textBox_database
			// 
			this->textBox_database->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox_database->Location = System::Drawing::Point(85, 121);
			this->textBox_database->Name = L"textBox_database";
			this->textBox_database->Size = System::Drawing::Size(175, 20);
			this->textBox_database->TabIndex = 26;
			this->textBox_database->Text = L"servicedata";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::White;
			this->label13->Location = System::Drawing::Point(10, 122);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(69, 17);
			this->label13->TabIndex = 28;
			this->label13->Text = L"Database";
			// 
			// panel_inscription
			// 
			this->panel_inscription->BackColor = System::Drawing::Color::Transparent;
			this->panel_inscription->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel_inscription.BackgroundImage")));
			this->panel_inscription->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel_inscription->Controls->Add(this->button1);
			this->panel_inscription->Controls->Add(this->label4);
			this->panel_inscription->Controls->Add(this->textBox_poste);
			this->panel_inscription->Controls->Add(this->textBox_prenom);
			this->panel_inscription->Controls->Add(this->label5);
			this->panel_inscription->Controls->Add(this->label15);
			this->panel_inscription->Controls->Add(this->textBox_nom);
			this->panel_inscription->Controls->Add(this->label11);
			this->panel_inscription->Controls->Add(this->label14);
			this->panel_inscription->Controls->Add(this->textBox_confirmer);
			this->panel_inscription->Controls->Add(this->button_inscrir);
			this->panel_inscription->Controls->Add(this->textBox_pass);
			this->panel_inscription->Controls->Add(this->label9);
			this->panel_inscription->Controls->Add(this->label10);
			this->panel_inscription->Controls->Add(this->textBox_log);
			this->panel_inscription->Enabled = false;
			this->panel_inscription->Location = System::Drawing::Point(11, 100);
			this->panel_inscription->Name = L"panel_inscription";
			this->panel_inscription->Size = System::Drawing::Size(344, 332);
			this->panel_inscription->TabIndex = 49;
			this->panel_inscription->Visible = false;
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(231, 266);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(78, 27);
			this->button1->TabIndex = 43;
			this->button1->Text = L"annuler";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(88, 129);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(44, 17);
			this->label4->TabIndex = 42;
			this->label4->Text = L"Poste";
			// 
			// textBox_poste
			// 
			this->textBox_poste->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox_poste->Location = System::Drawing::Point(138, 128);
			this->textBox_poste->Name = L"textBox_poste";
			this->textBox_poste->Size = System::Drawing::Size(171, 20);
			this->textBox_poste->TabIndex = 41;
			// 
			// textBox_prenom
			// 
			this->textBox_prenom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox_prenom->Location = System::Drawing::Point(138, 102);
			this->textBox_prenom->Name = L"textBox_prenom";
			this->textBox_prenom->Size = System::Drawing::Size(171, 20);
			this->textBox_prenom->TabIndex = 38;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(95, 77);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(37, 17);
			this->label5->TabIndex = 39;
			this->label5->Text = L"Nom";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::White;
			this->label15->Location = System::Drawing::Point(75, 103);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(57, 17);
			this->label15->TabIndex = 40;
			this->label15->Text = L"Prénom";
			// 
			// textBox_nom
			// 
			this->textBox_nom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox_nom->Location = System::Drawing::Point(138, 76);
			this->textBox_nom->Name = L"textBox_nom";
			this->textBox_nom->Size = System::Drawing::Size(171, 20);
			this->textBox_nom->TabIndex = 37;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(21, 29);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(296, 20);
			this->label14->TabIndex = 0;
			this->label14->Text = L"Nouveau Administrateur_____________";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(1059, 662);
			this->Controls->Add(this->panel_inscription);
			this->Controls->Add(this->panel_connexion);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->panel1_titre);
			this->Controls->Add(this->panel_config);
			this->DoubleBuffered = true;
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Service d\' autorisation administrative du commerce alimentaire | DIOUBATE SEKOU-L" 
				L"SI-1, projet en C++";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->panel1_titre->ResumeLayout(false);
			this->panel1_titre->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1_titre))->EndInit();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel_connexion->ResumeLayout(false);
			this->panel_connexion->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1_close))->EndInit();
			this->panel_config->ResumeLayout(false);
			this->panel_config->PerformLayout();
			this->panel_inscription->ResumeLayout(false);
			this->panel_inscription->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
 
private: System::Void pictureBox1_survol(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			this->pictureBox1_close->BackColor = System::Drawing::Color::White;
		 }
private: System::Void pictureBox1_fin_survol(System::Object^  sender, System::EventArgs^  e) {
			this->pictureBox1_close->BackColor = System::Drawing::Color::Transparent;
		 }
private: System::Void pictureBox1_close_Click(System::Object^  sender, System::EventArgs^  e) {
            panel_connexion->Enabled=false; 
            panel_connexion->Visible=false;
		 }       

private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			if (label3_titre->Right < pictureBox1_titre->Left)
            {
                label3_titre->Left += 1;
            }
            else
            {
                label3_titre->Left = 1;
            }
		 }      
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
            session::database="servicedata";
            session::databaseUser="root";
            session::databasePassword="";
            session::databaseServer="localhost";
         }     

private: System::Void button_OKconfig_Click(System::Object^  sender, System::EventArgs^  e) {         
            session::database=textBox_database->Text;
            session::databaseUser=textBox_user->Text;
            session::databasePassword=textBox_password->Text;
            session::databaseServer=textBox_server->Text;
            panel_config->Enabled=false; 
            panel_config->Visible=false;
         }  
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
            panel_config->Enabled=false; 
            panel_config->Visible=false;
            panel_connexion->Enabled=false; 
            panel_connexion->Visible=false;            
         }
private: System::Void configurationToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
                            
            panel_connexion->Enabled=true; 
            panel_connexion->Visible=true;            
            panel_config->Enabled=true; 
            panel_config->Visible=true;

         }     
private: System::Void linkLabel_inscription_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
            panel_connexion->Enabled=false; 
            panel_connexion->Visible=false;
            panel_inscription->Enabled=true; 
            panel_inscription->Visible=true;
         }
private: System::Void button_inscrir_Click(System::Object^  sender, System::EventArgs^  e) {
             if(textBox_log->Text!="" && textBox_pass->Text!="" && textBox_nom->Text!="" && textBox_prenom->Text!="" && textBox_poste->Text!=""){
                 if(textBox_pass->Text!=textBox_confirmer->Text)
                     MessageBox::Show("Le mot de passe n'a pas été confirmer !\nVeillez a ce que les mots de passe soit identique.");
                 else{
                         if(session::seConnecter())
                         {
                             administrateur nouvo;
                             nouvo.login=textBox_log->Text;
                             nouvo.password=textBox_pass->Text;
                             nouvo.nom=textBox_nom->Text;
                             nouvo.prenom=textBox_prenom->Text;
                             nouvo.poste=textBox_poste->Text;
                             nouvo.ajouter();
                             session::admin.login=nouvo.login;
                             panel_inscription->Enabled=false; 
                             panel_inscription->Visible=false;
                         }
                 }
             }
             else
                 MessageBox::Show("Vous devez remplire tous les champs");
         }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
                     panel_inscription->Enabled=false; 
                     panel_inscription->Visible=false;
         }
//Open Connection button    
private: System::Void button1_connexion_Click(System::Object^  sender, System::EventArgs^  e) {		
              if(textBox_login->Text!="" && textBox_motDePasse->Text!=""){
                  if(session::seConnecter()){ 
                   if(session::admin.authentifier(textBox_login->Text,textBox_motDePasse->Text)){ 
                       MessageBox::Show("BIENVENUE Monsieur/Madame "+session::admin.nom+" !"); 
                         panel_connexion->Enabled=false; 
                         panel_connexion->Visible=false; 
                    }
                   else  
                       MessageBox::Show("Login ou mot de passe incorrect");
                  }
              }
             else
                 MessageBox::Show("Vous devez remplire tous les champs");
		 }	 
//Close Connection button
private: System::Void quiterToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		 System::Windows::Forms::DialogResult resultat =
			 MessageBox::Show("Voulez-vous vraiment quiter le programme ?", "Confirmation de la fermeture", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
		 if (resultat == System::Windows::Forms::DialogResult::Yes)  {
				if(!session::seDeconnecter()){
						 MessageBox::Show("Vous n'etiez pas deconnecté");
						 System::Environment::Exit(System::Environment::ExitCode);
					}
                else{
						MessageBox::Show("Vous avez été deconnecté");
				    System::Environment::Exit(System::Environment::ExitCode);
					}
			} 
		 }
private: System::Void afficerToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
			 
             formVoirAutorisation^ view =gcnew formVoirAutorisation();
			 view->MdiParent = this;
             view->Show();
		 }
private: System::Void nouveauToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
             
             formDemande^ formulaire =gcnew formDemande();
			 formulaire->MdiParent = this;
             formulaire->Show(); 
         }
private: System::Void miseAjourToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			
             formMiseAjours^ miseAjours =gcnew formMiseAjours();
			 miseAjours->MdiParent = this;
             miseAjours->Show();	                              
            
         }
};
}

