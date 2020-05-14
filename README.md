# Servidor Web no Arduino para controlar led RGB

<ul>
		PProjeto base de um servidor web no arduino usando o módulo Ethernet Shield W5100. Na arquiteura do projeto é possivel criar paginas com facilidade para controle de diversos componentes.
	 Para isso basta criar a pagina (em html) como um método no arquivo "Tela.cpp" declarar o método no arquivo "Tela.h", após, é preciso instanciar o objeto na classe principal (.ino) e chamar as telas criadas no arquivo Tela.cpp
	</ul>

#### Materiais utiliazados
<ul>
	Arduino UNO +  Ethernet Shield W5100 + Led RGB
	</ul>

#### Configuração de rede
<ul>
	Para tal funcionamento será necessário a configuração da rede, tanto no arduino como no roteador. No Arduino setei o servidor para rodar na porta 80 e o ip /16. No roteador é preciso direcionar a porta 80 para o ip que foi setado no servidor.
</ul>

#### Conclusão
<ul>
	Como citado acima, é possivel utilizar este projeto para controle de diversos componente através de uma intranet, no meu caso usei o led RGB. Tenho uma organização aqui no GitHub que possui classes prontas e testadas para controle de diversos componentes.  <br>                   
	Link para acesso - https://github.com/componentes-arduino
</ul>
