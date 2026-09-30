#include <stdio.h>

#define NODE_ID 50

void ping() {
    printf("PING");
}

void pong() {
    printf("PONG");
}

void handshake() {
    ping();
    printf("-");
    pong();
    printf("-");
    ping();
}

int main() {
    int packet_size = NODE_ID * 4;
    int total_transfer = packet_size * 3;
    handshake();
    printf(":%d", packet_size);
    printf("\n");
    handshake();
    printf(":%d", total_transfer);
    printf("\n");
    printf("SESSION:CLOSED\n");
    return 0;
}