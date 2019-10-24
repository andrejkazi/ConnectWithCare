#ifndef SERVER_MESSAGE_CREATOR_H
#define SERVER_MESSAGE_CREATOR_H

#include "../CommonFiles/MessageCodes.h"
#include "../CommonFiles/Posting.h"
#include "../CommonFiles/Message.h"

class ServerMessageCreator
{
  public:
    ServerMessageCreator();
    Message createLoginAuthMessage(bool whetherTheLoginWasAccepted);
    Message createLogoutConfirmMessage(bool whetherTheLogoutWasSuccessful);
    Message createUserMessageDataMessage(UserMessage userMessageToConvertToMessage);
    Message createUserMessageImageDataMessage(UserMessageImage messageImageToConvertToMessage);
    Message createPostingDataMessage(Posting postingToConvertToMessage);
    Message createPostingImageDataMessage(PostingImage postingImageToConvertToMessage);
    //TWO MESSAGES TO IMPLEMENT LATER...
    //ASKCLIENTTOREQEUSTMESSAGEINFO FUNCTION GOES HERE
    //ASKCLIENTTOREQUESTBOARDINFO FUNCTION GOES HERE
    Message createErrorNoAuthMessage();
    Message createUserNotFoundMessage();
    Message createBoardNotFoundMessage();
    Message createErrorWriteFailedMessage();
    Message createWriteSuccessFulMessage();
    Message createEndOfDataMessage();
  protected:
    //
  private:
    //
}

#endif
