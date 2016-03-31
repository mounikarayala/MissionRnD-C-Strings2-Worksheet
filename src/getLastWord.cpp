/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

int length(char *str){
	int i = 0;
	while (str[i] != '\0')
		i++;
	return i;
}

char * get_last_word(char * str){
	char *sub;
	int l, i,j=0,k,c=0,x=0;
	l = length(str);
	i = l - 1;
	if (str == " ")
		return str;
	if (str == "   "){
		sub = (char *)malloc(sizeof(char));
		sub = " ";
		return sub;
	}
	while (str[i] != ' ' && i != 0){
		i--;
	}
	if (i == 0){
		return str;
	}
	else{
		while (l > 0){
			if (str[l] != ' '&& str[l] != '\0')
				break;
			l--;
		}
		i = 0;
		while (i != (l + 1)){
			if (str[i] == ' ')
				j = i;
			i++;
		}
		j++;
		k = j;
		while (k <= l){
			c++;
			k++;
		}
		sub = (char *)malloc(sizeof(char));
		while (j <= l){
			sub[x] = str[j];
			x++;
			j++;
		}
		sub[x] = '\0';
		return sub;
	}
}