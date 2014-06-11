#include <Network/socket.h>

#define URL "http://api.sr.se/api/v2/channels?liveaudiotemplateid=2&audioquality=hi"

void error(const char *message)
{
	printf("ERROR: %s\n", message);
}

int main()
{
	int status;
	status = getChannels(URL);

	if(status != 0)
	{
		error("Unable to getchannel");
		return -1;
	}

	return 0; //all ok

}
