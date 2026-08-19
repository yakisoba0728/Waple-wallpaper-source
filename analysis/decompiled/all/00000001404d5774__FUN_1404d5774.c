// Function: FUN_1404d5774
// Addr: 1404d5774
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d5774(uint *param_1,longlong param_2,byte param_3,byte *param_4)

{
  char *pcVar1;
  uint uVar2;
  undefined3 uVar3;
  byte bVar4;
  char *in_RAX;
  longlong unaff_RSI;
  char unaff_R12B;
  byte *pbVar5;
  
  *param_4 = *param_4 + unaff_R12B;
  *in_RAX = *in_RAX + (char)in_RAX;
  in_RAX[-0x10] = in_RAX[-0x10] + (char)param_2;
  uVar3 = (undefined3)((ulonglong)in_RAX >> 8);
  pcVar1 = (char *)(unaff_RSI + param_2 * 2);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
  bVar4 = *param_4;
  *param_4 = *param_4 + param_3;
  bVar4 = (char)in_RAX + CARRY1(bVar4,param_3);
  pbVar5 = (byte *)(ulonglong)(CONCAT31(uVar3,bVar4) ^ 0x35f06400);
  *(char *)(unaff_RSI + -0x68) = *(char *)(unaff_RSI + -0x68) + bVar4;
  *pbVar5 = *pbVar5 ^ bVar4;
  uVar2 = CONCAT31(uVar3,(bVar4 ^ *pbVar5) + 0x98) ^ 0x35f06400;
  *param_1 = *param_1 & (uVar2 ^ *(uint *)(ulonglong)uVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

