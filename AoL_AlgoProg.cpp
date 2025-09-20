#include <stdio.h>
#include <string.h>

struct bases{
	char location[101];
	char city[101];
	int price;
	int room;
	int bathroom;
	int carpark;
	char type[101];
	char furnish[101];
	
} temp[3941];

int count = 0;
int flag = 0;
int row;
int mark = 0;
int set = 0;
int hit = 0;

void readfile(){
	
	FILE *fp = fopen ("file.csv", "r");
	
	char trash [3941];
	fscanf(fp, "%[^\n]\n", trash);
	
	while (!feof(fp)){
		fscanf (fp, "%[^,],%[^,],%d,%d,%d,%d,%[^,],%s\n", temp[count].location, temp[count].city, &temp[count].price, &temp[count].room, 
		&temp[count].bathroom, &temp[count].carpark, temp[count].type, temp[count].furnish);	
		
		count++;	
	}
	fclose (fp);
}

void displayfile (){
	
	printf("Number of rows: "); scanf("%d", &row); getchar();
	printf("Location\t\t  City\t\t  Price\t     Rooms\tBathroom      Carpark\t Type\t\tFurnish\n");
	
	for(int i=0; i<row; i++){
		printf("%-25s %-15s %-10d %-10d %-13d %-10d %-14s %s\n", temp[i].location, temp[i].city, temp[i].price, 
		temp[i].room, temp[i].bathroom, temp[i].carpark, temp[i].type, temp[i].furnish);                                                                                                    
	}
}

void header(){
	printf("Data found. Detail of data:\n");
	printf("Location\t\t  City\t\t  Price\t     Rooms\tBathroom      Carpark\t Type\t\tFurnish\n");
}

