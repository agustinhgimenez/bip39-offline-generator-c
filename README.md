# 🔐 BIP39 Offline Seed Generator (C)

This project is a **BIP39 seed phrase generator** written in **C**, originally developed in **2023**.  
It is designed to run **completely offline** on a virtual machine or air-gapped computer, without depending on third-party wallets such as Trezor, Metamask, or Ledger.

⚠️ **Disclaimer:** This code is **experimental and for educational purposes only**.  
Do **not** use it to generate real wallets holding funds.  
For maximum security, the recommended method is still the **dice method + BIP39 wordlist on paper**.

---

## ✨ Features
- Generates pseudo-random binary and decimal numbers.
- Based on C’s `rand()` function (11 bits per number).
- Includes the official **BIP39 English wordlist** (2048 words).
- Works **100% offline**, ideal for VMs or isolated systems.
- Outputs both binary and decimal values in the terminal.
- Generates **23 words** of the mnemonic phrase.  
  👉 The **24th word (checksum)** must be calculated manually according to the BIP39 specification.

---

## 📂 Files
- `crypto.c` → Main C source code of the generator.  
- `wordlist.txt` → Official BIP39 English wordlist (2048 words).  
- *(compiled binaries are not included for security reasons).*  

---

## ⚙️ Compilation & Usage

### On Linux / macOS
```bash
gcc crypto.c -o crypto -lm
./crypto
