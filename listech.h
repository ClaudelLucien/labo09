// listech.h
// Auteur: Alexandre Lachapelle
// INF3135 - mars 2019
// Fichier d'entete pour un module de liste chainee simple
#ifndef __LISTECH_H__
#define __LISTECH_H__

#include <stdbool.h>

// Strucutre Noeud utilisee par la liste.
struct Noeud
{
   // L'element contenu dans le noeud
   int element;
   // Pointeur vers l'element suivant dans la liste, NULL si le dernier
   struct Noeud* ptrSuiv;

};
typedef struct Noeud Noeud;

// Structure de la liste
typedef struct Liste
{
   // nombre d'elements presentement dans la liste
   int     taille;
   // Le noeud de tete, le debut de la liste
   struct Noeud*  tete;

} Liste;

// creerListe
// Creee dynamiquement une liste et initialise ses valeurs
// Retour:
//  Liste* : la liste cree, NULL en cas d'erreur
Liste* creerListe();

// estVide
// Determine si la liste est vide
// Parametre:
//   Liste* liste : La liste a verifier
// Retour:
//   bool: true si la liste est vide
bool estVide(Liste* liste);

// insererDebut
// Insere un element au debut d'une liste
// Parametres:
//   Liste* liste : la liste dans laquelle inserer l'element
//   int element  : l'element a inserer
// Retour:
//   bool: false en cas d'erreur
bool insererDebut(Liste* liste, int element);

// insererFin
// Insere un element a la fin d'une liste
// Parametres:
//   Liste* liste : la liste dans laquelle inserer l'element
//   int element  : l'element a inserer
// Retour:
//   bool: false en cas d'erreur
bool insererFin(Liste* liste, int element);

// insererIndex
// Insere l'element a l'index fourni dans la liste
// Parametres:
//   Liste* liste : La liste dans laquelle inserer l'element
//   int index    : L'index ou inserer l'element
//   int element  : L'element a inserer
// Retour:
//   bool: false en cas d'erreur (hors borne par exemple)
bool insererIndex(Liste* liste, int index, int element);

// accederIndex
// Parcourir et retourner l'element situe a l'index fourni
// Parametres:
//   Liste* liste : la liste a parcourir
//   int index    : l'index a atteindre
// Retour:
//   int* : pointeur vers l'element situe a l'index
//          NULL si hors borne
int* accederIndex(Liste* liste, int index);

// retirerIndex
// parcourir et retirer l'element situe a l'index fourni
// Parametres:
//   Liste* liste : la liste a parcourir
//   int index    : l'index a retirer
void retirerIndex(Liste* liste, int index);

// viderListe
// Retire et desalloue tous les elements de la liste
// Parametre:
//   Liste* liste : la liste a vider
// Retour:
//   bool: false en cas d'erreur
bool viderListe(Liste* liste);

// detruireListe
// Vide et desalloue la liste elle-meme
// Parametre:
//   Liste* liste : la liste a detruire
// Retour:
//   bool:  false en cas d'erreur
bool detruireListe(Liste* liste);


#endif // __LISTECH_H__
