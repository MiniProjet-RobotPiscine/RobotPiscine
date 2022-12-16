/* 
 * File:   commandesMoway.h
 * Author: Eric
 *
 * Rôle : Code des fonctions qui permettent de commander le robot moway
 * Ces fonctions utilisent les fonctions de la librairie moway
 * Created on 24 juillet 2019, 17:34
 * Historique : 
 *  19/11/2019 Marie-Pierre Pinaud Ajout Commentaires des fonctions
 *                                 Ajout des commentaires du fichier
 *  19/12/2019  Correction des commentaires de avancer, reculer, clignoterRouge, 
 *              clignoterVert
 * 16/12/2022  ajout de void en paramètre des fonctions sans paramètre
 * 16/12/2022  ajout du code dans arreterRobot
 */

#include "p18f87j50.h"  		// mOway's microcontroller
#include "MowayLibrary.h"		// Motors and Sensors library

#include "commandesMoway.h"


/********************************************************
*Nom : configurerMoway                                 
* Rôle : configure les moteurs et les capteurs du moway
********************************************************/
void configurerMoway(void) {
    MOT_CONFIG();
    SEN_CONFIG();
}


/********************************************************
*Nom : lireBatterie                                    
*Rôle : récupère le pourcentage de batterie           
*Valeur de retour :   pourcentage de batterie restant  
********************************************************/
unsigned char lireBatterie(void) {
    // A MODIFIER
  return 100;  
}


/********************************************************
*Nom : attendre                                        
* Rôle : fait une pause d'une durée de millisecondes   
*Paramètres d'entrée :                                 
*    millisecondes : durée de la pause en millisecondes*
********************************************************/
void attendre(unsigned char millisecondes) { // Au moins 10ms
    if(millisecondes < 1) {
        millisecondes = 1;
    }
    Delay1KTCYx(millisecondes);
}


/********************************************************
*Nom : avancer                                         
* Rôle : fait avancer le robot tout droit 
********************************************************/
void avancer(void) {
	
}


/********************************************************
*Nom : reculer                                         
*Rôle : fait reculer le robot             
********************************************************/
void reculer(void) {
	
}


/********************************************************
*Nom : arreterRobot                                    
* Rôle : arrêter tous les mouvements du robot          
********************************************************/
void arreterRobot(void) {
	MOT_STOP();
}


/********************************************************
*Nom : calculerDistanceParcourue                       
* Rôle : calcule la distance parcourue  par le robot   
*        correspondant à son dernier déplacement       
*Valeur de retour :     distance parcourue             
********************************************************/
unsigned char calculerDistanceParcourue(void) {
    char distance[2];
    distance[0] = MOT_FDBCK(STATUS_KM)[0];
    distance[1] = MOT_FDBCK(STATUS_KM)[1];
    return (distance[1]*256 + distance[0]);
}


/*********************************************************
*Nom : calculerAccélérationVerticale                   
* Rôle : calcule l'accélération verticale  du robot    
*Valeur de retour :   valeur en g de l'accélération    
*                     verticale                        
********************************************************/
float calculerAccelerationVerticale(void) {
    // axe vertical Z orienté + vers le bas
    // Robot à plat posé au fond si 1g sur l'axe vertical
    
    return 1; // en g
}


/*********************************************************
*Nom : clignoterRouge                                   
* Rôle : fait clignoter la led rouge et fait une pause       
*Paramètre d'entrée : durée de la pause en millisecondes  
********************************************************/
void clignoterRouge(unsigned char demiPeriodeMillisecondes) {
    
}


/*********************************************************
*Nom : clignoterVerte                                   
* Rôle : fait clignoter la led verte et fait une pause        
*Paramètre d'entrée : durée de la pause en millisecondes   
*********************************************************/
void clignoterVert(unsigned char demiPeriodeMillisecondes) {
   
}


/*********************************************************
*Nom : tournerQuartDroite                               
* Rôle : fait faire au robot un quart de tour vers la   
*        droite                                         
*********************************************************/
void tournerQuartDroite(void)
{
   
}


/*********************************************************
*Nom : faireDemiTour                                    
* Rôle : fait faire au robot un demi tour vers la       
*********************************************************/
void faireDemiTour(void)
{
    
}


/*********************************************************
*Nom : lireCapteurLigneGauche                           
* Rôle : lit la valeur du capteur de ligne gauche       
* Valeur de retour :  1 si ligne nore détectée, 0 sinon                                                   
*********************************************************/
unsigned char lireCapteurLigneGauche(void) {
    
    return 0;
}


/*********************************************************
*Nom : lireCapteurLigneGauche                           
* Rôle : lit la valeur du capteur de ligne gauche       
* Valeur de retour :  1 si ligne nore détectée, 0 sinon                                                    
*********************************************************/
unsigned char lireCapteurLigneDroit(void) {
    
    return 0;
}
