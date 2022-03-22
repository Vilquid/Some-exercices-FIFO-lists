#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct elt
{
	char memo[256];
	struct elt *suiv;
}elt;

typedef struct Tfile
{
	struct elt *premier;
	struct elt *dernier;
}Tfile;

void FIFO_memo();
void menu();
void initialiser_file(Tfile *liste);
void enfiler(Tfile *file, char memo[256]);
void defiler(Tfile *liste);
void afficher_liste(Tfile *liste);
void afficher_premier(Tfile *liste);
void sauvegarder(Tfile* liste);
Tfile* recuperer_liste_du_fichier(Tfile* liste);

int main()
{
	FIFO_memo();

	int quitter = 0;
	int choix_1 = 0;
	char choix_2[4] = "OUI";
	char memo[256] = "";

	Tfile FILE;
	initialiser_file(&FILE);


	while (quitter == 0)
	{
		menu();

		scanf("%d", &choix_1);

		switch (choix_1)
		{
			case 1:
			{
				printf("Vous avez choisi d'enregistrer un memo.\n");
				printf("Rentrez votre memo : \n");
				scanf("%s", memo);
				enfiler(&FILE, memo);
				printf("Memo enregistre.\n");
				break;
			}
			case 2:
			{
				printf("Vous avez choisi de lire un memo.\n");
				afficher_premier(&FILE);

				printf("Voulez-vous supprimer le memo ? 0UI/non");
				scanf("%s", choix_2);
				if (strcmp(choix_2, "non") == 1)
				{
					printf("Le memo ne sera pas suppr.");
				}

				else
				{
					defiler(&FILE);
				}
				break;
			}
			case 3:
			{
				printf("Vous avez choisi de sauvegarder la file des memos\n");
				sauvegarder(&FILE);
				break;
			}
			case 4:
			{
				printf("Vous avez choisi de charger la file des memos\n");
				recuperer_liste_du_fichier(&FILE);
				break;
			}
			case 5:
			{
				printf("Vous avez choisi d afficher la liste des memos\n");
				afficher_liste(&FILE);
				break;
			}
			default:
				quitter = 1;
				break;
		}
	}

	return 0;
}

Tfile* recuperer_liste_du_fichier(Tfile* liste)
{
	char filename[12] = "fichier.txt";
	elt* temp = (elt *)malloc(sizeof(elt));
	elt* tete;
	elt* queue;
	queue = tete = NULL;

	FILE* file;
	file = fopen (filename, "r");

	if (file == NULL)
	{
		fprintf(stderr, "Le fichier ne peut pas s'ouvrir.\n");
		exit (1);
	}

	while(fread(temp, sizeof(elt), 1, file))
	{
		if(tete==NULL)
		{
			tete = queue = (elt *)malloc(sizeof(elt));
		}

		else
		{
			queue->suiv = (elt *)malloc(sizeof(elt));
			queue = queue->suiv;
		}

		strcpy(queue->memo, temp->memo);
		queue->suiv = NULL;
	}

	fclose(file);

	return (Tfile*) liste->premier;
}

void sauvegarder(Tfile* liste)
{
	elt* temp = liste->premier;

	FILE* file;
	file = fopen("./fichier.txt", "w");

	if (file == NULL)
	{
		fprintf(stderr, "Le fichier ne peut pas s'ouvrir.\n");
		exit(1);
	}

	while(temp!=NULL)
	{
		fprintf(file, "%s", temp->memo);
		temp = temp->suiv;
	}

	printf("Liste enregistree !\n");

	fclose(file);
}

void afficher_premier(Tfile *liste)
{
	if (liste == NULL)
	{
		exit(EXIT_FAILURE);
	}

	elt *actuel = liste->premier;

	printf("%s", actuel->memo);
}

void afficher_liste(Tfile *liste)
{
	if (liste == NULL)
	{
		exit(EXIT_FAILURE);
	}

	elt *actuel = liste->premier;

	while (actuel != NULL)
	{
		printf("%s -> ", actuel->memo);
		actuel = actuel->suiv;
	}
	printf("NULL\n");
}

void defiler(Tfile *liste)
{
	if (liste == NULL)
	{
		exit(EXIT_FAILURE);
	}

	char memo_defile[256] = "";

	if (liste->premier != NULL)
	{
		elt *elementDefile = liste->premier;

		strcpy(memo_defile, elementDefile->memo);
		liste->premier = elementDefile->suiv;
		free(elementDefile);
	}
}

void enfiler(Tfile *file, char memo[256])
{
	elt *nouveau = malloc(sizeof(*nouveau));

	if (file == NULL || nouveau == NULL)
	{
		exit(EXIT_FAILURE);
	}

	strcpy(nouveau->memo, memo);
	nouveau->suiv = NULL;

	if (file->premier != NULL) // La file n'est pas vide
	{
		// On se positionne à la fin de la file
		elt *elementActuel = file->premier;

		while (elementActuel->suiv != NULL)
		{
			elementActuel = elementActuel->suiv;
		}

		elementActuel->suiv = nouveau;
	}
	else // La file est vide, notre élément est le premier
	{
		file->premier = nouveau;
	}
}

void initialiser_file(Tfile *F)
{
	F->premier = NULL;
	F->dernier = NULL;
}

void FIFO_memo()
{
	printf("______ ___________ _____\n");
	printf("|  ___|_   _|  ___|  _  |\n");
	printf("| |_    | | | |_  | | | |  _ __ ___   ___ _ __ ___   ___\n");
	printf("|  _|   | | |  _| | | | | | '_ ` _ \\ / _ \\ '_ ` _ \\ / _ \\\n");
	printf("| |    _| |_| |   \\ \\_/ / | | | | | |  __/ | | | | | (_) |\n");
	printf("\\_|    \\___/\\_|    \\___/  |_| |_| |_|\\___|_| |_| |_|\\___/\n\n");
}

void menu()
{
	printf("############ MENU ############\n");
	printf("  0 - Quitter l application\n");
	printf("  1 - Enregistrer un memo\n");
	printf("  2 - Lire un memo\n");
	printf("  3 - Sauvegarder la file des memos\n");
	printf("  4 - Charger la file des memos\n");
	printf("  5 - Afficher la liste des memos\n");
	printf("Que voulez vous faire ?");
}

