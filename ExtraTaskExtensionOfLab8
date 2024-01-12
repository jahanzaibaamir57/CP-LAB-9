#include <iostream>
#include <string>

using namespace std;


void sendMessage(const string& message) {
    cout << "Sending message: " << message << endl;
}

void receiveMessage(const string& message) {
    cout << "Received message: " << message << endl;
}

void makePhoneCall(const string& receiver) {
    cout << "Calling " << receiver << "..." << endl;
}

void ringUntilPickedUp(const string& receiver) {
    cout << "Ringing " << receiver << "..." << endl;
    cout << "Waiting for " << receiver << " to pick up the call..." << endl;

    bool isPickedUp = false;
    while (!isPickedUp) {
        for (int i = 0; i < 3; ++i) {
            cout << "Ring..." << endl;
            for (int j = 0; j < 100000000; ++j) {}
        }

        cout << receiver << " picked up the call!" << endl;
        isPickedUp = true;
    }
}


void makePhoneCall(const string& receiver, const string& callType) {
    cout << "Calling " << receiver << " with " << callType << " call..." << endl;
}

void makePhoneCall(const string& receiver, const string& callType1, const string& callType2) {
    cout << "Initiating conference call with " << receiver << " using " << callType1 << " and " << callType2 << "..." << endl;
}

void sendMessage(const string& message, const string& messageType) {
    cout << "Sending " << messageType << " message: " << message << endl;
}

void sendMessage(const string& message, const string& messageType1, const string& messageType2) {
    cout << "Sending multimedia message (" << messageType1 << " and " << messageType2 << "): " << message << endl;
}

int main() {
    string sentMessage = "How is Bahria University?";
    sendMessage(sentMessage);

    string receivedMessage = "Bahria University is an Excellent University.";
    receiveMessage(receivedMessage);

    string receiverName = "Hamza";
    makePhoneCall(receiverName);
    ringUntilPickedUp(receiverName);

    
    makePhoneCall(receiverName, "Video");
    makePhoneCall(receiverName, "Audio");
    makePhoneCall(receiverName, "Audio", "Video");

  
    string textMessage = "Let's meet tomorrow.";
    sendMessage(textMessage, "Plain Text");

    string audioMessage = "Voice message: Hello there!";
    sendMessage(audioMessage, "Audio");

    string multimediaMessage = "Check out this image and video.";
    sendMessage(multimediaMessage, "Image", "Video");

    return 0;
}
