//
// Created by tuxinet on 27.09.16.
//

#ifndef PLEZ_STREAMER_PLEZ_SERVER_H
#define PLEZ_STREAMER_PLEZ_SERVER_H


class Plez_Server {
public:
    Plez_Server();
    ~Plez_Server();

    void set_directory(char* dir);
    void start(int port);

private:

};


#endif //PLEZ_STREAMER_PLEZ_SERVER_H
