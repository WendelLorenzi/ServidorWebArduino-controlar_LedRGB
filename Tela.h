#include <SPI.h>
#include <Ethernet.h>


#ifndef _TELA_H
#define _TELA_H

class Tela {
    public:
        EthernetClient conexao;
        void Tela_login();
    private:
      void Escopo();
};

#endif
