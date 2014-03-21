#include "StdAfx.h"
#include "donnees.h"

bool session::seConnecter()
{
        if(session::Connection==nullptr)
            session::Connection= gcnew OdbcConnection;
                
        if(session::Connection->State==ConnectionState::Open)
            session::Connection->Close();
                    
        String ^connectionstring="";
        String ^driver="{MySQL ODBC 5.1 Driver}";
        connectionstring = "Driver=" + driver + "; Server=" + session::databaseServer + "; User=" + session::databaseUser + "; Password=" + session::databasePassword + ";Database=" + session::database + ";";

        session::Connection->ConnectionString = connectionstring;

        try { session::Connection->Open();}

        catch (Exception ^e){ MessageBox::Show("Impossible de se connecter! Veiller corriger les erreurs suivant dans la configuration"+e->Message);return false; }

        if (session::Connection->State!=ConnectionState::Open){
            MessageBox::Show("Erreur d'ouverture de la Connection à la base de données !");
            return false;
        }
                
        else if(session::Connection->State==ConnectionState::Open){
					return true;
				}
}
bool session::seDeconnecter(void){
            if(session::Connection==nullptr || session::Connection->State!=ConnectionState::Open)
						 return false;
				session::Connection->Close();
				if(session::Connection->State==ConnectionState::Closed)
						return true;;
				return false;
}

OdbcDataAdapter^ afficherTable(String^ ma_requette){

     if(session::Connection==nullptr || session::Connection->State!=ConnectionState::Open){
            MessageBox::Show("Vous n'etes pas connecté !\nVeillez d'abord vous connecter.");  
            return nullptr;
        }
    else{
         OdbcDataAdapter^ odbcAdapter = gcnew OdbcDataAdapter(ma_requette, session::Connection);
         return odbcAdapter;
     }
}
void INSERT(String^ ma_requette,array<unsigned char> ^ image){
    
			if(session::Connection==nullptr || session::Connection->State!=ConnectionState::Open){
            MessageBox::Show("Vous n'etes pas connecté !\nVeillez d'abord vous connecter.");
                    return;
                }

            OdbcCommand ^cmd=gcnew OdbcCommand;
            cmd->Connection=session::Connection;
            cmd->Parameters->AddWithValue("@img", "image");          
            cmd->Parameters["@img"]->Value = image;

            cmd->CommandText =ma_requette;
            cmd->ExecuteNonQuery();
         }
void INSERT2(String^ ma_requette){
    
			if(session::Connection==nullptr || session::Connection->State!=ConnectionState::Open){
            MessageBox::Show("Vous n'etes pas connecté !\nVeillez d'abord vous connecter.");
                    return;
                }

            OdbcCommand ^sqlCommand=gcnew OdbcCommand;
            sqlCommand->Connection=session::Connection;
            OdbcDataReader ^result;

             sqlCommand->CommandText = ma_requette;
             
            result = sqlCommand->ExecuteReader(); 
         }
OdbcDataReader ^ trouverEnregistrement(String ^ table,String ^ champ, int refference){
    
			if(session::Connection==nullptr || session::Connection->State!=ConnectionState::Open){
            MessageBox::Show("Vous n'etes pas connecté !\nVeillez d'abord vous connecter.");
                    return nullptr;
                }                
                    OdbcCommand ^sqlCommand2=gcnew OdbcCommand;
                    sqlCommand2->Connection=session::Connection;

                    sqlCommand2->CommandText ="select * from "+table+" where "+champ+" = "+refference+";";
                    return sqlCommand2->ExecuteReader(); 
} 

