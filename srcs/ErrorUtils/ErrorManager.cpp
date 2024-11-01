#include "ErrorManager.hpp"
#include "../User.hpp"

Errormanager::Errormanager()
{}

Errormanager::~Errormanager()
{}


/* No Such Error */
void Errormanager::ErrorNosuchNick401(User& user, std::string nickName)
{
	user.AppendUserSendBuf("401 " + user.GetNickName() + " " + nickName + " :" + ERR_NOSUCHNICK);
}

void Errormanager::ErrorNosuchChannel403(User& user, std::string channel)
{
	user.AppendUserSendBuf("403 " + user.GetNickName() + " " + channel + " :" + ERR_NOSUCHCHANNEL);
}


/* Channel Error */
void Errormanager::ErrorUserNotInChannel441(User& user, std::string nickName, std::string channel)
{
	user.AppendUserSendBuf("441 " + user.GetNickName() + " " + nickName + " " + channel + " :" + ERR_USERNOTINCHANNEL);
}

void Errormanager::ErrorNotOnChannel442(User& user, std::string channel)
{
	user.AppendUserSendBuf("442 " + user.GetNickName() + " " + channel + " :" + ERR_NOTONCHANNEL);
}

void Errormanager::ErrorUserOnChannel443(User& user, std::string nickName, std::string channel)
{
	user.AppendUserSendBuf("443 " + user.GetNickName() + " " + nickName + " " + channel + " :" + ERR_USERONCHANNEL);
}


void Errormanager::ErrorAlreadyRegistRed462(User& user)
{
	user.AppendUserSendBuf("462 :");
	user.AppendUserSendBuf(ERR_ALREADYREGISTERED);
}

void Errormanager::ErrorNeedMoreParams461(User& user)
{
	user.AppendUserSendBuf("461 :");
	user.AppendUserSendBuf(ERR_NEEDMOREPARAMS);
}

void Errormanager::ErrorPasswdMisMatch464(User& user)
{
	user.AppendUserSendBuf("464 :");
	user.AppendUserSendBuf(ERR_PASSWDMISMATCH);
}

void Errormanager::ErrorNotRegistered451(User& user)
{
	user.AppendUserSendBuf("540 :");
	user.AppendUserSendBuf(ERR_NOTREGISTERED);
}


/* mode 47* error */
void Errormanager::ErrorChannelIsFull471(User& user, std::string channel)
{
	user.AppendUserSendBuf("471 " + user.GetNickName() + " " + channel + " :" + ERR_CHANNELISFULL);
}

void Errormanager::ErrorUnknownMode472(User& user, char mode)
{
	user.AppendUserSendBuf("472 " + user.GetNickName() + " " + mode + " :" + ERR_UNKNOWNMODE);
}

void Errormanager::ErrorInviteOnlychan473(User& user, std::string channel)
{
	user.AppendUserSendBuf("473 " + user.GetNickName() + " " + channel + " :" + ERR_INVITEONLYCHAN);
}

void Errormanager::ErrorBadChannelKey475(User& user, std::string channel)
{
	user.AppendUserSendBuf("475 " + user.GetNickName() + " " + channel + " :" + ERR_BADCHANNELKEY);
}

/* mode 48* Error */
void Errormanager::ErrorChanOprivsNeeded482(User& user, std::string channel)
{
	user.AppendUserSendBuf("482 " + user.GetNickName() + " " + channel + " :" + ERR_CHANOPRIVSNEEDED);
}
