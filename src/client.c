#include <stdio.h>
#include <stdlib.h>
#include "event.h"

// client-specific event handlers
static void client_evt_1_handler(int secret) {
    printf("client: event 1 handled; secret = %d\n", secret);
}
static void client_evt_2_handler(int secret) {
    printf("client: event 2 handled; secret = %d\n", secret);
}
void client_init() {
    // register client's event handlers with the event library
    register_event_callbacks(client_evt_1_handler, client_evt_2_handler);
}