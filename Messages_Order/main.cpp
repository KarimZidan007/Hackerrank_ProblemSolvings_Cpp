#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Message {
private:
string MSG;
static int Current_Order;
int My_Order;
public: 
    Message() {
        My_Order=Current_Order;
        Current_Order++;
    }
    Message(const string& Messg):MSG{Messg}
    {
        My_Order=Current_Order;
        Current_Order++;
    }
    const string& get_text() {
        return MSG;
    }
    bool operator<(const Message& obj){
        
        if(this->My_Order<obj.My_Order) 
        {
            return true;
        }
        else
        {
            return false;
        }
       
    } //will be used in fix_order
    void setMSG(const string& MSG)
    {
        this->MSG=MSG;
    }
    
};

class MessageFactory {
public:
    MessageFactory() {}
    Message create_message(const string& text) {
        Message obj(text); 
        return obj;
    }
    
};
int Message::Current_Order=0;

class Recipient {
public:
    Recipient() {}
    void receive(const Message& msg) {
        messages_.push_back(msg);
    }
    void print_messages() {
        fix_order();
        for (auto& msg : messages_) {
            cout << msg.get_text() << endl;
        }
        messages_.clear();
    }
private:
    void fix_order() {
        sort(messages_.begin(), messages_.end());
    }
    vector<Message> messages_;
};

class Network {
public:
    static void send_messages(vector<Message> messages, Recipient& recipient) {
    // simulates the unpredictable network, where sent messages might arrive in unspecified order
        random_shuffle(messages.begin(), messages.end());         
        for (auto msg : messages) {
            recipient.receive(msg);
        }
    }
};



int main() {
    MessageFactory message_factory;
    Recipient recipient;
    vector<Message> messages;
    string text;
    while (getline(cin, text)) {
        messages.push_back(message_factory.create_message(text));
    }
    Network::send_messages(messages, recipient);
    recipient.print_messages();
}

