#include <stdio.h>
#include <stdlib.h>
#include "event.h"

// client-specific event handlers
void client_evt_1_handler(int);
void client_evt_2_handler(int);

void client_evt_1_handler(int secret) {
    printf("client: event 1 handled; secret = %d\n", secret);
}
void client_evt_2_handler(int secret) {
    printf("client: event 2 handled; secret = %d\n", secret);
}

int main () {
    register_event_callbacks(client_evt_1_handler, client_evt_2_handler);
    event_loop();
    return 0;
}