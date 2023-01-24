#ifndef ConsentiumThingsCurie_h
#define ConsentiumThingsCurie_h

#include <Arduino.h>  
#include <WiFi.h>
#include <HTTPClient.h>       

#define THRES_5 4.8828
#define THRES_3 3.2226
#define EspBaud 115200
#define NETWRK_LED 16

#define LOW_PRE 2
#define MID_PRE 4
#define HIGH_PRE 6

class ConsentiumThingsCurie{
    public:
        ConsentiumThingsCurie();
        void begin();
        void loop_delay(long);
        void initWiFi(const char*, const char*);
        void sendREST(const char*, int, String[], float[], int, long); 
        float busRead(int, float);      
};

#endif