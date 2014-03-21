#pragma once
using namespace System::Collections::Generic;
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing; 
using namespace Odbc;


ref class produit{
	public:
		produit(void);
		String^ nom ;
		int numCertifSanitaire ;
		int munCertifHomologation ;
		int numDeclarationDouaniere ;
		int quantite ;
        String^ unite;
		double valDouaniere ;
		double prixUnitaire ;
		double prixEnGros ;
		double taxe ;
		String^ origine ;
		String^ commentaire ;
        array<unsigned char> ^ image;
        void ajouter();
        void mettreAjours(int refference);
       static OdbcDataAdapter^ afficher();
       static OdbcDataReader ^ trouver(int num);
};

ref class localite{
	public:
		localite(void);
		int contratAcquisition ;
		int numCertifSanitaire ;
		String^ typeLocalite ;
		String^ adresse ;
        array<unsigned char> ^ image;
        void ajouter();
        void mettreAjours(int refference);
       static OdbcDataAdapter^ afficher();
       static OdbcDataReader ^ trouver(int num);
};

ref class demande{
	public:
		demande(void);
		int numRegCom ;
		String^ demandeur;
        array<unsigned char> ^ image;
		String^ type ;
		int comptbanq ;
		int numAssurance ;
		String^ tel ;
		String^ fax ;
		String^ mail ;
		String^ web ;
		int bp ;
		String^ adresse ;
        int refProduit;
        int refLocalite;
		void ajouter();
        void mettreAjours(int refference);
       static OdbcDataAdapter^ afficher();
       static OdbcDataAdapter^ afficherParticulier();
       static OdbcDataAdapter^ afficherEntreprise();
       static OdbcDataReader ^ trouver(int num);
       static OdbcDataAdapter^ chercher(String ^ aTrouver);
};

ref class administrateur{
       public: 
        administrateur(void);
        String^ nom;
        String^ prenom;
        String^ poste;
        String^ login;
        String^ password;
        void ajouter();
        bool authentifier(String^ log,String^ pwd);
       // void mettreAjours(int refference);
};

ref class autorisation{
	public:	
		autorisation(void);
		int numAutorisation;
        int refdemande;
		String^ refAdministrateur;
		String^ statut ;
		void ajouter();
        void mettreAjours(int refference);
       static OdbcDataAdapter^ afficher();
       static OdbcDataAdapter^ afficherValider();
       static OdbcDataAdapter^ afficherNonValider();
       static OdbcDataAdapter^ afficherEnAttente();
       static OdbcDataReader ^ trouver(int num);
       static OdbcDataReader^ lesNumAutorisation();
};

ref  class session{
	public:
		static OdbcConnection ^Connection;
        static administrateur admin;
       // static String^ adminLogin;
        static String^ database;
        static String^ databaseUser;
        static String^ databasePassword;
        static String^ databaseServer;
        static bool seConnecter();
        static bool seDeconnecter();
};