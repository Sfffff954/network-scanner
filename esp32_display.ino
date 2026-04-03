#include <WiFi.h>

// Replace with your network credentials
const char* ssid = "your_SSID";
const char* password = "your_PASSWORD";

void setup() {
  Serial.begin(115200);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting to WiFi...");
  }
  Serial.println("Connected to WiFi");
}

void loop() {
  int n = WiFi.scanNetworks();
  Serial.println("Scan completed. Found " + String(n) + " networks:");
  for (int i = 0; i < n; ++i) {
    Serial.print(i + 1);
    Serial.print(") ");
    Serial.print(WiFi.SSID(i));
    Serial.print(" (RSSI: ");
    Serial.print(WiFi.RSSI(i));
    Serial.println(" dBm)");
  }
  delay(5000); // Wait 5 seconds before scanning again
}