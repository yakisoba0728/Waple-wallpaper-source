// Function: FUN_1404a4670
// Addr: 1404a4670
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a4670(char *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  char *pcVar3;
  longlong unaff_RSI;
  
  uVar2 = in(0x49);
  *param_1 = *param_1 + (byte)uVar2;
  *param_2 = *param_2 | uVar2;
  *param_1 = *param_1 + (byte)param_1;
  bVar1 = (byte)param_1 & 7;
  bRam00000001465e684f = bRam00000001465e684f << bVar1 | bRam00000001465e684f >> 8 - bVar1;
  (&stack0x00000000)[unaff_RSI * 2] = (&stack0x00000000)[unaff_RSI * 2] + (char)param_2;
  pcVar3 = (char *)(ulonglong)CONCAT31((int3)(uVar2 >> 8),(byte)uVar2 | *(byte *)(ulonglong)uVar2);
  param_1[0x8e40400] = param_1[0x8e40400] + (char)((ulonglong)param_2 >> 8);
  *pcVar3 = *pcVar3 + (char)param_2;
  cRam00000000e44a4e22 = cRam00000000e44a4e22 + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

