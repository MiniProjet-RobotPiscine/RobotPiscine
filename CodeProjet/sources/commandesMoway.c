/* 
 * File:   commandesMoway.h
 * Author: Eric
 *
 * R�le : Code des fonctions qui permettent de commander le robot moway
 * Ces fonctions utilisent les fonctions de la librairie moway
 * Created on 24 juillet 2019, 17:34
 * Historique : 
 *  19/11/2019 Marie-Pierre Pinaud Ajout Commentaires des fonctions
 *                                 Ajout des commentaires du fichier
 */

#include "p18f87j50.h"  		// mOway's microcontroller
#include "lib_sen_moway.h"		// Sensors library
#include "lib_mot_moway.h"		// Motors library

#include "commandesMoway.h"


/********************************************************
*Nom : configurerMoway                                 
* R�le : configure les moteurs et les capteurs du moway
********************************************************/
void configurerMoway() {
    MOT_CONFIG();
    SEN_CONFIG();
}


/********************************************************
*Nom : lireBatterie                                    
*R�le : r�cup�re le pourcentage de batterie           
*Valeur de retour :   pourcentage de batterie restant  
********************************************************/
unsigned char lireBatterie() {
  return 100;  
}


/********************************************************
*Nom : attendre                                        
* R�le : fait une pause d'une dur�e de millisecondes   
*Param�tres d'entr�e :                                 
*    millisecondes : dur�e de la pause en millisecondes*
********************************************************/
void attendre(unsigned char millisecondes) { // Au moins 10ms
    if(millisecondes < 1) {
        millisecondes = 1;
    }
    Delay1KTCYx(millisecondes);
}


/********************************************************
*Nom : avancer                                         
* R�le : fait avancer le robot tout droit pendant 20ms 
********************************************************/
void avancer() {
	
}


/********************************************************
*Nom : reculer                                         
*R�le : fait reculer le robot  pendant 20ms           
********************************************************/
void reculer() {
	
}


/********************************************************
*Nom : arreterRobot                                    
* R�le : arr�ter tous les mouvements du robot          
********************************************************/
void arreterRobot() {
	
}


/********************************************************
*Nom : calculerDistanceParcourue                       
* R�le : calcule la distance parcourue  par le robot   
*        correspondant � son dernier d�placement       
*Valeur de retour :     distance parcourue             
********************************************************/
unsigned char calculerDistanceParcourue() {
    char distance[2];
    distance[0] = MOT_FDBCK(STATUS_KM)[0];
    distance[1] = MOT_FDBCK(STATUS_KM)[1];
    return (distance[1]*256 + distance[1]);
}


/*********************************************************
*Nom : calculerAcc�l�rationVerticale                   
* R�le : calcule l'acc�l�ration verticale  du robot    
*Valeur de retour :   valeur en g de l'acc�l�ration    
*                     verticale                        
********************************************************/
float calculerAccelerationVerticale() {
    // axe vertical Z orient� + vers le bas
    // Robot � plat pos� au fond si 1g sur l'axe vertical
    
    return 1; // en g
}


/*********************************************************
*Nom : clignoterRouge                                   
* R�le : allume la led rouge   et fait une pause       
*Valeur de retour :dur�e de la pause en millisecondes  
********************************************************/
void clignoterRouge(unsigned char demiPeriodeMillisecondes) {
    
}


/*********************************************************
*Nom : clignoterVerte                                   
* R�le : allume la led verte   et fait une pause        
*Valeur de retour :dur�e de la pause en millisecondes   
*********************************************************/
void clignoterVert(unsigned char demiPeriodeMillisecondes) {
   
}


/*********************************************************
*Nom : tournerQuartDroite                               
* R�le : fait faire au robot un quart de tour vers la   
*        droite                                         
*********************************************************/
void tournerQuartDroite(void)
{
   
}


/*********************************************************
*Nom : faireDemiTour                                    
* R�le : fait faire au robot un demi tour vers la       
*********************************************************/
void faireDemiTour(void)
{
    
}


/*********************************************************
*Nom : lireCapteurLigneGauche                           
* R�le : lit la valeur du capteur de ligne gauche       
* Valeur de retour :  1 si ligne nore d�tect�e, 0 sinon                                                   
*********************************************************/
unsigned char lireCapteurLigneGauche() {
    
    return 0;
}


/*********************************************************
*Nom : lireCapteurLigneGauche                           
* R�le : lit la valeur du capteur de ligne gauche       
* Valeur de retour :  1 si ligne nore d�tect�e, 0 sinon                                                    
*********************************************************/
unsigned char lireCapteurLigneDroit() {
    
    return 0;
}