void searchfile (){
	char choose[101];
	printf("Choose column: "); scanf("%s", choose); getchar ();
	char data[101];
	int data3;
	
	if (strcmp(choose, "Location") == 0){
		printf("What data do you want to find? "); scanf("%s", data); getchar ();
		
		for (int i=0; i<count; i++){
			if (strcmp(temp[i].location, data) == 0){
				flag ++;	
			}
		}
		if (flag != 0){
			header();
			for (int i=0; i<count; i++){
				if (strcmp(temp[i].location, data) == 0){
					printf("%-25s %-15s %-10d %-10d %-13d %-10d %-14s %s\n", temp[i].location, temp[i].city, temp[i].price, 
					temp[i].room, temp[i].bathroom, temp[i].carpark, temp[i].type, temp[i].furnish);		
					hit++;
					temp[hit] = temp[i];
				} 
			}
			set = hit;
		}
		else if (flag == 0){
			printf("Data not found!\n");
			set = 0;
		}
	}
	
	else if (strcmp(choose, "City") == 0){
		printf("What data do you want to find? "); scanf("%s", data); getchar ();
		
		for (int i=0; i<count; i++){
			if (strcmp(temp[i].city, data) == 0){
				flag ++;	
			}
		}
		if (flag != 0){
			header();
			for (int i=0; i<count; i++){
				if (strcmp(temp[i].city, data) == 0){
					printf("%-25s %-15s %-10d %-10d %-13d %-10d %-14s %s\n", temp[i].location, temp[i].city, temp[i].price, 
					temp[i].room, temp[i].bathroom, temp[i].carpark, temp[i].type, temp[i].furnish);		
					hit++;
					temp[hit] = temp[i];
				} 
			}
			set = hit;
		}
		else if (flag == 0){
			printf("Data not found!\n");
			set = 0;
		}
	}
	
	else if (strcmp(choose, "Price") == 0){
		printf("What data do you want to find? "); scanf("%d", &data3); getchar ();
		
		for (int i=0; i<count; i++){
			if (data3 == temp[i].price){
				flag ++;	
			}
		}
		if (flag != 0){
			header();
			for (int i=0; i<count; i++){
				if(data3 == temp[i].price){
					printf("%-25s %-15s %-10d %-10d %-13d %-10d %-14s %s\n", temp[i].location, temp[i].city, temp[i].price, 
					temp[i].room, temp[i].bathroom, temp[i].carpark, temp[i].type, temp[i].furnish);		
					hit ++;
					temp[hit] = temp[i];
				} 
			}
			set = hit;
		}
		else if (flag == 0){
			printf("Data not found!\n");
			set = 0;
		}
	}
	
	else if (strcmp(choose, "Rooms") == 0){
		printf("What data do you want to find? "); scanf("%d", &data3); getchar ();
		
		for (int i=0; i<count; i++){
			if (data3 == temp[i].room){
				flag ++;	
			}
		}
		if (flag != 0){
			header();
			for (int i=0; i<count; i++){
				if(data3 == temp[i].room){
					printf("%-25s %-15s %-10d %-10d %-13d %-10d %-14s %s\n", temp[i].location, temp[i].city, temp[i].price, 
					temp[i].room, temp[i].bathroom, temp[i].carpark, temp[i].type, temp[i].furnish);		
					hit++;
					temp[hit] = temp[i];
				} 
			}
			set = hit;
		}
		else if (flag == 0){
			printf("Data not found!\n");
			set = 0;
		}
	}
	
	else if (strcmp(choose, "Bathroom") == 0){
		printf("What data do you want to find? "); scanf("%d", &data3); getchar ();
		
		for (int i=0; i<count; i++){
			if (data3 == temp[i].bathroom){
				flag ++;	
			}
		}
		if (flag != 0){
			header();
			for (int i=0; i<count; i++){
				if(data3 == temp[i].bathroom){
					printf("%-25s %-15s %-10d %-10d %-13d %-10d %-14s %s\n", temp[i].location, temp[i].city, temp[i].price, 
					temp[i].room, temp[i].bathroom, temp[i].carpark, temp[i].type, temp[i].furnish);		
					hit++;
					temp[hit] = temp[i];
				} 
			}
			set = hit;
		}
		else if (flag == 0){
			printf("Data not found!\n");
			set = 0;
		}
	}
	
	else if (strcmp(choose, "Carpark") == 0){
		printf("What data do you want to find? "); scanf("%d", &data3); getchar ();
		
		for (int i=0; i<count; i++){
			if (data3 == temp[i].carpark){
				flag ++;	
			}
		}
		if (flag != 0){
			header();
			for (int i=0; i<count; i++){
				if(data3 == temp[i].carpark){
					printf("%-25s %-15s %-10d %-10d %-13d %-10d %-14s %s\n", temp[i].location, temp[i].city, temp[i].price, 
					temp[i].room, temp[i].bathroom, temp[i].carpark, temp[i].type, temp[i].furnish);		
					hit++;
					temp[hit] = temp[i];
				} 
			}
			set = hit;
		}
		else if (flag == 0){
			printf("Data not found!\n");
			set = 0;
		}
	}
	
	else if (strcmp(choose, "Type") == 0){
		printf("What data do you want to find? "); scanf("%s", data); getchar ();
		
		for (int i=0; i<count; i++){
			if (strcmp(temp[i].type, data) == 0){
				flag ++;	
			}
		}
		if (flag != 0){
			header();
			for (int i=0; i<count; i++){
				if (strcmp(temp[i].type, data) == 0){
					printf("%-25s %-15s %-10d %-10d %-13d %-10d %-14s %s\n", temp[i].location, temp[i].city, temp[i].price, 
					temp[i].room, temp[i].bathroom, temp[i].carpark, temp[i].type, temp[i].furnish);		
					hit++;
					temp[hit] = temp[i];
				} 
			}
			set = hit;
		}
		else if (flag == 0){
			printf("Data not found!\n");
			set = 0;
		}
	}
	
	else if (strcmp(choose, "Furnish") == 0){
		printf("What data do you want to find? "); scanf("%s", data); getchar ();
		
		for (int i=0; i<count; i++){
			if (strcmp(temp[i].furnish, data) == 0){
				flag ++;	
			}
		}
		if (flag != 0){
			header();
			for (int i=0; i<count; i++){
				if (strcmp(temp[i].furnish, data) == 0){
					printf("%-25s %-15s %-10d %-10d %-13d %-10d %-14s %s\n", temp[i].location, temp[i].city, temp[i].price, 
					temp[i].room, temp[i].bathroom, temp[i].carpark, temp[i].type, temp[i].furnish);		
					hit++;
					temp[hit] = temp[i];
				} 
			}
			set = hit;
		}
		else if (flag == 0){
			printf("Data not found!\n");
			set = 0;
		}
	}
}

void outsort(int row, struct bases temp[]){
	header();
	for (int i=0; i<row; i++){
		printf("%-25s %-15s %-10d %-10d %-13d %-10d %-14s %s\n", temp[i].location, temp[i].city, temp[i].price, 
		temp[i].room, temp[i].bathroom, temp[i].carpark, temp[i].type, temp[i].furnish);
	}
}

