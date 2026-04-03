import socket
import struct
import os

def scan_network(base_ip):
    active_devices = []
    print(f"Scanning network: {base_ip}...")
    for ip in range(1, 255):
        current_ip = f"{base_ip}.{ip}"
        try:
            # Create a socket
            socket.setdefaulttimeout(0.5)
            sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
            result = sock.connect_ex((current_ip, 80))
            if result == 0:
                active_devices.append(current_ip)
                print(f"Active device found: {current_ip}")
            sock.close()
        except socket.error:
            pass
    return active_devices

if __name__ == "__main__":
    # Example usage, replace with your own subnet
    subnet = "192.168.1"  # Change this to match your network
    scan_network(subnet)