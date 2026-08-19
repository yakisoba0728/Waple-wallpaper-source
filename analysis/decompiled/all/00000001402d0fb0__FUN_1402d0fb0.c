// Function: FUN_1402d0fb0
// Addr: 1402d0fb0
// Size: 45 bytes


void FUN_1402d0fb0(undefined4 param_1,char param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if (param_2 != '\0') {
    uVar2 = (*DAT_140426740)();
    (*DAT_140426220)(uVar2,param_1);
  }
  FUN_1402d0fe0(param_1);
  (*DAT_1404264c0)(param_1);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

