#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct TreeNode {
	struct TreeNode *left;
	int data;
	char nama[20][20];
	int absen[20];
	int rank[20];
	struct TreeNode *right;
};

struct TreeNode* search (struct TreeNode *sr, int rank[20]){
	if(sr == NULL || sr->rank == rank){
		return sr;
	}
	else if (rank > sr->rank){
		return search(sr->right, rank);
	}
	return search(sr->left, rank);
	
}

void insert ( struct TreeNode **sr, int num )
{
    if ( *sr == NULL )
    {
        *sr = (struct TreeNode*)malloc ( sizeof ( struct TreeNode ) ) ;
        ( *sr ) -> left = NULL ;
        ( *sr ) -> data = num ;
        ( *sr ) -> right = NULL ;
    }
    else
    {
        if ( num < ( *sr ) -> data )
            insert ( &( ( *sr ) -> left ), num ) ;
        else
            insert ( &( ( *sr ) -> right ), num ) ;
    }
}

void inorder ( struct TreeNode *sr )
{
    if ( sr != NULL )
    {
        inorder ( sr -> left ) ;
        inorder ( sr -> right ) ;
    }
}

void sorting_absen(char nama[][20],int absen[],int nilai[],int rank[],int n){
	/*int i,nilainya,absennya,temp,urutan;
	char tmp[20];
	for (i=0;i<n;i++){
		nilainya = absen[i];
		absennya = nilai[i];
		temp = rank[i];
		strcpy(tmp, nama[i]);
		urutan = i;
		while (urutan > 0 && absen[urutan-1] > nilainya){
			absen[urutan] = absen[urutan-1];
			nilai[urutan] = nilai[urutan-1];
			rank[urutan] = rank[urutan-1];
			strcpy(nama[urutan], nama[urutan-1]);
			urutan--;
		}
		absen[urutan] = nilainya;
		nilai[urutan] = absennya;
		rank[urutan] = temp;
		strcpy(nama[urutan], tmp);
	}
	printf("+-------+--------------------------------+-------------+\n");
	printf("| %-5s | %-30s | %-10s | %-10s |\n","Absen", "Nama", "Nilai", "Peringkat");
	for (i =0; i<n;i++){
		printf("| %-5d | %-30s | %-10d | %-10d |\n", absen[i], nama[i], nilai[i], rank[i]);
	}*/
	struct TreeNode *tn;
	int i;
	tn = NULL;
	for (i=0;i<n;i++){
		insert(&tn, absen[i]);
	}
	inorder(tn);
	printf("+-------+--------------------------------+-------------+\n");
	printf("| %-5s | %-30s | %-10s | %-10s |\n","Absen", "Nama", "Nilai", "Peringkat");
	for (i =0; i<n;i++){
		printf("| %-5d | %-30s | %-10d | %-10d |\n", absen[i], nama[i], nilai[i], rank[i]);
	}
}
void sorting_ranking(char nama[][20],int absen[],int nilai[],int rank[],int n){
	/*int i,nilainya,absennya,temp,urutan;
	char tmp[20];
	for (i=0;i<n;i++){
		nilainya = nilai[i];
		absennya = absen[i];
		temp = rank[i];
		strcpy(tmp, nama[i]);
		urutan = i;
		while (urutan > 0 && nilai[urutan-1] < nilainya){
			nilai[urutan] = nilai[urutan-1];
			absen[urutan] = absen[urutan-1];
			rank[urutan] = rank[urutan-1];
			strcpy(nama[urutan], nama[urutan-1]);
			urutan--;
		}
		nilai[urutan] = nilainya;
		absen[urutan] = absennya;
		rank[urutan] = temp;
		strcpy(nama[urutan], tmp);
	}
	printf("+-------------+--------------------------------+-------------+\n");
	printf("| %-10s | %-30s | %-10s | %-5s |\n","Peringkat", "Nama", "Absen", "Nilai");
	for (i =0; i<n;i++){
		printf("| %-10d | %-30s | %-10d | %-5d |\n", rank[i], nama[i],absen[i], nilai[i]);
	}*/
	struct TreeNode *tn;
	int i;
	tn = NULL;
	for (i=0;i<n;i++){
		insert(&tn, rank[i]);
	}
	inorder(tn);
	printf("+-------+--------------------------------+-------------+\n");
	printf("| %-5s | %-30s | %-10s | %-10s |\n","Absen", "Nama", "Nilai", "Peringkat");
	for (i =0; i<n;i++){
		printf("| %-5d | %-30s | %-10d | %-10d |\n", absen[i], nama[i], nilai[i], rank[i]);
	}
}
void search_nama( char nama[][20], int absen[], int nilai[], int rank[] ){
	int j, found = 0;
	char ans[20];
	printf("Nama yang dicari: ");
	scanf(" %[^\n]s", ans);
	for( j = 0 ; j < 20 ; j++ ){
		if ( strcmpi( ans, nama[j] ) == 0 ){
			found = 1;
			printf("Nama: %s\n", nama[j]);
			printf("No. Absen: %d\n", absen[j]);
			printf("Nilai: %d\n", nilai[j]);
			printf("Peringkat: %d\n", rank[j]);
		}
	}
	if (found==0){
		printf("Nama belum mengikuti ujian.\n");
	}
}

void search_peringkat(char nama[][20], int absen[], int nilai[], int rank[]){
	int num, i;
	struct node *tn;
	printf("Peringkat yang dicari: ");
	scanf("%d", &num);
	for (i=0;i<20;i++){
	 if ( num == rank[i]){
			num = i;
			break;
		}
	}
	printf("Nama: %s\n", nama[i]);
	printf("No. Absen: %d\n", absen[i]);
	printf("Nilai: %d\n", nilai[i]);
	printf("Peringkat: %d\n", rank[i]);
}
