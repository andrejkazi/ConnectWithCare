#ifndef SERVER_MESSAGE_CONVERTER_H
#define SERVER_MESSAGE_CONVERTER_H

#include "../CommonFiles/MessageCodes.h"
#include "../CommonFiles/Message.h"
#include "../CommonFiles/UserMessages/UserMessage.h"
#include "../CommonFiles/AllMessageTypes.h"
#include "../CommonFiles/Postings/Posting.h"

class ServerMessageConverter
{
  public:
    ServerMessageConverter();

    bool isLoginMessage(Message messageToDetermineTypeOf);
    LoginMessage toLoginMessage(Message messageToTurnIntoALoginMessage); //ONLY CALL ME IF ISALOGINMESSAGE WAS TRUE!

    bool isLogoutMessage(Message messageToDetermineTypeOf);
    LogoutMessage toLogoutMessage(Message messageToTurnIntoALogoutMessage); //ONLY CALL ME IF ISALOGOUTMESSAGE WAS TRUE!

    bool isCreatePostingMessage(Message messageToDetermineTypeOf);
    CreatePostingMessage toCreatePostingMessage(Message messageToTurnIntoACreatePostingMessage); //ONLY CALL ME IF IS A CREATEPOSTINGMESSAGE WAS TRUE!

#if 0
    bool isCreatePostingImageMessage(Message messageToDetermineTypeOf);
    CreatePostingImageMessage toCreatePostingImageMessage(Message messageToTurnIntoACreatePostingImageMessage); //THIS AND ALL BELOW FOLLOW ABOVE RULES.
#endif
    bool isSendUserMessageMessage(Message messageToDetermineTypeOf);
    SendUserMessageMessage toSendUserMessageMessage(Message messageToTurnIntoASendUserMessageMessage);

    bool isSendUserMessageJPEGImageMessage(Message messageToDetermineTypeOf);
    SendUserMessageJPEGImageMessage toSendUserMessageJPEGImageMessage(Message messageToTurnIntoASendUserMessageJPEGImageMessage);

    bool isUserMessageHistoryMessage(Message messageToDetermineTypeOf);
    UserMessageHistoryMessage toUserMessageHistoryMessage(Message messageToTurnIntoAUserMessageHistoryMessage);

    bool isUserMessageHistoryAllMessage(Message messageToDetermineTypeOf);
    UserMessageHistoryAllMessage toUserMessageHistoryAllMessage(Message messageToTurnIntoAUserMessageHistoryAllMessage);

    bool isBoardHistoryMessage(Message messageToDetermineTypeOf);
    BoardHistoryMessage toBoardHistoryMessage(Message messageToTurnIntoABoardHistoryMessage);

    bool isBoardSearchMessage(Message messageToDetermineTypeOf);
    BoardSearchMessage toBoardSearchMessage(Message messageToTurnIntoABoardSearchMessage);

  protected:
    //
  private:
    //
};

#endif
