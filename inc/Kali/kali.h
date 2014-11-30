#ifndef ___EXTERNE_H__
#define ___EXTERNE_H__

#ifndef EXTERNE
	#ifdef WIN32
		#define EXTERNE extern "C" _declspec(dllimport)
	#else
		#define EXTERNE extern "C"
	#endif
#endif

#ifndef WIN32
	#define _stdcall
#endif

///////////////////////////////////////////////
// Fonctions pour faire parler Kali
///////////////////////////////////////////////

//Message alpha (fonctionnement typique, synth�se compl�te � partir du texte)
/*texte est un pointeur sur le message � lire. Ce message peut �tre constitu� de
plusieurs paragraphes, mais ne doit pas d�passer 5000 caract�res.*/
EXTERNE short MessageKali(unsigned char* texte);
EXTERNE short _stdcall MessageKaliStd(unsigned char* texte);
EXTERNE short _stdcall MessageMultiKaliStd(short nK, unsigned char* texte);

//Message alpha sans analyse syntaxique ni prosodie
//Comme le pr�c�dent, mais la voix ne pr�sente aucun relief
EXTERNE short MessSansAnalyseKali(unsigned char* texte);
EXTERNE short _stdcall MessSansAnalyseKaliStd(unsigned char* texte);
EXTERNE short _stdcall MessSansAnalyseMultiKaliStd(short nK, unsigned char* texte);

//Message phon�tique (parole ou chant)
//Comme le pr�c�dent, mais le texte est phon�tique (codage fourni sur demande)
EXTERNE short MessPhonKali(unsigned char* texte);
EXTERNE short _stdcall MessPhonKaliStd(unsigned char* texte);
EXTERNE short _stdcall MessPhonMultiKaliStd(short nK, unsigned char* texte);

//Joue un fichier de type wave
EXTERNE void PlayWavKali(unsigned char* nomFichier);
EXTERNE void _stdcall PlayWavKaliStd(unsigned char* nomFichier);
EXTERNE void _stdcall PlayWavMultiKaliStd(short nK, unsigned char* nomFichier);

//Emet un bip
EXTERNE void BipKali(int frequence, int volume, int duree, int delai, int repetition);
EXTERNE void _stdcall BipKaliStd(int frequence, int volume, int duree, int delai, int repetition);
EXTERNE void _stdcall BipMultiKaliStd(short nK, int frequence, int volume, int duree, int delai, int repetition);

//Demande la valeur de l'index de lecture
//L'utilisation de l'index de lecture est d�crite dans l'annexe d�veloppeur
EXTERNE short QueryIndexKali();
EXTERNE short _stdcall QueryIndexKaliStd();
EXTERNE short _stdcall QueryIndexMultiKaliStd(short nK);

//Retourne la position de lecture du message
EXTERNE short GetPosLecKali();
EXTERNE short _stdcall GetPosLecKaliStd();
EXTERNE short _stdcall GetPosLecMultiKaliStd(short nK);

//Stop parole : arr�te la lecture (effet imm�diat)
EXTERNE short StopKali();
EXTERNE short _stdcall StopKaliStd();
EXTERNE short _stdcall StopMultiKaliStd(short nK);

////////////////////////////////////////////////////
// Fonctions de param�trage de Kali
////////////////////////////////////////////////////

//Active (1) ou d�sactive (0) la d�tection automatique de langue
EXTERNE void SetDiagLangueKali(short diagLangue);
EXTERNE void _stdcall SetDiagLangueKaliStd(short diagLangue);
EXTERNE void _stdcall SetDiagLangueMultiKaliStd(short nK, short diagLangue);

//Demande l'�tat du diagnostique de langue
EXTERNE short GetDiagLangueKali();
EXTERNE short _stdcall GetDiagLangueKaliStd();
EXTERNE short _stdcall GetDiagLangueMultiKaliStd(short nK);

//Active la langue choisie (1 � n)
EXTERNE void SetLangueKali(char nLangue);
EXTERNE void _stdcall SetLangueKaliStd(char nLangue);
EXTERNE void _stdcall SetLangueMultiKaliStd(short nK, char nLangue);

//Demande la langue en cours
EXTERNE char GetLangueKali();
EXTERNE char _stdcall GetLangueKaliStd();
EXTERNE char _stdcall GetLangueMultiKaliStd(short nK);

//Demande le nombre de langues
EXTERNE char GetNbLanguesKali();
EXTERNE char _stdcall GetNbLanguesKaliStd();

