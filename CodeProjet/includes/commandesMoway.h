/* 
 * File:   commandesMoway.h
 * Author: Eric
 *
 * R�le : D�claration des fonctions qui permettent de commander le robot moway
 * Ces fonctions utilisent les fonctions de la librairie moway
 * Created on 24 juillet 2019, 17:34
 * Historique : 
 *  19/11/2019 Marie-Pierre Pinaud Ajout Commentaires des fonctions
 *                                 Ajout des commentaires du fichier
 *  19/12/2019  Correction des commentaires de avancer, reculer, clignoterRouge, 
 *              clignoterVert
 */

#ifndef COMMANDESMOWAY_H
#define	COMMANDESMOWAY_H

#ifdef	__cplusplus
extern "C" {
#endif

/********************************************************
*Nom : configurerMoway                                 
* R�le : configure les moteurs et les capteurs du moway
********************************************************/
    
void configurerMoway();


/********************************************************
*Nom : lireBatterie                                    
*R�le : r�cup�re le pourcentage de batterie           
*Valeur de retour :   pourcentage de batterie restant  
********************************************************/
unsigned char lireBatterie();

/********************************************************
*Nom : attendre                                        
* R�le : fait une pause d'une dur�e de millisecondes   
*Param�tres d'entr�e :                                 
*    millisecondes : dur�e de la pause en millisecondes*
********************************************************/
void attendre(unsigned char millisecondes);

/********************************************************
*Nom : avancer                                         
* R�le : fait avancer le robot tout droit 
********************************************************/
void avancer();

/********************************************************
*Nom : reculer                                         
*R�le : fait reculer le robot            
********************************************************/
void reculer();

/********************************************************
*Nom : arreterRobot                                    
* R�le : arr�ter tous les mouvements du robot          
********************************************************/
void arreterRobot();

/********************************************************
*Nom : calculerDistanceParcourue                       
* R�le : calcule la distance parcourue  par le robot   
*        correspondant � son dernier d�placement       
*Valeur de retour :     distance parcourue             
********************************************************/
unsigned char calculerDistanceParcourue();


/*********************************************************
*Nom : calculerAcc�l�rationVerticale                   
* R�le : calcule l'acc�l�ration verticale  du robot    
*Valeur de retour :   valeur en g de l'acc�l�ration    
*                     verticale                        
********************************************************/
float calculerAccelerationVerticale();

/*********************************************************
*Nom : clignoterRouge                                   
* R�le : fait clignoter la led rouge et fait une pause       
*Param�tre d'entr�e : dur�e de la pause en millisecondes  
********************************************************/
void clignoterRouge(unsigned char demiPeriodeMillisecondes);

/*********************************************************
*Nom : clignoterVerte                                   
* R�le : fait clignoter la led verte et fait une pause        
*Param�tre d'entr�e : dur�e de la pause en millisecondes   
*********************************************************/
void clignoterVert(unsigned char demiPeriodeMillisecondes);


/*********************************************************
*Nom : tournerQuartDroite                               
* R�le : fait faire au robot un quart de tour vers la   
*        droite                                         
*********************************************************/
void tournerQuartDroite(void);

/*********************************************************
*Nom : faireDemiTour                                    
* R�le : fait faire au robot un demi tour vers la       
*********************************************************/
void faireDemiTour(void);


/*********************************************************
*Nom : lireCapteurLigneGauche                           
* R�le : lit la valeur du capteur de ligne gauche       
* Valeur de retour :  1 si ligne nore d�tect�e, 0 sinon                                                   
*********************************************************/
unsigned char lireCapteurLigneGauche();
                                                                                                              
                                                                                                              
/*********************************************************
*Nom : lireCapteurLigneGauche                           
* R�le : lit la valeur du capteur de ligne gauche       
* Valeur de retour :  1 si ligne nore d�tect�e, 0 sinon                                                    
*********************************************************/
unsigned char lireCapteurLigneDroit();

#ifdef	__cplusplus
}
#endif

#endif	/* COMMANDESMOWAY_H */

