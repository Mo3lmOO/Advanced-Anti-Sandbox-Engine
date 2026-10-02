# Software Environment Verification Tool (Pure C)

A lightweight and clean **Environment Verification Tool** written in **Pure C (C11)**. This tool is designed for software protection, allowing applications to verify hardware specifications and ensure they are running on an authorized physical machine before executing the main application logic.

## 🛡️ Implemented Checks
- **Processor Check:** Inspects the hardware registers for virtual execution layers.
- **Hardware Resources:** Detects standard resources (RAM & CPU Cores tracking).
- **Account Verification:** Identifies default system accounts and automated testing names.
- **System File Scanning:** Scans for specialized integration hooks like `sbiedll.dll` and `cuckoomon.dll`.
- **User Activity Check:** Monitors real-time mouse coordinate changes across a 10-second timeline.

## 💻 How it Works
The code uses a conditional matrix inside `main()` to confirm a valid physical environment:
