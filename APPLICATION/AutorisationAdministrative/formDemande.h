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
	/// Description résumée de formDemande
	/// </summary>
	public ref class formDemande : public System::Windows::Forms::Form
	{
	public:
		formDemande(void)
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
		~formDemande()
		{
			if (components)
			{
				delete components;
			}
		}
    private: System::Windows::Forms::ComboBox^  comboBox_typeDemande;
    protected: 


    private: System::Windows::Forms::TextBox^  textBox_numRegi;


    private: System::Windows::Forms::Label^  label11;


    private: System::Windows::Forms::Label^  label31;
    private: System::Windows::Forms::TextBox^  textBox_bp;
    private: System::Windows::Forms::Label^  label32;
    private: System::Windows::Forms::TextBox^  textBox_web;
    private: System::Windows::Forms::TextBox^  textBox_adresseDemandeur;
    private: System::Windows::Forms::TextBox^  textBox_mail;
    private: System::Windows::Forms::TextBox^  textBox_tel;
    private: System::Windows::Forms::Label^  label4;
    private: System::Windows::Forms::Label^  label1;
    private: System::Windows::Forms::Label^  label7;

    private: System::Windows::Forms::Label^  label5;
    private: System::Windows::Forms::TextBox^  textBox_demandeur;

    private: System::Windows::Forms::Label^  label6;

    private: System::Windows::Forms::Button^  button_terminer;

    private: System::Windows::Forms::TextBox^  textBox_homologation;
    private: System::Windows::Forms::Label^  label16;
    private: System::Windows::Forms::Label^  label19;
    private: System::Windows::Forms::Label^  label17;
    private: System::Windows::Forms::TextBox^  textBox_pUnitaire;
    private: System::Windows::Forms::Label^  label18;
    private: System::Windows::Forms::TextBox^  textBox_douane;
    private: System::Windows::Forms::TextBox^  textBox_sanitaireProduit;
    private: System::Windows::Forms::TextBox^  textBox_pGros;
    private: System::Windows::Forms::Label^  label20;
    private: System::Windows::Forms::TextBox^  textBox_valDouane;
    private: System::Windows::Forms::Label^  label21;
    private: System::Windows::Forms::Label^  label13;
    private: System::Windows::Forms::Label^  label14;
    private: System::Windows::Forms::Label^  label15;
    private: System::Windows::Forms::Label^  label22;
    private: System::Windows::Forms::TextBox^  textBox_commentaire;

    private: System::Windows::Forms::TextBox^  textBox_origine;
    private: System::Windows::Forms::TextBox^  textBox_nominationProduit;
    private: System::Windows::Forms::TextBox^  textBox_quantite;



    private: System::Windows::Forms::TextBox^  textBox_bancaire;
    private: System::Windows::Forms::Label^  label9;
    private: System::Windows::Forms::TextBox^  textBox_assurance;
    private: System::Windows::Forms::Label^  label8;

    private: System::Windows::Forms::ComboBox^  comboBox_typeLocal;
    private: System::Windows::Forms::Label^  label23;
    private: System::Windows::Forms::Label^  label24;
    private: System::Windows::Forms::TextBox^  textBox_adressLocal;
    private: System::Windows::Forms::Label^  label25;
    private: System::Windows::Forms::TextBox^  textBox_contratAcquisition;
    private: System::Windows::Forms::Label^  label26;
    private: System::Windows::Forms::TextBox^  textBox_certfSanitaire;
private: System::Windows::Forms::Button^  button_annuler;
    private: System::Windows::Forms::TextBox^  textBox_taxe;
    private: System::Windows::Forms::Label^  label3;
    private: System::Windows::Forms::TextBox^  textBox_fax;
    private: System::Windows::Forms::Label^  label12;





    private: System::Windows::Forms::ComboBox^  comboBox_unite;

    private: System::Windows::Forms::Label^  label28;


private: System::Windows::Forms::Label^  label27;
private: System::Windows::Forms::PictureBox^  photo_logo;





private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
private: System::Windows::Forms::PictureBox^  pictureBox1;
private: System::Windows::Forms::PictureBox^  pictureBox2;
private: System::Windows::Forms::Label^  label30;
private: System::Windows::Forms::Label^  label29;
private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::Label^  label33;
private: System::Windows::Forms::PictureBox^  pictureBox3;
private: System::Windows::Forms::Label^  label10;









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
            System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(formDemande::typeid));
            this->comboBox_typeDemande = (gcnew System::Windows::Forms::ComboBox());
            this->textBox_numRegi = (gcnew System::Windows::Forms::TextBox());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->label31 = (gcnew System::Windows::Forms::Label());
            this->textBox_bp = (gcnew System::Windows::Forms::TextBox());
            this->label32 = (gcnew System::Windows::Forms::Label());
            this->textBox_web = (gcnew System::Windows::Forms::TextBox());
            this->textBox_adresseDemandeur = (gcnew System::Windows::Forms::TextBox());
            this->textBox_mail = (gcnew System::Windows::Forms::TextBox());
            this->textBox_tel = (gcnew System::Windows::Forms::TextBox());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->textBox_demandeur = (gcnew System::Windows::Forms::TextBox());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->button_terminer = (gcnew System::Windows::Forms::Button());
            this->textBox_homologation = (gcnew System::Windows::Forms::TextBox());
            this->label16 = (gcnew System::Windows::Forms::Label());
            this->label19 = (gcnew System::Windows::Forms::Label());
            this->label17 = (gcnew System::Windows::Forms::Label());
            this->textBox_pUnitaire = (gcnew System::Windows::Forms::TextBox());
            this->label18 = (gcnew System::Windows::Forms::Label());
            this->textBox_douane = (gcnew System::Windows::Forms::TextBox());
            this->textBox_sanitaireProduit = (gcnew System::Windows::Forms::TextBox());
            this->textBox_pGros = (gcnew System::Windows::Forms::TextBox());
            this->label20 = (gcnew System::Windows::Forms::Label());
            this->textBox_valDouane = (gcnew System::Windows::Forms::TextBox());
            this->label21 = (gcnew System::Windows::Forms::Label());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->label14 = (gcnew System::Windows::Forms::Label());
            this->label15 = (gcnew System::Windows::Forms::Label());
            this->label22 = (gcnew System::Windows::Forms::Label());
            this->textBox_commentaire = (gcnew System::Windows::Forms::TextBox());
            this->textBox_origine = (gcnew System::Windows::Forms::TextBox());
            this->textBox_nominationProduit = (gcnew System::Windows::Forms::TextBox());
            this->textBox_quantite = (gcnew System::Windows::Forms::TextBox());
            this->textBox_bancaire = (gcnew System::Windows::Forms::TextBox());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->textBox_assurance = (gcnew System::Windows::Forms::TextBox());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->comboBox_typeLocal = (gcnew System::Windows::Forms::ComboBox());
            this->label23 = (gcnew System::Windows::Forms::Label());
            this->label24 = (gcnew System::Windows::Forms::Label());
            this->textBox_adressLocal = (gcnew System::Windows::Forms::TextBox());
            this->label25 = (gcnew System::Windows::Forms::Label());
            this->textBox_contratAcquisition = (gcnew System::Windows::Forms::TextBox());
            this->label26 = (gcnew System::Windows::Forms::Label());
            this->textBox_certfSanitaire = (gcnew System::Windows::Forms::TextBox());
            this->button_annuler = (gcnew System::Windows::Forms::Button());
            this->textBox_taxe = (gcnew System::Windows::Forms::TextBox());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->textBox_fax = (gcnew System::Windows::Forms::TextBox());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->comboBox_unite = (gcnew System::Windows::Forms::ComboBox());
            this->label28 = (gcnew System::Windows::Forms::Label());
            this->photo_logo = (gcnew System::Windows::Forms::PictureBox());
            this->label27 = (gcnew System::Windows::Forms::Label());
            this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
            this->label30 = (gcnew System::Windows::Forms::Label());
            this->label29 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label33 = (gcnew System::Windows::Forms::Label());
            this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
            this->label10 = (gcnew System::Windows::Forms::Label());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->photo_logo))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
            this->SuspendLayout();
            // 
            // comboBox_typeDemande
            // 
            this->comboBox_typeDemande->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, 
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->comboBox_typeDemande->FormattingEnabled = true;
            this->comboBox_typeDemande->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Particulier", L"Entreprise"});
            this->comboBox_typeDemande->Location = System::Drawing::Point(51, 94);
            this->comboBox_typeDemande->Name = L"comboBox_typeDemande";
            this->comboBox_typeDemande->Size = System::Drawing::Size(176, 21);
            this->comboBox_typeDemande->TabIndex = 248;
            this->comboBox_typeDemande->SelectedIndexChanged += gcnew System::EventHandler(this, &formDemande::comboBox_typeDemande_SelectedIndexChanged);
            // 
            // textBox_numRegi
            // 
            this->textBox_numRegi->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->textBox_numRegi->Location = System::Drawing::Point(51, 172);
            this->textBox_numRegi->Name = L"textBox_numRegi";
            this->textBox_numRegi->Size = System::Drawing::Size(176, 20);
            this->textBox_numRegi->TabIndex = 236;
            // 
            // label11
            // 
            this->label11->AutoSize = true;
            this->label11->BackColor = System::Drawing::Color::Transparent;
            this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->label11->Location = System::Drawing::Point(48, 156);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(167, 13);
            this->label11->TabIndex = 241;
            this->label11->Text = L"*Numéro du registre de commerce";
            // 
            // label31
            // 
            this->label31->AutoSize = true;
            this->label31->BackColor = System::Drawing::Color::Transparent;
            this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->label31->Location = System::Drawing::Point(48, 392);
            this->label31->Name = L"label31";
            this->label31->Size = System::Drawing::Size(21, 13);
            this->label31->TabIndex = 233;
            this->label31->Text = L"BP";
            // 
            // textBox_bp
            // 
            this->textBox_bp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->textBox_bp->Location = System::Drawing::Point(49, 408);
            this->textBox_bp->Name = L"textBox_bp";
            this->textBox_bp->Size = System::Drawing::Size(176, 20);
            this->textBox_bp->TabIndex = 232;
            // 
            // label32
            // 
            this->label32->AutoSize = true;
            this->label32->BackColor = System::Drawing::Color::Transparent;
            this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->label32->Location = System::Drawing::Point(48, 352);
            this->label32->Name = L"label32";
            this->label32->Size = System::Drawing::Size(30, 13);
            this->label32->TabIndex = 231;
            this->label32->Text = L"Web";
            // 
            // textBox_web
            // 
            this->textBox_web->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->textBox_web->Location = System::Drawing::Point(49, 369);
            this->textBox_web->Name = L"textBox_web";
            this->textBox_web->Size = System::Drawing::Size(176, 20);
            this->textBox_web->TabIndex = 230;
            // 
            // textBox_adresseDemandeur
            // 
            this->textBox_adresseDemandeur->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, 
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->textBox_adresseDemandeur->Location = System::Drawing::Point(49, 444);
            this->textBox_adresseDemandeur->Multiline = true;
            this->textBox_adresseDemandeur->Name = L"textBox_adresseDemandeur";
            this->textBox_adresseDemandeur->Size = System::Drawing::Size(176, 60);
            this->textBox_adresseDemandeur->TabIndex = 222;
            // 
            // textBox_mail
            // 
            this->textBox_mail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->textBox_mail->Location = System::Drawing::Point(49, 329);
            this->textBox_mail->Name = L"textBox_mail";
            this->textBox_mail->Size = System::Drawing::Size(176, 20);
            this->textBox_mail->TabIndex = 221;
            // 
            // textBox_tel
            // 
            this->textBox_tel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->textBox_tel->Location = System::Drawing::Point(49, 290);
            this->textBox_tel->Name = L"textBox_tel";
            this->textBox_tel->Size = System::Drawing::Size(82, 20);
            this->textBox_tel->TabIndex = 220;
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->BackColor = System::Drawing::Color::Transparent;
            this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->label4->Location = System::Drawing::Point(48, 78);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(93, 13);
            this->label4->TabIndex = 226;
            this->label4->Text = L"Type de demande";
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->BackColor = System::Drawing::Color::Transparent;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(48, 116);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(64, 13);
            this->label1->TabIndex = 223;
            this->label1->Text = L"*Nomination";
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->BackColor = System::Drawing::Color::Transparent;
            this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->label7->Location = System::Drawing::Point(48, 431);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(45, 13);
            this->label7->TabIndex = 229;
            this->label7->Text = L"Adresse";
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->BackColor = System::Drawing::Color::Transparent;
            this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->label5->Location = System::Drawing::Point(45, 274);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(22, 13);
            this->label5->TabIndex = 227;
            this->label5->Text = L"Tel";
            // 
            // textBox_demandeur
            // 
            this->textBox_demandeur->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, 
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->textBox_demandeur->Location = System::Drawing::Point(51, 132);
            this->textBox_demandeur->Name = L"textBox_demandeur";
            this->textBox_demandeur->Size = System::Drawing::Size(176, 20);
            this->textBox_demandeur->TabIndex = 217;
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->BackColor = System::Drawing::Color::Transparent;
            this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->label6->Location = System::Drawing::Point(48, 313);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(26, 13);
            this->label6->TabIndex = 228;
            this->label6->Text = L"Mail";
            // 
            // button_terminer
            // 
            this->button_terminer->BackColor = System::Drawing::Color::Transparent;
            this->button_terminer->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button_terminer.BackgroundImage")));
            this->button_terminer->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->button_terminer->FlatAppearance->BorderSize = 0;
            this->button_terminer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button_terminer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->button_terminer->Location = System::Drawing::Point(686, 467);
            this->button_terminer->Name = L"button_terminer";
            this->button_terminer->Size = System::Drawing::Size(110, 37);
            this->button_terminer->TabIndex = 216;
            this->button_terminer->Text = L"Ajouter";
            this->button_terminer->UseVisualStyleBackColor = false;
            this->button_terminer->Click += gcnew System::EventHandler(this, &formDemande::button_terminer_Click);
            // 
            // textBox_homologation
            // 
            this->textBox_homologation->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, 
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->textBox_homologation->Location = System::Drawing::Point(261, 211);
            this->textBox_homologation->Name = L"textBox_homologation";
            this->textBox_homologation->Size = System::Drawing::Size(176, 20);
            this->textBox_homologation->TabIndex = 201;
            // 
            // label16
            // 
            this->label16->AutoSize = true;
            this->label16->BackColor = System::Drawing::Color::Transparent;
            this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->label16->Location = System::Drawing::Point(257, 195);
            this->label16->Name = L"label16";
            this->label16->Size = System::Drawing::Size(180, 13);
            this->label16->TabIndex = 200;
            this->label16->Text = L"*Numéro de certificat d\'homologation";
            // 
            // label19
            // 
            this->label19->AutoSize = true;
            this->label19->BackColor = System::Drawing::Color::Transparent;
            this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->label19->Location = System::Drawing::Point(258, 156);
            this->label19->Name = L"label19";
            this->label19->Size = System::Drawing::Size(90, 13);
            this->label19->TabIndex = 202;
            this->label19->Text = L"Origine du produit\r\n";
            // 
            // label17
            // 
            this->label17->AutoSize = true;
            this->label17->BackColor = System::Drawing::Color::Transparent;
            this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->label17->Location = System::Drawing::Point(258, 235);
            this->label17->Name = L"label17";
            this->label17->Size = System::Drawing::Size(144, 13);
            this->label17->TabIndex = 199;
            this->label17->Text = L"Numéro de certificat sanitaire";
            // 
            // textBox_pUnitaire
            // 
            this->textBox_pUnitaire->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, 
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->textBox_pUnitaire->Location = System::Drawing::Point(261, 408);
            this->textBox_pUnitaire->Name = L"textBox_pUnitaire";
            this->textBox_pUnitaire->Size = System::Drawing::Size(82, 20);
            this->textBox_pUnitaire->TabIndex = 197;
            // 
            // label18
            // 
            this->label18->AutoSize = true;
            this->label18->BackColor = System::Drawing::Color::Transparent;
            this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->label18->Location = System::Drawing::Point(260, 272);
            this->label18->Name = L"label18";
            this->label18->Size = System::Drawing::Size(164, 13);
            this->label18->TabIndex = 198;
            this->label18->Text = L"Numéro de déclaration douanière";
            // 
            // textBox_douane
            // 
            this->textBox_douane->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->textBox_douane->Location = System::Drawing::Point(261, 290);
            this->textBox_douane->Name = L"textBox_douane";
            this->textBox_douane->Size = System::Drawing::Size(176, 20);
            this->textBox_douane->TabIndex = 186;
            // 
            // textBox_sanitaireProduit
            // 
            this->textBox_sanitaireProduit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, 
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->textBox_sanitaireProduit->Location = System::Drawing::Point(261, 251);
            this->textBox_sanitaireProduit->Name = L"textBox_sanitaireProduit";
            this->textBox_sanitaireProduit->Size = System::Drawing::Size(176, 20);
            this->textBox_sanitaireProduit->TabIndex = 187;
            // 
            // textBox_pGros
            // 
            this->textBox_pGros->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->textBox_pGros->Location = System::Drawing::Point(261, 369);
            this->textBox_pGros->Name = L"textBox_pGros";
            this->textBox_pGros->Size = System::Drawing::Size(176, 20);
            this->textBox_pGros->TabIndex = 196;
            // 
            // label20
            // 
            this->label20->AutoSize = true;
            this->label20->BackColor = System::Drawing::Color::Transparent;
            this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->label20->Location = System::Drawing::Point(260, 431);
            this->label20->Name = L"label20";
            this->label20->Size = System::Drawing::Size(131, 13);
            this->label20->TabIndex = 194;
            this->label20->Text = L"Commentaire sur le produit";
            // 
            // textBox_valDouane
            // 
            this->textBox_valDouane->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, 
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->textBox_valDouane->Location = System::Drawing::Point(261, 329);
            this->textBox_valDouane->Name = L"textBox_valDouane";
            this->textBox_valDouane->Size = System::Drawing::Size(176, 20);
            this->textBox_valDouane->TabIndex = 195;
            // 
            // label21
            // 
            this->label21->AutoSize = true;
            this->label21->BackColor = System::Drawing::Color::Transparent;
            this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->label21->Location = System::Drawing::Point(258, 117);
            this->label21->Name = L"label21";
            this->label21->Size = System::Drawing::Size(51, 13);
            this->label21->TabIndex = 190;
            this->label21->Text = L"*Quantité";
            // 
            // label13
            // 
            this->label13->AutoSize = true;
            this->label13->BackColor = System::Drawing::Color::Transparent;
            this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->label13->Location = System::Drawing::Point(259, 392);
            this->label13->Name = L"label13";
            this->label13->Size = System::Drawing::Size(61, 13);
            this->label13->TabIndex = 191;
            this->label13->Text = L"Prix unitaire";
            // 
            // label14
            // 
            this->label14->AutoSize = true;
            this->label14->BackColor = System::Drawing::Color::Transparent;
            this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->label14->Location = System::Drawing::Point(258, 353);
            this->label14->Name = L"label14";
            this->label14->Size = System::Drawing::Size(62, 13);
            this->label14->TabIndex = 192;
            this->label14->Text = L"Prix en gros";
            // 
            // label15
            // 
            this->label15->AutoSize = true;
            this->label15->BackColor = System::Drawing::Color::Transparent;
            this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->label15->Location = System::Drawing::Point(258, 313);
            this->label15->Name = L"label15";
            this->label15->Size = System::Drawing::Size(85, 13);
            this->label15->TabIndex = 193;
            this->label15->Text = L"Valeur douanère";
            // 
            // label22
            // 
            this->label22->AutoSize = true;
            this->label22->BackColor = System::Drawing::Color::Transparent;
            this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->label22->Location = System::Drawing::Point(258, 78);
            this->label22->Name = L"label22";
            this->label22->Size = System::Drawing::Size(114, 13);
            this->label22->TabIndex = 189;
            this->label22->Text = L"*Nomination du produit";
            // 
            // textBox_commentaire
            // 
            this->textBox_commentaire->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, 
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->textBox_commentaire->Location = System::Drawing::Point(260, 447);
            this->textBox_commentaire->Multiline = true;
            this->textBox_commentaire->Name = L"textBox_commentaire";
            this->textBox_commentaire->Size = System::Drawing::Size(387, 57);
            this->textBox_commentaire->TabIndex = 188;
            // 
            // textBox_origine
            // 
            this->textBox_origine->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->textBox_origine->Location = System::Drawing::Point(261, 172);
            this->textBox_origine->Name = L"textBox_origine";
            this->textBox_origine->Size = System::Drawing::Size(176, 20);
            this->textBox_origine->TabIndex = 185;
            // 
            // textBox_nominationProduit
            // 
            this->textBox_nominationProduit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, 
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->textBox_nominationProduit->Location = System::Drawing::Point(261, 94);
            this->textBox_nominationProduit->Name = L"textBox_nominationProduit";
            this->textBox_nominationProduit->Size = System::Drawing::Size(176, 20);
            this->textBox_nominationProduit->TabIndex = 183;
            // 
            // textBox_quantite
            // 
            this->textBox_quantite->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, 
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->textBox_quantite->Location = System::Drawing::Point(261, 133);
            this->textBox_quantite->Name = L"textBox_quantite";
            this->textBox_quantite->Size = System::Drawing::Size(82, 20);
            this->textBox_quantite->TabIndex = 184;
            // 
            // textBox_bancaire
            // 
            this->textBox_bancaire->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, 
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->textBox_bancaire->Location = System::Drawing::Point(49, 211);
            this->textBox_bancaire->Name = L"textBox_bancaire";
            this->textBox_bancaire->Size = System::Drawing::Size(176, 20);
            this->textBox_bancaire->TabIndex = 260;
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->BackColor = System::Drawing::Color::Transparent;
            this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->label9->Location = System::Drawing::Point(46, 235);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(104, 13);
            this->label9->TabIndex = 263;
            this->label9->Text = L"Numéro d\'assurance";
            // 
            // textBox_assurance
            // 
            this->textBox_assurance->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, 
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->textBox_assurance->Location = System::Drawing::Point(49, 251);
            this->textBox_assurance->Name = L"textBox_assurance";
            this->textBox_assurance->Size = System::Drawing::Size(176, 20);
            this->textBox_assurance->TabIndex = 261;
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->BackColor = System::Drawing::Color::Transparent;
            this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->label8->Location = System::Drawing::Point(46, 195);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(87, 13);
            this->label8->TabIndex = 262;
            this->label8->Text = L"Compte bancaire";
            // 
            // comboBox_typeLocal
            // 
            this->comboBox_typeLocal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, 
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->comboBox_typeLocal->FormattingEnabled = true;
            this->comboBox_typeLocal->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Boutique", L"Magasin", L"Centre commercial", 
                L"Entrepôt"});
            this->comboBox_typeLocal->Location = System::Drawing::Point(471, 171);
            this->comboBox_typeLocal->Name = L"comboBox_typeLocal";
            this->comboBox_typeLocal->Size = System::Drawing::Size(176, 21);
            this->comboBox_typeLocal->TabIndex = 258;
            // 
            // label23
            // 
            this->label23->AutoSize = true;
            this->label23->BackColor = System::Drawing::Color::Transparent;
            this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->label23->Location = System::Drawing::Point(468, 234);
            this->label23->Name = L"label23";
            this->label23->Size = System::Drawing::Size(144, 13);
            this->label23->TabIndex = 257;
            this->label23->Text = L"Numéro du certificat sanitaire";
            // 
            // label24
            // 
            this->label24->AutoSize = true;
            this->label24->BackColor = System::Drawing::Color::Transparent;
            this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->label24->Location = System::Drawing::Point(473, 274);
            this->label24->Name = L"label24";
            this->label24->Size = System::Drawing::Size(96, 13);
            this->label24->TabIndex = 256;
            this->label24->Text = L"Adresse du localité";
            // 
            // textBox_adressLocal
            // 
            this->textBox_adressLocal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, 
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->textBox_adressLocal->Location = System::Drawing::Point(471, 289);
            this->textBox_adressLocal->Multiline = true;
            this->textBox_adressLocal->Name = L"textBox_adressLocal";
            this->textBox_adressLocal->Size = System::Drawing::Size(176, 60);
            this->textBox_adressLocal->TabIndex = 253;
            // 
            // label25
            // 
            this->label25->AutoSize = true;
            this->label25->BackColor = System::Drawing::Color::Transparent;
            this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->label25->Location = System::Drawing::Point(468, 155);
            this->label25->Name = L"label25";
            this->label25->Size = System::Drawing::Size(89, 13);
            this->label25->TabIndex = 255;
            this->label25->Text = L"Localité de vente";
            // 
            // textBox_contratAcquisition
            // 
            this->textBox_contratAcquisition->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, 
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->textBox_contratAcquisition->Location = System::Drawing::Point(471, 211);
            this->textBox_contratAcquisition->Name = L"textBox_contratAcquisition";
            this->textBox_contratAcquisition->Size = System::Drawing::Size(176, 20);
            this->textBox_contratAcquisition->TabIndex = 251;
            // 
            // label26
            // 
            this->label26->AutoSize = true;
            this->label26->BackColor = System::Drawing::Color::Transparent;
            this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->label26->Location = System::Drawing::Point(468, 195);
            this->label26->Name = L"label26";
            this->label26->Size = System::Drawing::Size(160, 13);
            this->label26->TabIndex = 254;
            this->label26->Text = L"*Numéro du contrat d\'acquisition";
            // 
            // textBox_certfSanitaire
            // 
            this->textBox_certfSanitaire->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, 
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->textBox_certfSanitaire->Location = System::Drawing::Point(471, 250);
            this->textBox_certfSanitaire->Name = L"textBox_certfSanitaire";
            this->textBox_certfSanitaire->Size = System::Drawing::Size(176, 20);
            this->textBox_certfSanitaire->TabIndex = 252;
            // 
            // button_annuler
            // 
            this->button_annuler->BackColor = System::Drawing::Color::Transparent;
            this->button_annuler->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button_annuler.BackgroundImage")));
            this->button_annuler->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->button_annuler->FlatAppearance->BorderSize = 0;
            this->button_annuler->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
            this->button_annuler->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button_annuler->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->button_annuler->Location = System::Drawing::Point(802, 467);
            this->button_annuler->Name = L"button_annuler";
            this->button_annuler->Size = System::Drawing::Size(74, 37);
            this->button_annuler->TabIndex = 265;
            this->button_annuler->Text = L"Annuler";
            this->button_annuler->UseVisualStyleBackColor = false;
            this->button_annuler->Click += gcnew System::EventHandler(this, &formDemande::button_annuler_Click);
            // 
            // textBox_taxe
            // 
            this->textBox_taxe->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->textBox_taxe->Location = System::Drawing::Point(355, 408);
            this->textBox_taxe->Name = L"textBox_taxe";
            this->textBox_taxe->Size = System::Drawing::Size(82, 20);
            this->textBox_taxe->TabIndex = 267;
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->BackColor = System::Drawing::Color::Transparent;
            this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->label3->Location = System::Drawing::Point(354, 392);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(28, 13);
            this->label3->TabIndex = 266;
            this->label3->Text = L"TVA";
            // 
            // textBox_fax
            // 
            this->textBox_fax->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->textBox_fax->Location = System::Drawing::Point(138, 290);
            this->textBox_fax->Name = L"textBox_fax";
            this->textBox_fax->Size = System::Drawing::Size(87, 20);
            this->textBox_fax->TabIndex = 268;
            // 
            // label12
            // 
            this->label12->AutoSize = true;
            this->label12->BackColor = System::Drawing::Color::Transparent;
            this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->label12->Location = System::Drawing::Point(137, 274);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(24, 13);
            this->label12->TabIndex = 269;
            this->label12->Text = L"Fax";
            // 
            // comboBox_unite
            // 
            this->comboBox_unite->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->comboBox_unite->FormattingEnabled = true;
            this->comboBox_unite->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"Kilogramme", L"Litre", L"Mettre cube"});
            this->comboBox_unite->Location = System::Drawing::Point(355, 132);
            this->comboBox_unite->Name = L"comboBox_unite";
            this->comboBox_unite->Size = System::Drawing::Size(82, 21);
            this->comboBox_unite->TabIndex = 259;
            // 
            // label28
            // 
            this->label28->AutoSize = true;
            this->label28->BackColor = System::Drawing::Color::Transparent;
            this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->label28->Location = System::Drawing::Point(354, 116);
            this->label28->Name = L"label28";
            this->label28->Size = System::Drawing::Size(84, 13);
            this->label28->TabIndex = 269;
            this->label28->Text = L"Unité de mésure";
            // 
            // photo_logo
            // 
            this->photo_logo->BackColor = System::Drawing::Color::Transparent;
            this->photo_logo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"photo_logo.BackgroundImage")));
            this->photo_logo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->photo_logo->Cursor = System::Windows::Forms::Cursors::Hand;
            this->photo_logo->Location = System::Drawing::Point(686, 48);
            this->photo_logo->Name = L"photo_logo";
            this->photo_logo->Size = System::Drawing::Size(190, 117);
            this->photo_logo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->photo_logo->TabIndex = 276;
            this->photo_logo->TabStop = false;
            this->photo_logo->Click += gcnew System::EventHandler(this, &formDemande::photo_logo_Click);
            // 
            // label27
            // 
            this->label27->AutoSize = true;
            this->label27->BackColor = System::Drawing::Color::Transparent;
            this->label27->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 12, System::Drawing::FontStyle::Italic));
            this->label27->Location = System::Drawing::Point(468, 380);
            this->label27->Name = L"label27";
            this->label27->Size = System::Drawing::Size(192, 36);
            this->label27->TabIndex = 275;
            this->label27->Text = L"Toutes les champs doivent etres \r\nremplis, surtout (*). ";
            this->label27->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // openFileDialog1
            // 
            this->openFileDialog1->FileName = L"openFileDialog1";
            // 
            // pictureBox1
            // 
            this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
            this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.BackgroundImage")));
            this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox1->Location = System::Drawing::Point(686, 184);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(190, 119);
            this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox1->TabIndex = 278;
            this->pictureBox1->TabStop = false;
            this->pictureBox1->Click += gcnew System::EventHandler(this, &formDemande::pictureBox1_Click);
            // 
            // pictureBox2
            // 
            this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
            this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.BackgroundImage")));
            this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox2->Location = System::Drawing::Point(686, 322);
            this->pictureBox2->Name = L"pictureBox2";
            this->pictureBox2->Size = System::Drawing::Size(190, 122);
            this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox2->TabIndex = 279;
            this->pictureBox2->TabStop = false;
            this->pictureBox2->Click += gcnew System::EventHandler(this, &formDemande::pictureBox2_Click);
            // 
            // label30
            // 
            this->label30->AutoSize = true;
            this->label30->BackColor = System::Drawing::Color::Transparent;
            this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->label30->Location = System::Drawing::Point(761, 306);
            this->label30->Name = L"label30";
            this->label30->Size = System::Drawing::Size(115, 13);
            this->label30->TabIndex = 348;
            this->label30->Text = L"image de la LOCALITE";
            // 
            // label29
            // 
            this->label29->AutoSize = true;
            this->label29->BackColor = System::Drawing::Color::Transparent;
            this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->label29->Location = System::Drawing::Point(774, 168);
            this->label29->Name = L"label29";
            this->label29->Size = System::Drawing::Size(102, 13);
            this->label29->TabIndex = 347;
            this->label29->Text = L"image du PRODUIT";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->BackColor = System::Drawing::Color::Transparent;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->label2->Location = System::Drawing::Point(712, 34);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(161, 13);
            this->label2->TabIndex = 346;
            this->label2->Text = L"image ou logo du DEMANDEUR";
            // 
            // label33
            // 
            this->label33->AutoSize = true;
            this->label33->BackColor = System::Drawing::Color::Transparent;
            this->label33->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label33->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
                static_cast<System::Byte>(0)));
            this->label33->Location = System::Drawing::Point(508, 48);
            this->label33->Name = L"label33";
            this->label33->Size = System::Drawing::Size(158, 38);
            this->label33->TabIndex = 349;
            this->label33->Text = L"Pour ajouter des images,\r\ncliquez dans les rectangles";
            // 
            // pictureBox3
            // 
            this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
            this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox3.Image")));
            this->pictureBox3->Location = System::Drawing::Point(588, 18);
            this->pictureBox3->Name = L"pictureBox3";
            this->pictureBox3->Size = System::Drawing::Size(118, 31);
            this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox3->TabIndex = 350;
            this->pictureBox3->TabStop = false;
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->BackColor = System::Drawing::Color::Transparent;
            this->label10->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Italic | System::Drawing::FontStyle::Underline)), 
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label10->Location = System::Drawing::Point(45, 18);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(348, 36);
            this->label10->TabIndex = 351;
            this->label10->Text = L"Nouvelle demande d\'autorisation";
            // 
            // formDemande
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::SystemColors::Control;
            this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
            this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->ClientSize = System::Drawing::Size(930, 528);
            this->Controls->Add(this->label10);
            this->Controls->Add(this->label33);
            this->Controls->Add(this->label30);
            this->Controls->Add(this->label29);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->photo_logo);
            this->Controls->Add(this->pictureBox2);
            this->Controls->Add(this->pictureBox1);
            this->Controls->Add(this->button_annuler);
            this->Controls->Add(this->button_terminer);
            this->Controls->Add(this->label27);
            this->Controls->Add(this->textBox_adresseDemandeur);
            this->Controls->Add(this->textBox_fax);
            this->Controls->Add(this->comboBox_unite);
            this->Controls->Add(this->label12);
            this->Controls->Add(this->textBox_adressLocal);
            this->Controls->Add(this->label6);
            this->Controls->Add(this->textBox_demandeur);
            this->Controls->Add(this->textBox_assurance);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->label28);
            this->Controls->Add(this->label7);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->textBox_certfSanitaire);
            this->Controls->Add(this->textBox_tel);
            this->Controls->Add(this->textBox_commentaire);
            this->Controls->Add(this->textBox_mail);
            this->Controls->Add(this->textBox_quantite);
            this->Controls->Add(this->textBox_web);
            this->Controls->Add(this->comboBox_typeLocal);
            this->Controls->Add(this->label32);
            this->Controls->Add(this->label23);
            this->Controls->Add(this->textBox_bp);
            this->Controls->Add(this->label26);
            this->Controls->Add(this->label31);
            this->Controls->Add(this->textBox_taxe);
            this->Controls->Add(this->label11);
            this->Controls->Add(this->textBox_bancaire);
            this->Controls->Add(this->label24);
            this->Controls->Add(this->label8);
            this->Controls->Add(this->textBox_numRegi);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->comboBox_typeDemande);
            this->Controls->Add(this->label9);
            this->Controls->Add(this->label25);
            this->Controls->Add(this->textBox_contratAcquisition);
            this->Controls->Add(this->textBox_nominationProduit);
            this->Controls->Add(this->textBox_sanitaireProduit);
            this->Controls->Add(this->textBox_pGros);
            this->Controls->Add(this->textBox_douane);
            this->Controls->Add(this->textBox_origine);
            this->Controls->Add(this->label18);
            this->Controls->Add(this->label20);
            this->Controls->Add(this->textBox_pUnitaire);
            this->Controls->Add(this->label22);
            this->Controls->Add(this->textBox_valDouane);
            this->Controls->Add(this->label17);
            this->Controls->Add(this->label19);
            this->Controls->Add(this->label15);
            this->Controls->Add(this->label21);
            this->Controls->Add(this->label16);
            this->Controls->Add(this->textBox_homologation);
            this->Controls->Add(this->label14);
            this->Controls->Add(this->label13);
            this->Controls->Add(this->pictureBox3);
            this->DoubleBuffered = true;
            this->MaximizeBox = false;
            this->MaximumSize = System::Drawing::Size(940, 560);
            this->MinimumSize = System::Drawing::Size(940, 560);
            this->Name = L"formDemande";
            this->Text = L"Formulaire de demande d\'autorisation de commerce alimentaire";
            this->TransparencyKey = System::Drawing::SystemColors::Window;
            this->Load += gcnew System::EventHandler(this, &formDemande::formDemande_Load);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->photo_logo))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
         
