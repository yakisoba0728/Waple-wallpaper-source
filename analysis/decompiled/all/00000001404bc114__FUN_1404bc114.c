// Function: FUN_1404bc114
// Addr: 1404bc114
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bc114(char param_1,byte *param_2,undefined8 param_3,char *param_4)

{
  undefined1 *puVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  undefined3 uVar5;
  byte bVar6;
  uint uVar7;
  uint *in_RAX;
  char *pcVar8;
  uint unaff_EBX;
  undefined4 unaff_0000001c;
  longlong unaff_RSI;
  byte abStack_49e8 [18912];
  
  uVar7 = (uint)in_RAX;
  *in_RAX = *in_RAX & uVar7;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  puVar1 = (undefined1 *)(CONCAT44(unaff_0000001c,unaff_EBX) + 0x22);
  *puVar1 = *puVar1;
  uRam00000001b468c130 = uRam00000001b468c130 & unaff_EBX;
  uVar4 = uVar7 - *in_RAX;
  *(uint *)(param_2 + CONCAT44(unaff_0000001c,unaff_EBX)) =
       (*(int *)(param_2 + CONCAT44(unaff_0000001c,unaff_EBX)) - (int)unaff_RSI) -
       (uint)(uVar7 < *in_RAX);
  pbVar2 = abStack_49e8 + (ulonglong)uVar4 * 8;
  bVar3 = *pbVar2;
  bVar6 = (byte)uVar4;
  *pbVar2 = *pbVar2 + bVar6;
  uVar5 = (undefined3)(uVar4 >> 8);
  bVar6 = bVar6 - CARRY1(bVar3,bVar6);
  *(char *)(unaff_RSI + 0x6d) = *(char *)(unaff_RSI + 0x6d) + param_1;
  bVar6 = bVar6 & *(byte *)(ulonglong)CONCAT31(uVar5,bVar6);
  pcVar8 = (char *)(ulonglong)CONCAT31(uVar5,bVar6);
  *param_4 = *param_4 + (char)abStack_49e8;
  *param_2 = *param_2 | bVar6;
  *pcVar8 = *pcVar8 + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