//==produit===================================================================
produit::produit(void)
{
}
void produit:: ajouter(){
  
      INSERT(" INSERT INTO `servicedata`.`produit` (`certifHomologation`, `nomination`, `quantite`,`metrique`, `origine`, `numCertifSanitaire`, `numDeclarationDouaniere`, `valDouaniere`, `prixUnitaire`, `prixEnGros`, `TVA`, `commentaire`, `image`) VALUES("+munCertifHomologation+", '"+nom+"', "+quantite+",'"+unite+"', '"+origine+"', "+numCertifSanitaire+", "+numDeclarationDouaniere+", "+valDouaniere+", "+prixUnitaire+", "+ prixEnGros+", "+taxe+", '"+commentaire+"',?);",image);         

}
void produit:: mettreAjours(int refference){
    INSERT( "UPDATE `servicedata`.`produit` SET `certifHomologation`="+munCertifHomologation+", `nomination`= '"+nom+"', `quantite`="+quantite+",`metrique`='"+unite+"', `origine`='"+origine+"', `numCertifSanitaire`="+numCertifSanitaire+", `numDeclarationDouaniere`="+numDeclarationDouaniere+", `valDouaniere`="+valDouaniere+", `prixUnitaire`="+prixUnitaire+", `prixEnGros`="+ prixEnGros+", `TVA`="+taxe+", `commentaire`='"+commentaire+"',image=? WHERE `certifHomologation`="+refference+"; ",image);
         }
OdbcDataAdapter^ produit::afficher()
{
         return afficherTable("select certifHomologation as 'Certificat d Homologation',nomination as Produit,quantite as Quantité,metrique as Metrique,origine as Importation,numCertifSanitaire as 'Certificat sanitaire',numDeclarationDouaniere as 'Declaration douanière',valDouaniere as 'Valeur douanière',prixEnGros as 'Prix en gros',prixUnitaire as 'Prix unitaire',TVA as Taxe,commentaire as 'Commantaire sur le produit' from produit");
}
OdbcDataReader ^ produit::trouver(int num)	{
    return trouverEnregistrement("produit","certifHomologation", num);
}

//==localite======================================================================
localite::localite(void)
{
}
void localite::ajouter(){
	
    INSERT(" INSERT INTO `servicedata`.`localite` (`contratAcquisition`, `typeLocalite`, `numCertifSanitaire`, `adresse`, `image`) VALUES("+contratAcquisition +", '"+typeLocalite +"', "+numCertifSanitaire +", '"+adresse +"',?);",image);

}
void localite:: mettreAjours(int refference){
    INSERT( "UPDATE `servicedata`.`localite` SET `contratAcquisition`="+contratAcquisition+", `typeLocalite`= '"+typeLocalite+"', `numCertifSanitaire`="+numCertifSanitaire+",`adresse`='"+adresse+"',image=? WHERE `contratAcquisition`="+refference+"; ",image);
         }
OdbcDataAdapter^ localite::afficher()
{
         return afficherTable("select contratAcquisition as 'Contrat d acquisition', adresse as 'Adresse de localité',numCertifSanitaire as 'Certificat sanitaire',typeLocalite as 'Type de localité' from localite");
}
OdbcDataReader ^ localite::trouver(int num)	{
    return trouverEnregistrement("localite","contratAcquisition", num);
}

//==demande=================================================================
demande::demande(void)
{
}
void demande::ajouter(){
		  
      INSERT(" INSERT INTO `servicedata`.`demande` (`registreCom`, `typeDemande`, `demandeur`, `comptBancaire`, `numAssurance`, `tel`, `fax`, `mail`, `web`, `bp`, `adresse`, `produit_certifHomologation`, `localite_contratAcquisition`, `image`) VALUES("+numRegCom+", '"+type+"', '"+demandeur+"', "+comptbanq+", "+numAssurance+", '"+tel+"', '"+fax+"', '"+mail+"', '"+web+"', "+bp+", '"+adresse+"', "+refProduit+", "+refLocalite +",?);",image);
		 }
