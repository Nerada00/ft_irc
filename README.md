# IRC Server Implementation

This is a custom implementation of an IRC server built using **C++98**, supporting key features of the IRC protocol, such as channels, user management, and various commands (`JOIN`, `KICK`, `PRIVMSG`, etc.). The project is designed to comply with the IRC RFC specifications, ensuring a robust and functional chat server. *(Using client reference: Irssi)*

## Features

### Core IRC Commands
Includes support for essential IRC commands:
- `PASS`, `NICK`, `USER`
- `JOIN`, `KICK`
- `PRIVMSG`, `PING`, `PONG`
- `MODE`, `TOPIC`, `INVITE`

### Channel Management
- Users can join or be kicked from channels.
- Channel operators (`MODE +o`) can manage access and modify topics.

### User Authentication
- Password support through the `PASS` command.
- Nickname management with collision detection.

### Clean Message Handling
- Parsing and sanitization of messages using efficient buffer handling.
- Multiline message support.

### Error Handling
- Handles invalid commands, unknown users, and server errors gracefully.

---

## How to Build and Run

### Prerequisites
- **C++ Compiler**: Compatible with C++98 (e.g., GCC or Clang).
- **Make**: To simplify the build process.

### Build Instructions
1. Clone the repository:
    ```bash
    git clone https://github.com/Nerada00/ft_irc.git
    cd ft_irc
    ```

2. Compile the project:
    ```bash
    make
    ```

3. Run the server:
    ```bash
    ./ircserver <port> <password>
    ```
    - Replace `<port>` with the desired port number (e.g., 6667 for IRC).
    - Replace `<password>` with the server's password for client authentication.

---

## Usage

### Connect to the Server
You can use any IRC client (e.g., **Irssi**, **HexChat**, or **WeeChat**) to connect to the server:

```bash
/server <host> <port> <password>
