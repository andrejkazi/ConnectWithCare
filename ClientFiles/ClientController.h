/*
 * ConnectWithCare
 * "ClientController.h"
 * 
 * TCP type client.
 * 
 */

#ifndef CLIENT_CONTROLLER
#define CLIENT_CONTROLLER

//#include "ClientMessageConverter.h" // Using converted to send messages over.
#include <sys/socket.h> // for socket(), connect(), send(), and recv()
#include <arpa/inet.h>  // for sockaddr_in and inet_addr()
#include <stdlib.h>     // for atoi() and exit()
#include <string.h>     // for memset()
#include <unistd.h>     // for close()
#include <vector>
#include <ctime>
#include <string>
#include <bits/stdc++.h>
#include "../View/GUI.h"
#include "ClientMessageConverter.h"
#include "ClientMessageCreator.h"
#include "../CommonFiles/AllMessageTypes.h"

#define BUFFERSIZE 128
#define MAXLINE 128
#define BOARD_ID 10

int mainClientController(int argc, char** argv);

class ClientController
{
    public:
        ClientController(int portNumber, char* serverIP);
        // Constructs ClientController.

        void communicate();
        // Communicates functionalities with clients.
        

    private:
        int sock; 								// Socket descriptor
        struct sockaddr_in serverAddr; 			// Address of the server
        GUI app; 								// Application that the client runs
        ClientMessageCreator theCreator; 		// Creates specific client messages to send over to server
        ClientMessageConverter theConvertor;	// Converts messages from server so the client understands

        string username;
        string password;
        string nameTag;
        string accountType;

        unsigned char inBuffer[BUFFERSIZE]; 	// Buffer for the message from the server
        int bytesRecv; 							// Number of bytes received
        unsigned char outBuffer[BUFFERSIZE]; 	// Buffer for message to the server
        int msgLength; 							// Length of the outgoing message
        int bytesSent; 							// Number of bytes sent

        void createSocket();
        // Helper function for creating the socket.
        void checkSending(int bytes, int msgLength);
        // Helper function for checking if there was an error in sending message to server.
        void checkRecv(int bytes, int msgLenght);
        // Helper function for checking if message was received properly from server.
        void clearBuffer(unsigned char* buffer); // NOT SURE IF THIS WORKS
        // Helper function for clearing a buffer.
        
        void sendMessageToServer(Message m);
        // Sends a message to Server.
        Message recvMessageFromServer();
        // Receives message from Server.
        string recvStringFromServer();
        // Receives string from Server.
        Date createCurrentDate();
        // Creates current date.
        bool isNumber(const string &s);


        void loginCase();
        // Handles logging in process.
        void bulletinBoardCase();
        // Handles options inside bulletin board option.
        void chatsCase();
        // Handles options inside chat option.
        void postsCase();
        // Handles options inside posts option.
        void publicChannelCase();
        // Handles options inside public channel option.
        void friendsCase();
        // Handles options inside friends option.
        void accountCase();
        // Handles options inside account option.
        void userQuit();
        // Helper function that is activated when user presses 'q' at any time and quits program.
        void userBack();

};

#endif
