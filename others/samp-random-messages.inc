// Mensagens aleat�rias no chat

// Isso define quantos MS para uma nova mensagem (10 minutos);
#define     TIMER_REPEAT_NEW_MESSAGE    (10 * 60000)

// Caso aumentar, aumente o [4].
static const messages_random[4][] =
{
	"Para mais informa��es use /ajuda",
	"Para mais informa��es use /ajuda2",
	"Para mais informa��es use /ajuda3",
	"Para mais informa��es use /ajuda4"
};

// O timer
task RandomMessageTask[TIMER_REPEAT_NEW_MESSAGE]() 
{
    new rand = random(sizeof(messages_random));

    SendClientMessageToAll(COLOR_SAMP, messages_random[rand]);
}