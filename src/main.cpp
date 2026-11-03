
#include <Arduino.h>
#include <WiFi.h>
#include <WiFiManager.h>

WiFiManager wifiManager;

const char* AP_NAME = "BCA188-ESP32-2024-1116";

void setup() {
    Serial.begin(115200);
    delay(1000);

    WiFi.mode(WIFI_STA);

    Serial.println("\nStarting Personal Wi-Fi Manager...");
    Serial.println(AP_NAME);

    // Keep the configuration portal active without a timeout.
    wifiManager.setConfigPortalTimeout(0);

    // Start Wi-Fi connection or configuration portal.
    bool connected = wifiManager.autoConnect(AP_NAME);

    if (connected) {
        Serial.println("\nWi-Fi Connected!");

        Serial.print("Network: ");
        Serial.println(WiFi.SSID());

        Serial.print("ESP32 IP Address: ");
        Serial.println(WiFi.localIP());
    } else {
        Serial.println("\nWi-Fi connection failed.");
        Serial.println("Configuration portal has stopped.");
    }
}

void loop() {
    delay(1000);
}