void demande:: mettreAjours(int refference){
    INSERT( "UPDATE `servicedata`.`demande` SET `registreCom`="+numRegCom+", `typeDemande`= '"+type+"', `demandeur`='"+demandeur+"',`comptBancaire`="+comptbanq+" , `numAssurance`="+numAssurance+", `tel`='"+tel+"', `fax`='"+fax+"', `mail`='"+mail+"', `web`='"+web+"', `bp`="+bp+", `adresse`='"+adresse+"', `produit_certifHomologation`="+refProduit+", `localite_contratAcquisition`="+refLocalite+",image=? WHERE `registreCom`="+refference+"; ",image);
         }
OdbcDataAdapter^ demande::chercher(String ^ aTrouver)
{
         return afficherTable("select numAutorisation as Autorisation,statut as Statut,administrateur.nom as 'Ajouté par',registreCom as 'Registre de commerce',demandeur as Nom,typeDemande as 'type de demande',nomination as 'Produit à autorisé',localite.adresse as 'Adresse de vente',comptBancaire as 'Compte bancaire',numAssurance as 'Numéro d assurance',tel as 'Numéro de téléphone',fax as 'Numéro de fax',mail as 'Adresse électonique',web as 'Site web',bp as 'Boite postale',demande.adresse as 'Adresse' from autorisation, administrateur,demande, produit, localite where demandeur like '%"+aTrouver+"%' and demande_registreCom=registreCom and administrateur_login=login and produit_certifHomologation= certifHomologation and localite_contratAcquisition=contratAcquisition");
}
OdbcDataAdapter^ demande::afficher()
{
         return afficherTable("select registreCom as 'Registre de commerce',demandeur as Nom,typeDemande as 'type de demande',nomination as 'Produit à autorisé', localite.adresse as 'Adresse de vente',comptBancaire as 'Compte bancaire',numAssurance as 'Numéro d assurance',tel as 'Numéro de téléphone',fax as 'Numéro de fax',mail as 'Adresse électonique',web as 'Site web',bp as 'Boite postale', demande.adresse as 'Adresse' from demande, produit, localite where produit_certifHomologation= certifHomologation and localite_contratAcquisition=contratAcquisition");
}
OdbcDataAdapter^ demande::afficherEntreprise()
{
     return afficherTable("select registreCom as 'Registre de commerce',demandeur as Nom,typeDemande as 'type de demande',nomination as 'Produit à autorisé', localite.adresse as 'Adresse de vente',comptBancaire as 'Compte bancaire',numAssurance as 'Numéro d assurance',tel as 'Numéro de téléphone',fax as 'Numéro de fax',mail as 'Adresse électonique',web as 'Site web',bp as 'Boite postale', demande.adresse as 'Adresse' from demande, produit, localite where produit_certifHomologation= certifHomologation and localite_contratAcquisition=contratAcquisition and demande.typeDemande='entreprise'");
}
OdbcDataAdapter^ demande::afficherParticulier()
{ 
    return afficherTable("select registreCom as 'Registre de commerce',demandeur as Nom,typeDemande as 'type de demande',nomination as 'Produit à autorisé', localite.adresse as 'Adresse de vente',comptBancaire as 'Compte bancaire',numAssurance as 'Numéro d assurance',tel as 'Numéro de téléphone',fax as 'Numéro de fax',mail as 'Adresse électonique',web as 'Site web',bp as 'Boite postale', demande.adresse as 'Adresse' from demande, produit, localite where produit_certifHomologation= certifHomologation and localite_contratAcquisition=contratAcquisition and demande.typeDemande='particulier'");
}
OdbcDataReader ^ demande::trouver(int num)	{
    return trouverEnregistrement("demande","registreCom", num);
}

//==administrateur===============================================================
administrateur::administrateur(void)
{
}
void administrateur::ajouter(){
    
			INSERT2("INSERT INTO `servicedata`.`administrateur` (`login`, `password`, `nom`, `prenom`, `poste`) VALUES ('"+login+"', '"+password+"', '"+nom+"', '"+prenom+"', '"+poste+"');");

        }