private: System::Void button_terminer_Click(System::Object^  sender, System::EventArgs^  e) {
                         
                    autorisation A; demande D;  localite L; produit P;
                    array<unsigned char> ^ bytImage ;
                    array<unsigned char> ^ bytImage1 ;
                    array<unsigned char> ^ bytImage2 ;

            try{
                    MemoryStream ^mstImage1  = gcnew MemoryStream();
                    photo_logo->Image->Save(mstImage1, System::Drawing::Imaging::ImageFormat::Jpeg);
                    bytImage = mstImage1->GetBuffer();

                    MemoryStream ^mstImage2  = gcnew MemoryStream();
                    pictureBox1->Image->Save(mstImage2, System::Drawing::Imaging::ImageFormat::Jpeg);
                    bytImage1 = mstImage2->GetBuffer();

                    MemoryStream ^mstImage3  = gcnew MemoryStream();
                    pictureBox2->Image->Save(mstImage3, System::Drawing::Imaging::ImageFormat::Jpeg);
                    bytImage2 = mstImage3->GetBuffer();
            }
            catch(Exception ^e){MessageBox::Show("Vous devez inserer des images de format JPEG et moins de 300Ko");return;}
                    
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
                    P.image=bytImage1;
//=localite====================================================   
		            L.contratAcquisition =Int32::Parse(textBox_contratAcquisition->Text);
		            L.numCertifSanitaire =Int32::Parse(textBox_certfSanitaire->Text);
		            L.typeLocalite=comboBox_typeLocal->SelectedItem->ToString() ;
		            L.adresse=textBox_adressLocal->Text ;
                    L.image=bytImage2;
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
                    D.image=bytImage;
//=Autorisation============================================== 
                    A.refdemande=D.numRegCom;
		            A.refAdministrateur=session::admin.login;
		            A.statut="en attente" ;
		                         
            }
            catch(Exception ^e){MessageBox::Show("Format incorect! Veillez revoir les differents champs");return;}
                 
           try{P.ajouter();}catch(Exception ^e){MessageBox::Show("Les informations du produit n'ont pas été enregistrées !\nVeillez corriger les erreurs suivantes :\n"+e->Message);return;}
           try{L.ajouter();}catch(Exception ^e){MessageBox::Show("Les informations de la localité n'ont pas été enregistrées !\nVeillez corriger les erreurs suivantes :\n"+e->Message);return;}
		   try{D.ajouter();}catch(Exception ^e){MessageBox::Show("Les informations du demandeur n'ont pas été enregistrées !\nVeillez corriger les erreurs suivantes :\n"+e->Message);return;}
           try{A.ajouter();}catch(Exception ^e){MessageBox::Show("L'aurisation n'a pas été enregistrée !\nVeillez corriger les erreurs suivantes :\n"+e->Message);return;}                                                                                                                   
            
           MessageBox::Show("La demande a été bien ajouter");
         }

