/*
 * xmlUtil.c
 *
 *  Created on: Jun 14, 2014
 *      Author: david
 */
#include <Utils/xmlUtil.h>
#include <Utils/Util.h>
#include <stdio.h>

char getStreamUrl(char *xmlData)
{
	char returnValue;

	return returnValue;

}

char *getXMLData(char *filename)
{
	char returnValue[50];
	int len = 0;
	char c;
	FILE *file;
	file = fopen(filename, "r");

	if(file == NULL)
	{
		perror("Error while opening the file");
	}

	if(file)
	{
		while((c = fgetc(file)) != EOF && len < 50)
		{
			returnValue[len] = c;
			len++;
		}
		fclose(file);
	}

	return returnValue;

}
