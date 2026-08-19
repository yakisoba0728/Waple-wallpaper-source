// Function: FUN_1404b6188
// Addr: 1404b6188
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b6188(int param_1,int *param_2)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  uint *in_RAX;
  int *piVar6;
  byte *pbVar8;
  ulonglong uVar10;
  char cVar11;
  longlong unaff_RBX;
  undefined4 unaff_ESI;
  undefined4 unaff_00000034;
  bool bVar12;
  char in_AF;
  longlong unaff_retaddr;
  undefined1 auStackX_10 [24];
  uint *puVar7;
  char cVar9;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  bVar4 = (byte)in_RAX;
  bVar12 = CARRY1((byte)*in_RAX,bVar4);
  *(byte *)in_RAX = (byte)*in_RAX + bVar4;
  pbVar1 = (byte *)(unaff_RBX + 0x1b);
  bVar2 = *pbVar1;
  bVar3 = bVar2 < bVar12;
  *pbVar1 = bVar2 - bVar12;
  piVar6 = (int *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                           CONCAT11(((char)*pbVar1 < '\0') << 7 | (*pbVar1 == 0) << 6 | in_AF << 4 |
                                    ((POPCOUNT(*pbVar1) & 1U) == 0) << 2 | 2U | bVar3,bVar4));
  uVar5 = ((int)piVar6 - *piVar6) - (uint)bVar3;
  puVar7 = (uint *)(ulonglong)uVar5;
  uVar10 = (ulonglong)(uint)(param_1 + *param_2);
  *puVar7 = *puVar7 & uVar5;
  bVar4 = (byte)uVar5 | (byte)*puVar7;
  cVar9 = (char)(uVar5 >> 8) + bVar4;
  uVar5 = CONCAT22((short)(uVar5 >> 0x10),CONCAT11(cVar9,bVar4));
  pbVar8 = (byte *)(ulonglong)uVar5;
  *pbVar8 = *pbVar8 | bVar4;
  cVar11 = (char)((ulonglong)param_2 >> 8);
  *(char *)(uVar10 * 2) = *(char *)(uVar10 * 2) + cVar11;
  *(char *)((longlong)param_2 + uVar10) = *(char *)((longlong)param_2 + uVar10) + cVar9;
  *(char *)(unaff_retaddr + uVar10) = *(char *)(unaff_retaddr + uVar10) + (char)param_2;
  pbVar8[(longlong)param_2] = pbVar8[(longlong)param_2] + cVar11;
  pbVar1 = pbVar8 + -0x60ffe4a5;
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar4;
  uVar5 = (uVar5 - *(int *)pbVar8) - (uint)CARRY1(bVar2,bVar4);
  piVar6 = (int *)(CONCAT44(unaff_00000034,unaff_ESI) + 10);
  *piVar6 = *piVar6 + (int)auStackX_10;
  pbVar1 = (byte *)(CONCAT44(unaff_00000034,unaff_ESI) + -0x1c);
  bVar2 = *pbVar1;
  bVar4 = (byte)(uVar5 >> 8);
  *pbVar1 = *pbVar1 + bVar4;
  *(int *)(ulonglong)uVar5 = (*(int *)(ulonglong)uVar5 - uVar5) - (uint)CARRY1(bVar2,bVar4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

