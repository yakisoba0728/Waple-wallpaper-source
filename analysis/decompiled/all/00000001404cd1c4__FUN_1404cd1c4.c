// Function: FUN_1404cd1c4
// Addr: 1404cd1c4
// Size: 1 bytes


void FUN_1404cd1c4(longlong param_1)

{
  byte *pbVar1;
  code *pcVar2;
  longlong in_RAX;
  
  pbVar1 = (byte *)(param_1 + in_RAX * 2);
  *pbVar1 = *pbVar1 >> 1;
  pcVar2 = (code *)swi(1);
  (*pcVar2)();
  return;
}

