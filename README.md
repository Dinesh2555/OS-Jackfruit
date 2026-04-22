# OS-Jackfruit

Lightweight Container Runtime Simulator

---

## 📌 Overview
This project simulates the basic working of a container runtime.  
It demonstrates how different workloads (CPU, memory, and I/O) can be executed and monitored, similar to how containers behave in real systems.

---

## ⚙️ Features
- Execution of different workloads
- CPU-intensive process simulation
- Memory allocation simulation
- File I/O activity simulation
- Simple monitoring system
- Logging of outputs

---

## 📂 Project Structure

OS-Jackfruit/
├── src/            # Source code files  
│   ├── engine.c  
│   ├── monitor.c  
│   ├── cpu_hog.c  
│   ├── memory_hog.c  
│   ├── io_pulse.c  
│  
├── include/        # Header files  
│   └── monitor_ioctl.h  
│  
├── screenshots/    # Output screenshots  
├── logs/           # Log files  
├── Makefile  
└── README.md  

---

## 🚀 How to Run

### Compile
make

### Run CPU workload
./engine cpu

### Run Memory workload
./engine memory

### Run I/O workload
./engine io

---

## 📸 Output Screenshots

### CPU Execution
![CPU](screenshots/cpu_run.jpeg)

### I/O Execution
![IO](screenshots/io_run.jpeg)

### Logs Output
![Logs](screenshots/log_output.jpeg)

---

## 🎯 Conclusion
This project provides a basic simulation of container runtime behavior by managing and executing different types of workloads. It helps understand process execution, resource usage, and monitoring in a simplified way.

---

## 📚 Technologies Used
- C Programming  
- Linux Environment  
- GCC Compiler  
