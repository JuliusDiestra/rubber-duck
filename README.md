# rubber-duck : Rubber Duck Debugging in terminal

Command-line application for rubber duck debugging. Useful for lonely and desperate developers


## How to build and install?

1. Clone repository
```bash
git clone git@github.com:JuliusDiestra/rubber-duck.git
```
2. Build

```
cd rubber-duck
cmake -S . -B build
cmake --build build
```

3. Install

```bash
cd build
make install
```
Note: **rubber-duck** executable should be installed in **/usr/local/bin**.

## How to use?

Show help menu :
```bash
rubber-duck --help
```
Start talking with the Rubber Duck :
```bash
rubber-duck hello
```
After saying hello to the **rubber-duck**, you will start a debugging session.
Ask anything to the **rubber-duck** and you will get support.

If you want to stop conversation, just say "bye".

A short conversation :
```console
foo@foo:~$ rubber-duck hello
<desperate-developer> Hello my friend !
<rubber-duck> Quack!
<desperate-developer> bye
<rubber-duck> See you later, Alligator!
```

