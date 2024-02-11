#include "event.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct event_handler ev_h = {0};

void register_event_callbacks(void(*clt_evt1_cb)(int), void(*clt_evt2_cb)(int))  {
    ev_h.evt1_cb = clt_evt1_cb;
    ev_h.evt2_cb = clt_evt2_cb;
}

void event_loop() {
    int rand_num = 0;
    srand(time(NULL));

    printf("event_loop: started\n");
    for (int idx = 1; idx <= NUM_ITERATIONS; idx++) {
        // generate random number in RANGE
        rand_num = rand()%RANGE + LOWER_BOUND;

        printf("event_loop: generated rand_num_%d = %d\n", idx, rand_num);
        switch (EVT_CONDITION)
        {
        case EVT_1_CASE:
            // trigger event 1
            printf("event_loop: event 1 triggered \n");
            if (ev_h.evt1_cb) {
                ev_h.evt1_cb(rand_num);
            }
            break;
        case EVT_2_CASE:
            // trigger event 2
            printf("event_loop: event 2 triggered \n");
            if (ev_h.evt2_cb) {
                ev_h.evt2_cb(rand_num);
            }
        default:
            break;
        }
    }
    printf("event_loop: ended\n");
}