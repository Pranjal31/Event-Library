#include <stdio.h>
#include <stdlib.h>
#include "event.h"
#include "client.h"

int main () {
    client_init();
    event_loop();
    return 0;
}