//Demande le nom de la langue nLangue
EXTERNE char* GetNomLangueKali(char nLangue, char* nomLangue);
EXTERNE char* _stdcall GetNomLangueKaliStd(char nLangue, char* nomLangue);

//Demande le n� de langue de la voix n
EXTERNE char _stdcall GetNLangueVoixKaliStd(char nVoix);

//Active la voix choisie (1 � n)
EXTERNE void SetVoixKali(char nVoix);
EXTERNE void _stdcall SetVoixKaliStd(char nVoix);
EXTERNE void _stdcall SetVoixMultiKaliStd(short nK, char nVoix);

//Demande le num�ro de voix
EXTERNE char GetVoixKali();
EXTERNE char _stdcall GetVoixKaliStd();
EXTERNE char _stdcall GetVoixMultiKaliStd(short nK);

//Demande le nombre de voix
EXTERNE char GetNbVoixKali();
EXTERNE char _stdcall GetNbVoixKaliStd();

//Demande le nom de la voix nVoix
EXTERNE char* GetNomVoixKali(char nVoix, char* nomVoix);
EXTERNE char* _stdcall GetNomVoixKaliStd(char nVoix, char* nomVoix);

//R�gle le volume global
//Volume 0 � 15, par pas de 1.26 en amplitude (volume conseill� : 12)
EXTERNE void SetVolumeKali(short volume);
EXTERNE void _stdcall SetVolumeKaliStd(short volume);
EXTERNE void _stdcall SetVolumeMultiKaliStd(short nK, short volume);

//Demande le volume global
EXTERNE short GetVolumeKali();
EXTERNE short _stdcall GetVolumeKaliStd();
EXTERNE short _stdcall GetVolumeMultiKaliStd(short nK);

//R�gle le d�bit global
//D�bit -2 � 15 par pas de 1.12 (normal : 3 � 6)
EXTERNE void SetDebitKali(short debit);
EXTERNE void _stdcall SetDebitKaliStd(short debit);
EXTERNE void _stdcall SetDebitMultiKaliStd(short nK, short debit);

//Demande le d�bit global
EXTERNE short GetDebitKali();
EXTERNE short _stdcall GetDebitKaliStd();
EXTERNE short _stdcall GetDebitMultiKaliStd(short nK);

//R�gle la hauteur globale
//Hauteur 0 � 15 par pas de 1.06 (demi-tons) (normale 4 � 6)
EXTERNE void SetHauteurKali(short hauteur);
EXTERNE void _stdcall SetHauteurKaliStd(short hauteur);
EXTERNE void _stdcall SetHauteurMultiKaliStd(short nK, short hauteur);

//Demande la hauteur globale
EXTERNE short GetHauteurKali();
EXTERNE short _stdcall GetHauteurKaliStd();
EXTERNE short _stdcall GetHauteurMultiKaliStd(short nK);

//R�gle le mode de lecture
/*	0	litt�raire : mode normal, la ponctuation est interpr�t�e
	1	interm�diaire : la ponctuation est prononc�e (ex : "virgule")
	2	informatique : idem, mais tous les signes sont prononc�s (ex : "apostrophe") */
EXTERNE void SetModeLectureKali(short modeLecture);
EXTERNE void _stdcall SetModeLectureKaliStd(short modeLecture);
EXTERNE void _stdcall SetModeLectureMultiKaliStd(short nK, short modeLecture);

//Demande le mode de lecture
EXTERNE short GetModeLectureKali();
EXTERNE short _stdcall GetModeLectureKaliStd();
EXTERNE short _stdcall GetModeLectureMultiKaliStd(short nK);

//R�gle le mode compta (cas o� les nombres sont group�s par 3 chiffres)
/*	0	le s�parateur de milliers reste : les groupes de 3 chiffres restent s�par�s
	1	le s�parateur de milliers est enlev� : les groupes de 3 chiffres sont recoll�s */
EXTERNE void SetComptaKali(short compta);
EXTERNE void _stdcall SetComptaKaliStd(short compta);
EXTERNE void _stdcall SetComptaMultiKaliStd(short nK, short compta);

//Demande si mode compta
EXTERNE short GetComptaKali();
EXTERNE short _stdcall GetComptaKaliStd();
EXTERNE short _stdcall GetComptaMultiKaliStd(short nK);

//R�gle le mode �pelle
/*	0	�pellation normale (ex : "a", "b", "c")
	1	�pellation internationale (ex : "alpha", "bravo", "charlie") */