void sortasc(char column[], struct bases temp[], int count){
	if(strcmp(column, "Location") == 0){
		for (int j = count-1; j > 0; j--){
			for(int k = 0; k < j; k++){
				if(strcmp(temp[k].location, temp[k+1].location) > 0){
					bases swap1 = temp[k];
					temp[k] = temp [k+1];
					temp[k+1] = swap1;
				}
			}
		}
		outsort(10, temp);
	}
	else if(strcmp(column, "City") == 0){
		for (int j = count-1; j > 0; j--){
			for(int k = 0; k < j; k++){
				if(strcmp(temp[k].city, temp[k+1].city) > 0){
					bases swap1 = temp[k];
					temp[k] = temp [k+1];
					temp[k+1] = swap1;
				}
			}
		}
		outsort(10, temp);
	}
	else if(strcmp(column, "Price") == 0){
		for (int j = count-1; j > 0; j--){
			for(int k = 0; k < j; k++){
				if(temp[k].price > temp[k+1].price){
					bases swap1 = temp[k];
					temp[k] = temp [k+1];
					temp[k+1] = swap1;
				}
			}
		}
		outsort(10, temp);
	}
	else if(strcmp(column, "Rooms") == 0){
		for (int j = count-1; j > 0; j--){
			for(int k = 0; k < j; k++){
				if(temp[k].room > temp[k+1].room){
					bases swap1 = temp[k];
					temp[k] = temp [k+1];
					temp[k+1] = swap1;
				}
			}
		}
		outsort(10, temp);
	}
	else if(strcmp(column, "Bathroom") == 0){
		for (int j = count-1; j > 0; j--){
			for(int k = 0; k < j; k++){
				if(temp[k].bathroom > temp[k+1].bathroom){
					bases swap1 = temp[k];
					temp[k] = temp [k+1];
					temp[k+1] = swap1;
				}
			}
		}
		outsort(10, temp);
	}
	else if(strcmp(column, "Carpark") == 0){
		for (int j = count-1; j > 0; j--){
			for(int k = 0; k < j; k++){
				if(temp[k].carpark > temp[k+1].carpark){
					bases swap1 = temp[k];
					temp[k] = temp [k+1];
					temp[k+1] = swap1;
				}
			}
		}
		outsort(10, temp);
	}
	else if(strcmp(column, "Type") == 0){
		for (int j = count-1; j > 0; j--){
			for(int k = 0; k < j; k++){
				if(strcmp(temp[k].type, temp[k+1].type) > 0){
					bases swap1 = temp[k];
					temp[k] = temp [k+1];
					temp[k+1] = swap1;
				}
			}
		}
		outsort(10, temp);
	}
	else if(strcmp(column, "Furnish") == 0){
		for (int j = count-1; j > 0; j--){
			for(int k = 0; k < j; k++){
				if(strcmp(temp[k].furnish, temp[k+1].furnish) > 0){
					bases swap1 = temp[k];
					temp[k] = temp [k+1];
					temp[k+1] = swap1;
				}
			}
		}
		outsort(10, temp);
	}
}

