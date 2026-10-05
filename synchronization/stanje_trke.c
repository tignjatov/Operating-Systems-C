#include <stdio.h>
#include <pthread.h>

int x = 0;

/*
	Imacemo N * M inkrementiranja i N * M dekrementiranja brojaca x.
	Dakle, ocekujemo da brojac bude 0 na kraju rada aplikacije.
*/
#define N (5000)
#define M (100000)

void* incrementer(void *args)
{
		int i, j;
		for(i = 0; i < N; i++)
		{
			for(j = 0; j < M; j++)
			{
				x += 1; //inkrementiranja
			}
		}
}

void* decrementer(void *args)
{
		int i, j;
		for(i = 0; i < N; i++)
		{
			for(j = 0; j < M; j++)
			{
				x -= 1; //dekrementiranja
			}
		}
}

int main(int argc, char *argv[])
{
		pthread_t t1, t2;
		pthread_create(&t1, NULL, incrementer, NULL);
		pthread_create(&t2, NULL, decrementer, NULL);
		
		pthread_join(t1, NULL);
		pthread_join(t2, NULL);

		/*
			Obe niti su se izvrsile tacno jednom. Sacekali smo da se zavrse.
			Posto su obe niti imale isti broj koraka u petlji, brojac bi trebalo da je 0.
		*/		
		printf("x: %d\n", x);
}
