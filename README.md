# Estudo de Registradores em Arduino

Este projeto permite alternar entre **três saídas diferentes** usando botões conectados a um **Arduino Uno**. Cada saída pode ser selecionada individualmente, e nenhuma delas pode ser ligada simultaneamente. Além disso, se você clicar na saída que já está ligada, todas as saídas serão desligadas.

## Funcionalidades

1. **Seleção de Saída**:

   - Use os botões para escolher qual saída deseja ativar.
   - Apenas uma saída pode estar ligada por vez.

2. **Desligar Todas as Saídas**:
   - Se a saída atual estiver ligada, clique nela novamente para desligar todas as saídas.

## Hardware Necessário

- Arduino Uno (ou compatível)
- Três botões
- Três LEDs (ou outros dispositivos que você deseja controlar)
- Resistores (se necessário para os LEDs)
- Fios e protoboard

## Diagrama de Conexões

![Diagrama de Conexões]

## Código

O código-fonte está disponível no arquivo **main.ino**. Ele foi otimizado para ocupar menos espaço na memória, utilizando registradores.

## Como Usar

1. Carregue o código no Arduino Uno.
2. Conecte os botões e LEDs conforme o diagrama.
3. Ligue o Arduino e teste as funcionalidades.

## Contribuições

Sinta-se à vontade para contribuir com melhorias, correções ou novas funcionalidades. Basta abrir uma **issue** ou enviar um **pull request**.

# Arduino Register Study

This project allows you to switch between **three different outputs** using buttons connected to an **Arduino Uno**. Each output can be selected individually, and none of them can be turned on simultaneously. Additionally, if you click on the output that is already active, it will turn off all outputs.

## Features

1. **Output Selection**:

   - Use the buttons to choose which output you want to activate.
   - Only one output can be turned on at a time.

2. **Turn Off All Outputs**:
   - If the current output is active, click it again to turn off all outputs.

## Required Hardware

- Arduino Uno (or compatible)
- Three buttons
- Three LEDs (or other devices you want to control)
- Resistors (if needed for the LEDs)
- Wires and a breadboard

## Connection Diagram

![Connection Diagram]

## Code

The source code is available in the **main.ino** file. It has been optimized to occupy less memory space using registers.

## How to Use

1. Upload the code to the Arduino Uno.
2. Connect the buttons and LEDs according to the diagram.
3. Power up the Arduino and test the functionalities.

## Contributions

Feel free to contribute improvements, bug fixes, or new features. Simply open an **issue** or submit a **pull request**.
