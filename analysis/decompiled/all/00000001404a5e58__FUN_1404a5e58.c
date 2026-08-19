// Function: FUN_1404a5e58
// Addr: 1404a5e58
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a5e58(byte *param_1,longlong param_2)

{
  char *pcVar1;
  byte bVar2;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  longlong in_RAX;
  byte bVar8;
  byte bVar9;
  undefined6 uVar10;
  longlong unaff_RBP;
  int unaff_EDI;
  undefined4 unaff_0000003c;
  longlong in_FS_OFFSET;
  byte bVar3;
  byte *pbVar7;
  
  uVar10 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar9 = (byte)((ulonglong)param_2 >> 8);
  *(int *)(unaff_RBP + 0x5d600008) = *(int *)(unaff_RBP + 0x5d600008) - unaff_EDI;
  *param_1 = *param_1 + (byte)in_RAX;
  bVar4 = (byte)in_RAX | *(byte *)(in_RAX * 2);
  bVar8 = (byte)param_2 | *(byte *)(CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar4) + param_2);
  bVar9 = bVar9 | *(byte *)(CONCAT62(uVar10,CONCAT11(bVar9,bVar8)) + 0xa217006);
  uVar6 = (int)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                        CONCAT11((byte)((ulonglong)in_RAX >> 8) |
                                 param_1[CONCAT44(unaff_0000003c,unaff_EDI)],bVar4)) + 0x40000e34;
  pbVar7 = (byte *)(ulonglong)uVar6;
  bVar5 = (byte)uVar6;
  *pbVar7 = *pbVar7 | bVar5;
  *param_1 = *param_1 + 8;
  *pbVar7 = *pbVar7 + bVar5;
  pbVar7[-0x42] = pbVar7[-0x42] + bVar5;
  *pbVar7 = *pbVar7 | bVar5;
  *param_1 = *param_1 + 0x10;
  *(char *)((longlong)pbVar7 * 2) = *(char *)((longlong)pbVar7 * 2) + bVar5;
  param_1[CONCAT44(unaff_0000003c,unaff_EDI)] =
       param_1[CONCAT44(unaff_0000003c,unaff_EDI)] + (char)(uVar6 >> 8);
  param_1[0x5d900008] = param_1[0x5d900008] + bVar9;
  pbVar7[-0x42] = pbVar7[-0x42] + bVar5;
  *pbVar7 = *pbVar7 | bVar5;
  bVar4 = *param_1;
  *param_1 = *param_1 + bVar5;
  cRam000000005d900008 = cRam000000005d900008 + bVar5 + CARRY1(bVar4,bVar5);
  bVar4 = *pbVar7;
  *pbVar7 = *pbVar7 + bVar8;
  pbVar7 = pbVar7 + in_FS_OFFSET;
  bVar2 = *pbVar7;
  bVar3 = *pbVar7;
  *pbVar7 = bVar3 + bVar5 + CARRY1(bVar4,bVar8);
  pcVar1 = (char *)(CONCAT62(uVar10,CONCAT11(bVar9,bVar8)) + 0x7007f009);
  *pcVar1 = *pcVar1 + bVar8 + (CARRY1(bVar2,bVar5) || CARRY1(bVar3 + bVar5,CARRY1(bVar4,bVar8)));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

