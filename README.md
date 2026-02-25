# 📌 **TIME-STAMPED SENSOR DATA LOGGER**

### *(Real-Time Embedded Monitoring System using ARM7 Architecture)*

---

## 🔷 1. Executive Summary

The **Time-Stamped Sensor Data Logger** is a real-time embedded system designed to continuously monitor temperature, associate each reading with precise date and time information, and log structured data for traceability and analysis.

The system is built around the **LPC2148**, utilizing its integrated peripherals such as ADC, RTC, UART, and GPIO. Temperature sensing is performed using the **LM35**, known for its linear output and precision.

This project replicates the core functionality of an industrial data acquisition system by integrating:

✔ Real-time sensing

✔ Timestamped logging

✔ Configurable threshold alerts

✔ User-controlled RTC editing

✔ Structured serial communication

---

# 🔷 2. System Objective

The primary objective of this system is to develop a **robust and configurable real-time monitoring solution** capable of:

➤ Continuous temperature acquisition

➤ Accurate timestamp synchronization using RTC

➤ Serial logging for historical analysis

➤ Threshold-based fault detection

➤ User-configurable parameters

➤ Reliable and validated runtime updates

---

# 🔷 3. System Architecture

## 🧩 Hardware Components

• LPC2148 ARM7 Microcontroller

• LM35 Temperature Sensor

• 16×2 LCD Display

• 4×4 Matrix Keypad

• MAX232 (Serial Level Converter)

• Push Button (Mode Selection)

• LED (Fault Indicator)

---

# 🔷 4. Functional Architecture & Technical Implementation

---

## 📍 A) Analog-to-Digital Conversion (Temperature Acquisition)

The LM35 sensor produces a linear output of:

> 📌 **10mV per °C**

### Implementation Steps:

➤ Configured ADC channel of LPC2148

➤ Enabled peripheral clock for ADC

➤ Set appropriate sampling rate

➤ Converted analog voltage to digital value

➤ Applied scaling formula:


     Temperature (°C) = {ADC Value × Vref}/{Resolution × 10mV}


### Engineering Value:

✔ Direct register-level programming

✔ Accurate signal conversion

✔ Calibration handling

---

## 📍 B) Real-Time Clock (RTC) Integration

The on-chip RTC of LPC2148 was configured to maintain:

• Hours

• Minutes

• Seconds

• Date

• Month

• Year

• Day

### RTC Implementation Highlights:

➤ Enabled RTC power control

➤ Initialized RTC SFR registers

➤ Continuous timestamp retrieval during runtime

➤ Validated updates before writing new values

### Structured Log Format:

```
[INFO] Temp: 32.5°C @ 13:45:20 13/05/2025
```

This ensures:

✔ Traceability

✔ Historical data mapping

✔ Audit-friendly logging

---

## 📍 C) UART Communication (Data Logging)

UART0 configured with:

• 9600 baud rate

• 8-bit data

• 1 stop bit

• No parity

Data transmitted to PC via MAX232 interface.

### Log Categories:

✔ Normal Condition

```
[INFO] Temp: 32.5°C @ 13:45:20 13/05/2025
```

✔ Over-Temperature Condition

```
[ALERT] Temp: 47.3°C @ 14:10:55 13/05/2025 - OVER TEMP!
```

### Engineering Strength:

✔ Structured message framing

✔ Status tagging

✔ Serial protocol configuration

---

## 📍 D) Threshold-Based Fault Detection Mechanism

A configurable temperature setpoint (default: 45°C) is implemented.

### Logic Flow:

IF

    Temperature > Setpoint

THEN

➤ Activate LED

➤ Send ALERT log

➤ Display warning on LCD

![Temperature exceeds set point1](https://github.com/user-attachments/assets/62f7dc34-b9bd-4a9d-9b7e-60ef0b193755)

ELSE

➤ LED OFF

➤ Send INFO log

![Temperature within safe limit1](https://github.com/user-attachments/assets/df44cfb5-2000-4a88-b479-991034857e45)

This demonstrates:

✔ Real-time decision logic

✔ Event-driven alert mechanism

✔ Safety-oriented embedded design

---

# 🔷 5. Human-Machine Interface (HMI) Design

One of the most technically impressive aspects of this project is the structured editing interface.

---

## 🔹 Mode Switching Mechanism

• Push button connected to GPIO

• Software flag for mode transition

• Clean switching between:

➤ Monitoring Mode

➤ Editing Mode

---

## 🔹 Editable Parameters

✔ Hour

✔ Minute

✔ Second

✔ Date

✔ Month

✔ Year

✔ Day

✔ Temperature Setpoint

---

## 🔹 UI Implementation Approache

### 🔸 Method – Menu-Based Editing

Hierarchical structured menu with option selection.

---

### Input Validation Strategy

Before updating RTC registers:

✔ Range validation (0–59 for seconds/minutes)

✔ Month-day mapping validation

✔ Setpoint limit validation

✔ Boundary condition handling

This reflects:

✔ Defensive programming

✔ Robust firmware design

✔ Prevention of invalid states

---

# 🔷 6. Firmware Design Methodology

Developed in Embedded C using:

• Keil µVision

• Flash Magic

### Software Architecture:

1️⃣ Peripheral Initialization

2️⃣ Infinite Super Loop

3️⃣ ADC Read

4️⃣ RTC Fetch

5️⃣ LCD Update

6️⃣ UART Log Transmission

7️⃣ Threshold Comparison

8️⃣ Edit Mode Polling

### Design Model:

✔ Cooperative multitasking

✔ Modular function structure

✔ Clean separation of drivers and application logic

---

# 🔷 7. Engineering Challenges & Solutions

| Challenge                      | Solution                     |
| ------------------------------ | ---------------------------- |
| Synchronizing ADC & RTC reads  | Structured polling mechanism |
| Preventing invalid RTC updates | Strict boundary validation   |
| Maintaining responsiveness     | Non-blocking loop design     |

---

# 🔷 8. Industrial Relevance

This system closely resembles real-world applications such as:

✔ Environmental monitoring

✔ Industrial temperature tracking

✔ Cold storage logging

✔ Laboratory data acquisition

✔ Compliance-based audit logging systems

---

# 🔷 9. Core Skills Demonstrated

✅ ARM7 Architecture Understanding

✅ Peripheral Register Programming

✅ ADC & RTC Configuration

✅ Serial Communication Protocols

✅ Embedded UI Development

✅ Fault Detection Systems

✅ Real-Time System Design

✅ Hardware-Software Integration

✅ Structured Embedded C Programming

---

# 🔷 10. Strong Professional Closing Statement

> “Through this project, I implemented a complete real-time embedded monitoring system integrating sensing, timestamp synchronization, structured logging, configurable runtime control, and fault handling. It strengthened my expertise in ARM7 peripheral programming, embedded system architecture, and industrial-grade firmware design.”

---

## 👨‍💻 Author
**Gunda Harshitha** 
