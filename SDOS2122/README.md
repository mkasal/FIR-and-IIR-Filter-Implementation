# IIR I FIR FILTRI

## Prijava na GitLab https://hgcal-git.fesb.hr

### Prijaviti se na inicijalni poziv i promijeniti lozinku

### Postaviti ssl ključ

kreirati ssl ključ npr. pomoću sustava putty

javni dio ključa postaviti na GitLab poveznica:
https://hgcal-git.fesb.hr/profile/keys

### pristupiti projektu

https://hgcal-git.fesb.hr/HGCAL_student/SDOS2021

kopirati git@hgcal-git.fesb.hr... poveznicu

### klonirati projekt, npr kroz GitExtensions:

ući u Dashboard

aktivirati kloniraj projekt

unijeti git@hgcal-git.fesb.hr poveznicu

izabrati ciljani direktorij na lokalnom disku

unijeti privatni ključ (uparen s ključem pohranjenim na GitLab-u)

klonirati projekt SDOS2021

kreirati ogrank (branch) "Prezime.Ime" sa "Mastera"

dalje raditi samo u vlastitom ogranku

## TESTNO OKRUŽENJE

Kreirati dva ulazna polja duljine 512 riječi, jedno inicirati s jediničnim impulsom a drugo s jediničnim step-om

Kreirati izlazno polje duljine 512 riječi za snimanje izlaza

## IIR

Temeljem DR1 napisati program za Blackfin koji izvršava jednadžbu diferencija.

Testirati program s oba ulazna polja i snimiti oba izlazna rezultata.

Odziv na jedinični impuls mora biti sukladan odzivu iz DR1

## FIR

Temeljem DR2 napisati program za Blackfin koji izvršava konvoluciju.

Testirati program s oba ulazna polja i snimiti oba izlazna rezultata.

Odziv na jedinični impuls mora biti sukladan odzivu iz DR2

## REZULTATI GIT

Rezultate simiti iz izlaznog polja u tekstualnu datoteku

Program i rezltate prijaviti na lokalni git (commit)

Program i rezultate poslati na centralni git repozitorij (push)

## IZVJEŠTAJ

Napisati izvještaj (elektronički, NE vlastoručno) koji sadrži:

- naslovnicu s imenomi prezimenom,
- zadatak (oba domaća rada i projekta),
- opći pristup rješavanju zadatka (razvojni sustav, jednadžba diferencija, konvolucija),
- podaci preuzeti iz DR1 i DR2,
- programski kod za IIR i FIR,
- odzivi za IIR i FIR za obje pobude,
- usporedba jediničnog odziva s odzivom iz domaćih radova, -
- komentar odziva na step,
- zaključak,
- literatura.

izvještaj predati na Teams-e
