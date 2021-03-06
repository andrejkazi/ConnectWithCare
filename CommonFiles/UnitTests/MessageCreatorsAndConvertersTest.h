#ifndef MESSAGE_CREATORS_AND_CONVERTERS_TEST
#define MESSAGE_CREATORS_AND_CONVERTERS_TEST

int mainMessageUnitTest();
void runUnitTestsForMessages();
void runLoginMessageTest();
void runLogoutMessageTest();
void runCreatePostingMessageTest();
void runSendUserMessageMessageTest();
void runSendUserMessageJPEGImageMessageTest();
void runLoginAuthMessageTest();
void runBoardHistoryMessageTest();
void runBoardSearchMessageTest();
void runUserMessageHistoryMessageTest();
void runUserMessageHistoryAllMessageTest();
void runLogoutConfirmMessageTest();
void runPostingDataMessageTest();
void runUserMessageDataMessageTest();
void runServerSpecialMessagesTest();

void testPassed();
void testFailed();

#endif
