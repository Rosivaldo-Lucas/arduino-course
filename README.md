# Curso Introdução ao Arduino

Este repositório abriga o material didático e os recursos utilizados no curso de introdução ao Arduino, ministrado por mim para alunos do ensino fundamental em Juripiranga.

O curso visa proporcionar uma experiência prática e divertida no mundo da eletrônica e programação, utilizando a plataforma Arduino como ferramenta principal. Os materiais incluem apresentações, códigos-fonte e projetos práticos.

## Aula 1

### Piscar LED com Arduino - Prática 1

![Esquemático do projeto - Piscar LED](/aulas/01-aula/piscar-led/piscar-led.png)

### Piscar LEDs com Arduino - Prática 2

![Esquemático do projeto - Piscar LEDs](/aulas/01-aula/piscar-leds/piscar-leds.png)

## Aula 2

### Acionar LED ao pressionar Botão - Prática 1

![Esquemático do projeto - Acionar LED por Botão](/aulas/02-aula/button-led/button-led.png)

### Acionar Buzzer ao pressionar Botão - Prática 2

![Esquemático do projeto - Acionar Buzzer por Botão](/aulas/02-aula/button-buzzer/button-buzzer.png)

### Acionar LED ao pressionar Botão por Pull Up interno do Arduino - Prática 3

![Esquemático do projeto - Acionar LED por Botão por Pull Up interno](/aulas/02-aula/button-pull-up/button-pull-up.png)

## Aula 3

### Genius Game

O 1 projeto prático do curso foi o **Genius Game** que consiste na montagem de um protótipo de jogo eletrônico que desafiou os alunos a botarem em prática tudo que foi passado até agora no curso. O jogo desafia os jogadores a repetirem uma sequência aleatória de LEDs. Os alunos utilizaram componentes eletrônicos básicos, como LEDs, botões e o Arduino, para controlar o funcionamento do jogo. O objetivo é acender os LEDs em sequência e desafiar os jogadores a repetirem essa sequência corretamente. O projeto inclui montagem física do circuito, programação do Arduino, feedback visual e sonoro com um Buzzer, níveis de dificuldade progressivos e documentação do processo de desenvolvimento. Foi uma oportunidade para os alunos aplicarem conceitos de eletrônica e programação de forma prática e divertida, estimulando habilidades como resolução de problemas e criatividade.

![Esquemático Genius Game](/aulas/03-aula/genius-game/genius-game.png)

### Sensor IR

Utilização do sensor IR para acionar um LED.

![Esquemático Genius Game](/aulas/03-aula/sensor-ir/sensor-ir.png)

## Aula 4

### Semáforo Inteligente

O 2 projeto prático do cusro foi o **Semáforo Inteligente** que consiste na montagem de um protótipo de um semáforo composto
por 5 leds, nos quais, temos dois leds para sinalizar o semáforo do pedestre e mais 3 leds para sinalizar o semáforo dos carros. O funcionamento é simples, quando o LED verde dos carros está ligado (ABERTO), o LED vermelho dos pedestres está ligado (FECHADO). Assim, para abrir o sinal para os pedestres é necessário assionar o sensor IR, assim ele irá identificar a presença de pedestres e irá fechar o sinal dos carros e abrir o sinal dos pedestres por 5 segundos até voltar a fechar o sinal.

![Esquemático Semáforo Inteligente](/aulas/04-aula/semaforo-inteligente/semaforo-inteligente.png)
