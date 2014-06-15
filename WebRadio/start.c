#include <Network/socket.h>
#include <Utils/xmlUtil.h>
#include <stdio.h>
#include <Utils/Util.h>

#define URL "http://api.sr.se/api/v2/channels?liveaudiotemplateid=2&audioquality=hi"


int main()
{
	int status;
	char *xmlData;
	status = getChannels(URL);

	if(status != 0)
	{
		error("Unable to getchannel");
		return -1;
	}
	else
		printf("Channel successfully fetched.\n");

	xmlData = getXMLData("channels.xml");
	int i = 0;
	for(i = 0;sizeof(xmlData);i++)
	{
		printf("%c", xmlData[i]);
	}

	return 0; //all ok

}
