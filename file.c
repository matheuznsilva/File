#include "file.h"

FILE* open_file(char text[SIZE]){
	FILE* arc;
	arc = fopen(text, "r");
	if(arc == NULL){
	    printf("ERROR 404! - FILE NOT FOUND\n");
	}
	return arc;
}

void close_file(FILE *arc){
	fclose(arc);
}