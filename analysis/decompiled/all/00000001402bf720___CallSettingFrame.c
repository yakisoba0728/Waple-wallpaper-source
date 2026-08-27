// Function: _CallSettingFrame
// Addr: 1402bf720
// Size: 64 bytes


/* Library Function - Single Match
    _CallSettingFrame
   
   Library: Visual Studio */

void _CallSettingFrame(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = (code *)FUN_1402bf610(param_1,*param_2);
  (*pcVar1)();
  uVar2 = FUN_1402bf640();
  FUN_1402bf610(uVar2,*param_2,2);
  return;
}

