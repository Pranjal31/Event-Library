#define NUM_ITERATIONS 1000
#define LOWER_BOUND 500
#define UPPER_BOUND 2000
#define RANGE (UPPER_BOUND - LOWER_BOUND + 1)
#define EVT_CONDITION_DIV 100
#define EVT_CONDITION (rand_num % EVT_CONDITION_DIV)
#define EVT_1_CASE 0        // remainder for d
#define EVT_2_CASE 50

struct event_handler {
    void(*evt1_cb)(int secret);
    void(*evt2_cb)(int secret);
};

void register_event_callbacks(void(*clt_evt1_cb)(int), void(*clt_evt2_cb)(int));
void event_loop();