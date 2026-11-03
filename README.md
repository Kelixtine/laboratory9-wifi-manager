# BCA188 – ESP32 Personal Wi-Fi Manager

## 1. Project Overview

The ESP32 Personal Wi-Fi Manager is a project that allows users to configure an ESP32's wireless network connection through a web-based configuration portal.

Using the WiFiManager library, users can connect to the ESP32's access point, open a browser, select an available Wi-Fi network, and enter its password without manually editing the source code.

## 2. Features

- Creates a temporary Wi-Fi access point for configuration.
- Provides a browser-based Wi-Fi configuration portal.
- Scans and displays available wireless networks.
- Allows users to select a network and enter credentials.
- Connects the ESP32 to the selected Wi-Fi network.
- Displays connection information through the Serial Monitor.

## 3. Hardware and Software Requirements

**Hardware**
- ESP32 Development Board
- USB cable
- Computer

**Software**
- Visual Studio Code
- PlatformIO IDE
- Arduino Framework
- WiFiManager Library

## 4. Configuration Details

| Configuration | Value |
|---|---|
| Access Point SSID | `BCA188-ESP32-2024-1116` |
| Configuration Portal | `192.168.4.1` |
| Serial Baud Rate | `115200` |
| PlatformIO Environment | `esp32dev` |
| WiFiManager Version | `2.0.17` |

## 5. Project Structure

```text
BCA188-ESP32-WiFi-Manager/
├── include/
├── lib/
├── src/
│   └── main.cpp
├── test/
├── .gitignore
├── platformio.ini
└── README.md
```

## 6. How the System Works

1. The ESP32 initializes its Wi-Fi and Serial Monitor.
2. WiFiManager checks for previously saved Wi-Fi credentials.
3. If the ESP32 cannot connect using saved credentials, it starts its configuration access point.
4. The user connects to `BCA188-ESP32-2024-1116`.
5. The user opens `http://192.168.4.1`.
6. The configuration portal displays available wireless networks.
7. The user selects a network and enters its password.
8. The ESP32 attempts to connect to the selected network.
9. Once connected, the ESP32 displays its network name and assigned IP address in the Serial Monitor.

## 7. Installation and Testing

**Step 1 – Open the project**

Open the project folder in Visual Studio Code.

**Step 2 – Connect the ESP32**

Connect the ESP32 development board to the computer using a USB cable.

**Step 3 – Upload the firmware**

Run the following command in the PlatformIO terminal:

```powershell
pio run -t upload --upload-port COM3
```

**Step 4 – Open the Serial Monitor**

```powershell
pio device monitor -p COM3 -b 115200
```

**Step 5 – Connect to the ESP32 access point**

Open the available Wi-Fi networks on a phone or computer and connect to:

`BCA188-ESP32-2024-1116`

**Step 6 – Open the configuration portal**

Visit:

`http://192.168.4.1`

**Step 7 – Configure the connection**

Select an available wireless network, enter its password, and press Save.

**Step 8 – Verify the connection**

Check the Serial Monitor for the successful connection message and assigned IP address.

## 8. Screenshots and Demonstration

### 8.1 Serial Monitor Output

Shows the ESP32 startup process, Wi-Fi Manager activity, and connection information.

![ESP32 Serial Monitor](docs/images/serial-monitor.png)

### 8.2 Wi-Fi Configuration Network

Shows the ESP32 configuration access point and the Wi-Fi configuration interface.

![Wi-Fi Configuration](docs/images/wifi-network-scan.png)

### 8.3 WiFiManager Portal

Shows the WiFiManager homepage, including the Configure WiFi, Info, and Exit options.

![WiFiManager Portal](docs/images/wifimanager-portal.png)

## 9. Results and Conclusion

The ESP32 Personal Wi-Fi Manager successfully demonstrates wireless network configuration through a browser-based portal.

The project allows users to configure Wi-Fi credentials without modifying the program source code. It provides a convenient and user-friendly method of connecting an ESP32 development board to a wireless network.

## 10. Source Code Repository

GitHub Repository:

https://github.com/Kelixtine/laboratory9-wifi-manager
