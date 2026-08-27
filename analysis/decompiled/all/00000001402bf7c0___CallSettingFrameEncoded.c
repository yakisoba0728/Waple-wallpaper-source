// Function: _CallSettingFrameEncoded
// Addr: 1402bf7c0
// Size: 71 bytes


/* Library Function - Single Match
    _CallSettingFrameEncoded
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void _CallSettingFrameEncoded
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = (code *)FUN_1402bf610(param_1,param_2,param_4);
  (*pcVar1)(param_3);
  uVar2 = FUN_1402bf640();
  FUN_1402bf610(uVar2,param_2,2);
  return;
}

