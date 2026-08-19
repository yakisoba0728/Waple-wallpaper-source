// Function: FUN_14049e8d4
// Addr: 14049e8d4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049e8d4(undefined8 param_1,undefined2 param_2)

{
  undefined3 uVar1;
  char cVar2;
  int in_EAX;
  uint uVar3;
  byte in_CF;
  char *pcVar4;
  
  uVar3 = in_EAX + 0x10000974 + (uint)in_CF;
  *(byte *)(ulonglong)uVar3 = *(byte *)(ulonglong)uVar3 | (byte)uVar3;
  uVar1 = (undefined3)(uVar3 + 0x80000ac4 >> 8);
  cVar2 = in(param_2);
  uRam210049e7f00000ec = CONCAT31(uVar1,cVar2);
  pcVar4 = (char *)(ulonglong)uRam210049e7f00000ec;
  *pcVar4 = *pcVar4 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  pcVar4[-0x5cffff14] = pcVar4[-0x5cffff14] + cVar2;
  cVar2 = in(param_2);
  pcVar4 = (char *)(ulonglong)CONCAT31(uVar1,cVar2);
  *pcVar4 = *pcVar4 + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