EXTERNE void SetEpelleKali(short epelle);
EXTERNE void _stdcall SetEpelleKaliStd(short epelle);
EXTERNE void _stdcall SetEpelleMultiKaliStd(short nK, short epelle);

//Demande si mode �pelle
EXTERNE short GetEpelleKali();
EXTERNE short _stdcall GetEpelleKaliStd();
EXTERNE short _stdcall GetEpelleMultiKaliStd(short nK);

//R�gle le mode articulation
/*	0	articulation normale
	1	hyper-articulation (e muets, in/un, di�r�se, liaisons+) */
EXTERNE void SetArticuleKali(short articule);
EXTERNE void _stdcall SetArticuleKaliStd(short articule);
EXTERNE void _stdcall SetArticuleMultiKaliStd(short nK, short articule);

//Demande si mode hyper-articul�
EXTERNE short GetArticuleKali();
EXTERNE short _stdcall GetArticuleKaliStd();
EXTERNE short _stdcall GetArticuleMultiKaliStd(short nK);

//R�gle l'option syntaxe
/*	0	pas de calcul de syntaxe, aucune prosodie
	1	mode normal, analyse syntaxique et prosodie */
EXTERNE void SetSyntaxeKali(short syntaxe);
EXTERNE void _stdcall SetSyntaxeKaliStd(short syntaxe);
EXTERNE void _stdcall SetSyntaxeMultiKaliStd(short nK, short syntaxe);

//Demande si mode syntaxe
EXTERNE short GetSyntaxeKali();
EXTERNE short _stdcall GetSyntaxeKaliStd();
EXTERNE short _stdcall GetSyntaxeMultiKaliStd(short nK);

//R�gle la quantit� de prosodie (0 � 15)
/*	0	pas de prosodie
	8	prosodie normale (la voix a du relief)
	15	prosodie max (relief exag�r�) */
EXTERNE void SetProsodieKali(short coefProso);
EXTERNE void _stdcall SetProsodieKaliStd(short coefProso);
EXTERNE void _stdcall SetProsodieMultiKaliStd(short nK, short coefProso);

//Demande la quantit� de prosodie
EXTERNE short GetProsodieKali();
EXTERNE short _stdcall GetProsodieKaliStd();
EXTERNE short _stdcall GetProsodieMultiKaliStd(short nK);

//R�gle la dur�e des pauses (0 � 15)
/*	0	pauses minimales	(� utiliser plut�t en lecture rapide)
	8	pauses normales
	15	pauses longues (� utiliser plut�t en lecture lente)
A noter : le d�bit agit lui aussi sur la dur�e des pauses */
EXTERNE void SetCoefPauseKali(short coefPause);
EXTERNE void _stdcall SetCoefPauseKaliStd(short coefPause);
EXTERNE void _stdcall SetCoefPauseMultiKaliStd(short nK, short coefPause);

//Demande la dur�e des pauses
EXTERNE short GetCoefPauseKali();
EXTERNE short _stdcall GetCoefPauseKaliStd();
EXTERNE short _stdcall GetCoefPauseMultiKaliStd(short nK);

//R�gle la quantit� de prosodie naturelle/normalis�e (0/16 � 16/0)
EXTERNE void SetProsoNatKali(short coefProsoNat);
EXTERNE void _stdcall SetProsoNatKaliStd(short coefProsoNat);
EXTERNE void _stdcall SetProsoNatMultiKaliStd(short nK, short coefProsoNat);

//Demande la quantit� de prosodie naturelle/normalis�e (0/16 � 16/0)
EXTERNE short GetProsoNatKali();
EXTERNE short _stdcall GetProsoNatKaliStd();
EXTERNE short _stdcall GetProsoNatMultiKaliStd(short nK);

//Positionne la source sonore de gauche � droite (st�r�o)
/*Permet de situer dans l'espace la position de lecture
	0	haut-parleur gauche seul
	50	milieu
	100	haut-parleur droit seul */
EXTERNE void SetLocalisationKali(short localisation);
EXTERNE void _stdcall SetLocalisationKaliStd(short localisation);
EXTERNE void _stdcall SetLocalisationMultiKaliStd(short nK, short localisation);

//Demande la position de la source sonore de gauche � droite
EXTERNE short GetLocalisationKali();
EXTERNE short _stdcall GetLocalisationKaliStd();
EXTERNE short _stdcall GetLocalisationMultiKaliStd(short nK);

//Demande la fr�quence moyenne de la voix courante
EXTERNE float GetFreqMoyKali();
EXTERNE float _stdcall GetFreqMoyKaliStd();
EXTERNE float _stdcall GetFreqMoyMultiKaliStd(short nK);

