// Function: FUN_1404d2560
// Addr: 1404d2560
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d2560(char param_1,longlong param_2,longlong param_3)

{
  char *pcVar1;
  code *pcVar2;
  uint uVar3;
  char *pcVar4;
  longlong unaff_RSI;
  undefined4 uVar5;
  
  pcVar2 = (code *)swi(0x6a);
  pcVar4 = (char *)(*pcVar2)();
  uVar5 = (undefined4)((ulonglong)pcVar4 >> 0x20);
  pcVar1 = (char *)(param_3 + 0x210049 + unaff_RSI * 8);
  *pcVar1 = *pcVar1 + param_1;
  *pcVar4 = *pcVar4 + (char)pcVar4;
  uVar3 = CONCAT31((int3)((ulonglong)pcVar4 >> 8),0x6a);
  pcVar1 = (char *)(CONCAT44(uVar5,uVar3) + 0x11110049 + unaff_RSI * 8);
  *pcVar1 = *pcVar1 + param_1;
  *(uint *)CONCAT44(uVar5,uVar3) = *(uint *)CONCAT44(uVar5,uVar3) | uVar3;
  *(int *)(param_2 + 0xd) = *(int *)(param_2 + 0xd) + (int)&stack0x00000000;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