void sortdsc(char column[], struct bases temp[], int count){
	if(strcmp(column, "Location") == 0){
		for (int j = count-1; j > 0; j--){
			for(int k = 0; k < j; k++){
				if(strcmp(temp[k].location, temp[k+1].location) < 0){
					bases swap1 = temp[k];
					temp[k] = temp [k+1];
					temp[k+1] = swap1;
				}
			}
		}
		outsort(10, temp);
	}
	else if(strcmp(column, "City") == 0){
		for (int j = count-1; j > 0; j--){
			for(int k = 0; k < j; k++){
				if(strcmp(temp[k].city, temp[k+1].city) < 0){
					bases swap1 = temp[k];
					temp[k] = temp [k+1];
					temp[k+1] = swap1;
				}
			}
		}
		outsort(10, temp);
	}
	else if(strcmp(column, "Price") == 0){
		for (int j = count-1; j > 0; j--){
			for(int k = 0; k < j; k++){
				if(temp[k].price < temp[k+1].price){
					bases swap1 = temp[k];
					temp[k] = temp [k+1];
					temp[k+1] = swap1;
				}
			}
		}
		outsort(10, temp);
	}
	else if(strcmp(column, "Rooms") == 0){
		for (int j = count-1; j > 0; j--){
			for(int k = 0; k < j; k++){
				if(temp[k].room < temp[k+1].room){
					bases swap1 = temp[k];
					temp[k] = temp [k+1];
					temp[k+1] = swap1;
				}
			}
		}
		outsort(10, temp);
	}
	else if(strcmp(column, "Bathroom") == 0){
		for (int j = count-1; j > 0; j--){
			for(int k = 0; k < j; k++){
				if(temp[k].bathroom < temp[k+1].bathroom){
					bases swap1 = temp[k];
					temp[k] = temp [k+1];
					temp[k+1] = swap1;
				}
			}
		}
		outsort(10, temp);
	}
	else if(strcmp(column, "Carpark") == 0){
		for (int j = count-1; j > 0; j--){
			for(int k = 0; k < j; k++){
				if(temp[k].carpark < temp[k+1].carpark){
					bases swap1 = temp[k];
					temp[k] = temp [k+1];
					temp[k+1] = swap1;
				}
			}
		}
		outsort(10, temp);
	}
	else if(strcmp(column, "Type") == 0){
		for (int j = count-1; j > 0; j--){
			for(int k = 0; k < j; k++){
				if(strcmp(temp[k].type, temp[k+1].type) < 0){
					bases swap1 = temp[k];
					temp[k] = temp [k+1];
					temp[k+1] = swap1;
				}
			}
		}
		outsort(10, temp);
	}
	else if(strcmp(column, "Furnish") == 0){
		for (int j = count-1; j > 0; j--){
			for(int k = 0; k < j; k++){
				if(strcmp(temp[k].furnish, temp[k+1].furnish) < 0){
					bases swap1 = temp[k];
					temp[k] = temp [k+1];
					temp[k+1] = swap1;
				}
			}
		}
		outsort(10, temp);
	}
}

void sortfile(){
	char column[256];
	printf("Choose column: "); scanf("%s", column); getchar ();
	char sort[256];
	printf("Sort ascending or descending? "); scanf("%s", sort); getchar ();
	
	if(strcmp(sort, "asc") == 0 || strcmp(sort, "ascending") == 0){
		sortasc(column, temp, count);
	} 
	else if(strcmp(sort, "dsc") == 0 || strcmp(sort, "descending") == 0){
		sortdsc(column, temp, count);
	}
}

void exportfile(){
	char filename[256];
	printf("File name: "); scanf("%s", filename); getchar();
	strcat(filename, ".csv");
	
	FILE *nf = fopen(filename, "w");
	
	fprintf(nf, "Location 1,Location 2,Price,Rooms,Bathrooms,CarParks,Type,Furnish\n");
	
	if (mark == 1)
		set = row;
	else if (mark == 3)
		set = 10;
	else if (mark == 2)
		set = hit;
	else if (mark == 4)
		set = count;
	
	if (mark == 1 || mark == 3 || mark == 4){
		for(int i = 0; i < set; i++)
		{
			fprintf(nf, "%s,%s,%d,%d,%d,%d,%s,%s\n", temp[i].location, temp[i].city, temp[i].price,
        	temp[i].room, temp[i].bathroom, temp[i].carpark, temp[i].type, temp[i].furnish);
		}
	}
	else if (mark == 2){
		for(int i = 1; i <= set; i++)
		{
			fprintf(nf, "%s,%s,%d,%d,%d,%d,%s,%s\n", temp[i].location, temp[i].city, temp[i].price,
        	temp[i].room, temp[i].bathroom, temp[i].carpark, temp[i].type, temp[i].furnish);
		}
	}
	
	fclose(nf);
	
	printf("Data successfully written to file %s!\n", filename);
}

int main (){
	
	int menu;
	readfile();

do {        
		printf("What do you want to do ?\n");
		printf("1. Display Data\n");
		printf("2. Search Data\n");
		printf("3. Sort Data\n");
		printf("4. Export Data\n");
		printf("5. Exit\n");
		printf("Your choice: "); scanf("%d", &menu); getchar();
		
		switch (menu){
			case 1 :{
				mark = 1;
				displayfile();
				break ;
			}
			case 2 :{
				mark = 2;
				searchfile();
				break;
			}
			case 3 :{
				mark = 3;
				sortfile();
				break;
			}
			case 4 :{
				mark = 4;
				exportfile();
				break;
			} 
		}
	} while (menu != 5);
	
	return 0;
}