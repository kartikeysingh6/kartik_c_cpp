Set wshShell =wscript.CreateObject("WScript.Shell")
WshShell.Run "notepad.exe"
wscript.sleep 3000
wshshell.sendkeys "#include<iostream>"
wscript.sleep 600
wshshell.sendkeys "{ENTER}"
wscript.sleep 600
wshshell.sendkeys "using namespace std;"
wscript.sleep 600
wshshell.sendkeys "{ENTER}"
wscript.sleep 600
wshshell.sendkeys "int main"
wscript.sleep 600
wshshell.sendkeys "+{9}"
wscript.sleep 600
wshshell.sendkeys "+{0}"
wscript.sleep 600
wshshell.sendkeys "+{[}"
wscript.sleep 600
wshshell.sendkeys "{ENTER}"
wscript.sleep 600
wshshell.sendkeys "{TAB}"
wscript.sleep 600
wshshell.sendkeys "cout<<"
wscript.sleep 600
wshshell.sendkeys "+{'}"
wscript.sleep 600
wshshell.sendkeys "Hello World"
wscript.sleep 600
wshshell.sendkeys "+{'}"
wscript.sleep 600
wshshell.sendkeys ";"
wscript.sleep 600
wshshell.sendkeys "{ENTER}"
wscript.sleep 600
wshshell.sendkeys "return 0;"
wscript.sleep 600
wshshell.sendkeys "{ENTER}"
wscript.sleep 600
wshshell.sendkeys "+{]}"
wscript.sleep 600
wshshell.sendkeys "^s"
wscript.sleep 2000
wshshell.sendkeys "test.cpp"
wscript.sleep 1000
wshshell.sendkeys "{ENTER}"
wscript.sleep 600
wshshell.sendkeys "%{f4}"
wscript.sleep 1000
wshshell.sendkeys "{ENTER}"