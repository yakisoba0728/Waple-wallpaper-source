// Function: FUN_1404bc124
// Addr: 1404bc124
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bc124(undefined8 param_1,byte *param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  undefined3 uVar4;
  byte bVar5;
  uint *in_RAX;
  char *pcVar6;
  uint unaff_EBX;
  undefined4 unaff_0000001c;
  char unaff_SPL;
  undefined7 unaff_00000021;
  longlong unaff_RBP;
  longlong unaff_RSI;
  
  uRam00000001b468c130 = uRam00000001b468c130 & unaff_EBX;
  uVar3 = (uint)in_RAX - *in_RAX;
  *(uint *)(param_2 + CONCAT44(unaff_0000001c,unaff_EBX)) =
       (*(int *)(param_2 + CONCAT44(unaff_0000001c,unaff_EBX)) - (int)unaff_RSI) -
       (uint)((uint)in_RAX < *in_RAX);
  pbVar1 = (byte *)(CONCAT71(unaff_00000021,unaff_SPL) + (ulonglong)uVar3 * 8);
  bVar2 = *pbVar1;
  bVar5 = (byte)uVar3;
  *pbVar1 = *pbVar1 + bVar5;
  uVar4 = (undefined3)(uVar3 >> 8);
  bVar5 = bVar5 - CARRY1(bVar2,bVar5);
  *(char *)(unaff_RBP + 0x22) = *(char *)(unaff_RBP + 0x22) + (char)((ulonglong)param_1 >> 8);
  *(char *)(unaff_RSI + 0x6d) = *(char *)(unaff_RSI + 0x6d) + (char)param_1;
  bVar5 = bVar5 & *(byte *)(ulonglong)CONCAT31(uVar4,bVar5);
  pcVar6 = (char *)(ulonglong)CONCAT31(uVar4,bVar5);
  *param_4 = *param_4 + unaff_SPL;
  *param_2 = *param_2 | bVar5;
  *pcVar6 = *pcVar6 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

