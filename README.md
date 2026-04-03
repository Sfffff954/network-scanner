# Installation Instructions

## Linux
### Using APT
```bash
sudo apt update
sudo apt install <your-package-name>
```

### Using DNF
```bash
sudo dnf install <your-package-name>
```

## Windows
### Using pip
```powershell
pip install <your-package-name>
```

### Using PowerShell
```powershell
Install-Package <your-package-name>
```

## macOS
### Using Homebrew
```bash
brew install <your-package-name>
```

## Setup Guides
### PC Version
1. Clone the repository.
   ```bash
   git clone https://github.com/Sfffff954/network-scanner.git
   cd network-scanner
   ```
2. Install dependencies.
   ```bash
   <installation command based on your OS>
   ```
3. Run the application.
   ```bash
   python main.py
   ```

### ESP32 Version
1. Install the necessary libraries for ESP32.
2. Connect the ESP32 to your computer.
3. Upload the code using the Arduino IDE or PlatformIO.