private: System::Void button_annuler_Click(System::Object^  sender, System::EventArgs^  e) {
                    MessageBox::Show("La demande a été annuler");
                    this->Close();
         }
private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
         }
private: System::Void formDemande_Load(System::Object^  sender, System::EventArgs^  e) {
            this->comboBox_typeDemande->SelectedIndex=0;
            this->comboBox_typeLocal->SelectedIndex=0;
            this->comboBox_unite->SelectedIndex=0;
         }

private: System::Void comboBox_typeDemande_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
                 if(comboBox_typeDemande->SelectedItem=="Entreprise"){
                     label1->Text="Raison social ou Forme juridique";
                     label2->Text="logo de l'ENTREPRISE";
                 }

                if(comboBox_typeDemande->SelectedItem=="Particulier"){
                    label1->Text="Nom et Prénom du demandeur";
                    label2->Text="photo du DEMANDEUR";
                 }
             }
private: System::Void photo_logo_Click(System::Object^  sender, System::EventArgs^  e) {
				    openFileDialog1->Title = "Selectionner l'image à inserer";
				    /*openFileDialog1->CheckFileExists = true;
				    openFileDialog1->InitialDirectory = Application::StartupPath;*/
				    openFileDialog1->Filter = "Fichiers image (*.BMP;*.JPG;*.GIF)|*.BMP;*.JPG;*.GIF|All files (*.*)|*.*" ;
				    /*openFileDialog1->FilterIndex = 1 ;
				    openFileDialog1->RestoreDirectory = true ;*/
                    openFileDialog1->ShowDialog();
                    photo_logo->Image = Image::FromFile(openFileDialog1->FileName);


            //OdbcCommand ^cmd=gcnew OdbcCommand;
            //cmd->Connection=session::Connection;
            //cmd->Parameters->AddWithValue("@img", "image");          
            //cmd->Parameters["@img"]->Value = bytImage;
            //cmd->CommandText ="INSERT INTO `servicedata`.`localite` (`contratAcquisition`, `typeLocalite`, `numCertifSanitaire`, `adresse`, `image`) VALUES (20, 'magasin', '23', 'TG',?); ";
            //cmd->ExecuteNonQuery();
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
};
}
