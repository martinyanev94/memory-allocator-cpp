class Socket {
private:
    int socketFD;

public:
    Socket(const std::string& address, int port) {
        // Assume some logic to create a socket
        socketFD = createSocket(address, port);
    }

    // Prevent copying to ensure unique ownership
    Socket(const Socket&) = delete; 
    Socket& operator=(const Socket&) = delete;

    // Implement move semantics
    Socket(Socket&& other) noexcept : socketFD(other.socketFD) {
        other.socketFD = -1; // Invalidate the moved-from socket
    }

    Socket& operator=(Socket&& other) noexcept {
        if (this != &other) {
            closeSocket(socketFD); // Clean up old socket
            socketFD = other.socketFD;
            other.socketFD = -1; // Invalidate the moved-from socket
        }
        return *this;
    }

    ~Socket() {
        if (socketFD != -1) {
            closeSocket(socketFD);
        }
    }
};