bool administrateur::authentifier(String^ log,String^ pwd){
     OdbcCommand ^sqlCommand=gcnew OdbcCommand;
            sqlCommand->Connection=session::Connection;
            OdbcDataReader ^result;
             sqlCommand->CommandText = "select * from administrateur";
             result = sqlCommand->ExecuteReader(); 
             while(result->Read()){
                 if(log==result->GetValue(0)->ToString() && pwd==result->GetValue(1)->ToString()){
                    login=result->GetValue(0)->ToString();
                    password=result->GetValue(1)->ToString();
                    nom=result->GetValue(2)->ToString();
                    prenom=result->GetValue(3)->ToString();
                    poste=result->GetValue(4)->ToString();
                    return true;
                 }
             }
            return false;
}

//==autorisation===============================================================
autorisation::autorisation(void)
{
}
void autorisation::ajouter(){
    
			INSERT2("INSERT INTO `servicedata`.`autorisation` (`administrateur_login`, `demande_registreCom`, `statut`) VALUES ('"+refAdministrateur+"', "+refdemande+", '"+statut+"');");
}
void autorisation:: mettreAjours(int refference){
    INSERT2( "UPDATE `servicedata`.`autorisation` SET `administrateur_login`='"+refAdministrateur+"', `demande_registreCom`="+refdemande+", `statut`='"+statut+"' WHERE `numAutorisation`="+refference+"; ");
         }
OdbcDataAdapter^ autorisation::afficher()
{
   return afficherTable("select numAutorisation as Autorisations,demandeur as Proprietaires,nomination as Produits,typeLocalite as Localités,localite.adresse as Adresses_des_localités, statut as Statut,nom as Adminstateur from autorisation,demande,produit,localite,administrateur where administrateur_login=login and demande_registreCom=registreCom and produit_certifHomologation=certifHomologation and localite_contratAcquisition=contratAcquisition");
}
OdbcDataAdapter^ autorisation::afficherValider()
{
    return afficherTable("select numAutorisation as Autorisations,demandeur as Proprietaires,nomination as Produits,typeLocalite as Localités,localite.adresse as Adresses_des_localités, statut as Statut,nom as Adminstateur from autorisation,demande,produit,localite,administrateur where administrateur_login=login and demande_registreCom=registreCom and produit_certifHomologation=certifHomologation and localite_contratAcquisition=contratAcquisition and statut='accepter'");
}
OdbcDataAdapter^ autorisation::afficherNonValider()
{
   return afficherTable("select numAutorisation as Autorisations,demandeur as Proprietaires,nomination as Produits,typeLocalite as Localités,localite.adresse as Adresses_des_localités, statut as Statut,nom as Adminstateur from autorisation,demande,produit,localite,administrateur where administrateur_login=login and demande_registreCom=registreCom and produit_certifHomologation=certifHomologation and localite_contratAcquisition=contratAcquisition and statut='rejetter'");
}
OdbcDataAdapter^ autorisation::afficherEnAttente()
{
      return afficherTable("select numAutorisation as Autorisations,demandeur as Proprietaires,nomination as Produits,typeLocalite as Localités,localite.adresse as Adresses_des_localités, statut as Statut,nom as Adminstateur from autorisation,demande,produit,localite,administrateur where administrateur_login=login and demande_registreCom=registreCom and produit_certifHomologation=certifHomologation and localite_contratAcquisition=contratAcquisition and statut='en attente'");
}	
OdbcDataReader ^ autorisation::trouver(int num)	{
    return trouverEnregistrement("autorisation","numAutorisation", num);
}	
OdbcDataReader^ autorisation::lesNumAutorisation(){
                OdbcCommand ^sqlCommand2=gcnew OdbcCommand;
                sqlCommand2->Connection=session::Connection;

                sqlCommand2->CommandText ="SELECT numAutorisation FROM  `autorisation` order by numAutorisation desc;";
                return sqlCommand2->ExecuteReader();
} 

//================================================================
 