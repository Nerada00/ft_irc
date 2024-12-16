/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdmessa <abdmessa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 17:44:45 by rabouzia          #+#    #+#             */
/*   Updated: 2024/12/11 00:22:05 by abdmessa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Server.hpp"

class Server;
class Client;


int main(int ac, char **av)
{
    if (ac != 3) {
        std::cerr << "Usage: ./ircserv <port> <passwd>" << std::endl;
        return 1;
    }

    int port = std::atoi(av[1]);
    std::string passwd = av[2];
    if (port < 1024)
    {
        std::cout << "Invalid port\n";
        return (1);
    }
    try {
        Server server(port, passwd);
        server.initServer();
        server.bindServ();
        server.listenServ();
        server.run();
    } catch (const std::exception &e) {
        return 1;
    }

    return 0;
}