 

#include <WiFi.h>


// 接続先のSSIDとパスワード
const char* ssid = "ist_members"; //無線ルーターのssidを入力
const char* password = "8gAp3nY!s2Gm"; //無線ルーターのパスワードを入力


void setup() {
  Serial.begin(115200);

  //wifiに接続
  connectWiFi();
}


void loop() {
  //今回はループなし
}


//WiFiに接続
void connectWiFi(){

  Serial.print("ssid:");
  Serial.print(ssid);
  Serial.print(" に接続します。");
  Serial.print(" "); //改行
  Serial.print(" "); //改行

  WiFi.begin(ssid, password);

  Serial.print("WiFiに接続中");
  while(WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(500);
  }

  Serial.println(" "); //改行
  Serial.println("接続しました。");

  //IPアドレスの表示
  Serial.print("IPアドレス:");
  Serial.print(WiFi.localIP());

}
