// Function: FUN_1404cc120
// Addr: 1404cc120
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cc120(char *param_1,undefined2 param_2,char param_3)

{
  uint uVar1;
  byte *pbVar2;
  uint *puVar3;
  char cVar4;
  int in_EAX;
  uint uVar5;
  char *pcVar6;
  char unaff_BL;
  undefined1 *unaff_RSI;
  char unaff_R12B;
  
  uVar5 = in_EAX + 0x80000754;
  pbVar2 = (byte *)((ulonglong)uVar5 * 2);
  *pbVar2 = *pbVar2 | (byte)((ushort)param_2 >> 8);
  uVar1 = (int)unaff_RSI + 1;
  out(*unaff_RSI,param_2);
  puVar3 = (uint *)((ulonglong)uVar5 * 2);
  *puVar3 = *puVar3 | uVar1;
  pcVar6 = (char *)((ulonglong)uVar5 ^ 0xc0);
  *param_1 = *param_1 + unaff_R12B;
  cVar4 = (char)pcVar6;
  *pcVar6 = *pcVar6 + cVar4;
  pcVar6[0x6e003408] = pcVar6[0x6e003408] + cVar4;
  *(uint *)((longlong)pcVar6 * 2) = *(uint *)((longlong)pcVar6 * 2) | uVar1;
  *param_1 = *param_1 + param_3;
  iRam0000000143a0ea47 = iRam0000000143a0ea47 - (CONCAT31((int3)(uVar5 >> 8),cVar4) ^ 0xc0);
  cRam00000001424cc381 = cRam00000001424cc381 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