///////////////////
// Quitter Kali
///////////////////

//Sauve les param�tres actuels de Kali
EXTERNE void SauveInitKali();
EXTERNE void _stdcall SauveInitKaliStd();

//Indispensable quand on arr�te un programme utilisant Kali
//ATTENTION : L'oubli de cette fonction peut cr�er une erreur obligeant � relancer le syst�me informatique
EXTERNE void ExitKali();
EXTERNE void _stdcall ExitKaliStd();


///////////////////////////////////////////////////////
// Caract�ristiques constantes de Kali
///////////////////////////////////////////////////////

//Volume
EXTERNE short _stdcall GetVolumeMinKaliStd();
EXTERNE short _stdcall GetVolumeMaxKaliStd();
EXTERNE short _stdcall GetVolumeIncKaliStd();	//incr�ment
EXTERNE short _stdcall GetVolumeDefautKaliStd();	//incr�ment

//D�bit
EXTERNE short _stdcall GetDebitMinKaliStd();
EXTERNE short _stdcall GetDebitMaxKaliStd();
EXTERNE short _stdcall GetDebitIncKaliStd();	//incr�ment
EXTERNE short _stdcall GetDebitDefautKaliStd();	//incr�ment

//Hauteur
EXTERNE short _stdcall GetHauteurMinKaliStd();
EXTERNE short _stdcall GetHauteurMaxKaliStd();
EXTERNE short _stdcall GetHauteurIncKaliStd();	//incr�ment
EXTERNE short _stdcall GetHauteurDefautKaliStd();	//incr�ment

////////////////////////////////////////////////////////////
//Fonctions avanc�es (non document�es)
////////////////////////////////////////////////////////////

//Fonctions r�glage fin de la prosodie
EXTERNE void _stdcall SetCoefVolumeKaliStd(int nouvCoef);
EXTERNE int _stdcall GetCoefVolumeKaliStd();
EXTERNE void _stdcall SetCoefDebitKaliStd(int nouvCoef);
EXTERNE int _stdcall GetCoefDebitKaliStd();
EXTERNE void _stdcall SetCoefHauteurKaliStd(int nouvCoef);
EXTERNE int _stdcall GetCoefHauteurKaliStd();
EXTERNE void _stdcall SetCoefDeclinaisonKaliStd(int nouvCoef);
EXTERNE int _stdcall GetCoefDeclinaisonKaliStd();
EXTERNE void _stdcall SetCoefAccentKaliStd(int nouvCoef);
EXTERNE int _stdcall GetCoefAccentKaliStd();
EXTERNE void _stdcall SetCoefAllongementKaliStd(int nouvCoef);
EXTERNE int _stdcall GetCoefAllongementKaliStd();
EXTERNE void _stdcall SetCoefHasardProsoNatKaliStd(int nouvCoef);
EXTERNE int _stdcall GetCoefHasardProsoNatKaliStd();
EXTERNE void _stdcall SetCoefHasardProsoNormKaliStd(int nouvCoef);
EXTERNE int _stdcall GetCoefHasardProsoNormKaliStd();

//Pour la plate-forme de d�veloppement
EXTERNE unsigned char* _stdcall GetTexteAlphaTemoinKaliStd();
EXTERNE unsigned char* _stdcall GetTextePhonTemoinKaliStd();
EXTERNE char* _stdcall GetTexteContoursKaliStd();
EXTERNE void _stdcall SetSortieSonMultiKaliStd(short nK, bool sortieSon);
EXTERNE void _stdcall SetSortieWaveMultiKaliStd(short nK, bool sortieWave);
EXTERNE void _stdcall SetNomFichierWaveMultiKaliStd(short nK, char *nomFichierWave);
EXTERNE void _stdcall SetSortieAnaKaliStd(bool sortieAna);
EXTERNE void _stdcall SetNomFichierAnaKaliStd(char *nomFicAna);
EXTERNE void _stdcall SetAnaTransKaliStd(bool anaTrans);
EXTERNE bool _stdcall GetAnaTransKaliStd();

#ifndef WIN32
EXTERNE bool initGlobal();
EXTERNE bool initTrans();
EXTERNE bool initParle();
EXTERNE bool  initAnalyse();
EXTERNE bool  initKali();
EXTERNE bool quitteGlobal();
EXTERNE bool quitteTrans();
EXTERNE bool quitteParle();
EXTERNE bool quitteAnalyse();
#endif

#endif
