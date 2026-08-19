// Function: FUN_1404d2cbc
// Addr: 1404d2cbc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404d2cff) overlaps instruction at (ram,0x0001404d2cfe)
    */
/* WARNING: Removing unreachable block (ram,0x0001404d2d3d) */
/* WARNING: Removing unreachable block (ram,0x0001404d2d46) */
/* WARNING: Removing unreachable block (ram,0x0001404d2d72) */
/* WARNING: Removing unreachable block (ram,0x0001404d2d82) */
/* WARNING: Removing unreachable block (ram,0x0001404d2d57) */

void FUN_1404d2cbc(char *param_1,undefined1 *param_2,char *param_3,longlong param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined4 uVar3;
  int iVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  byte bVar10;
  byte *in_RAX;
  int *piVar8;
  undefined7 uVar11;
  uint uVar12;
  byte bVar13;
  byte bVar14;
  undefined6 uVar15;
  byte unaff_BL;
  char unaff_BH;
  longlong unaff_RBP;
  byte *unaff_RSI;
  undefined4 *unaff_RDI;
  char in_R10B;
  undefined7 in_register_00000091;
  char unaff_R15B;
  bool bVar16;
  bool bVar17;
  char acStack_8 [8];
  char *pcVar9;
  
  uVar15 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar14 = (byte)((ulonglong)param_2 >> 8);
  bVar13 = (byte)param_2;
  pbVar1 = (byte *)(unaff_RDI + 1);
  uVar3 = in((short)param_2);
  *unaff_RDI = uVar3;
  iVar4 = *(int *)in_RAX;
  uVar7 = (uint)in_RAX;
  *param_2 = *param_2;
  bVar5 = (byte)in_RAX;
  if (SBORROW4(iVar4,uVar7)) {
    param_1[3] = param_1[3] + bVar5;
    bVar10 = (byte)((ulonglong)in_RAX >> 8);
    if (!SBORROW1(bVar10,*in_RAX)) {
      *param_1 = *param_1 + bVar5;
      bVar16 = CARRY1(bVar13,*in_RAX);
      bVar13 = bVar13 + *in_RAX;
      bVar17 = CARRY4(uRam00000001445115d7,uVar7);
      uVar12 = uRam00000001445115d7 + uVar7;
      uRam00000001445115d7 = uVar12 + bVar16;
      builtin_strncpy(acStack_8,"\x06I\x03\b",5);
      acStack_8[5] = '\0';
      acStack_8[6] = '\0';
      acStack_8[7] = '\0';
      *(uint *)CONCAT62(uVar15,CONCAT11(bVar14,bVar13)) =
           *(int *)CONCAT62(uVar15,CONCAT11(bVar14,bVar13)) + uVar7 +
           (uint)(bVar17 || CARRY4(uVar12,(uint)bVar16));
      piVar8 = (int *)CONCAT71((int7)((ulonglong)in_RAX >> 8),
                               bVar5 + 0x4d + *(char *)CONCAT62(uVar15,CONCAT11(bVar14,bVar13)));
      uVar7 = (uint)piVar8;
      *(int *)((longlong)piVar8 * 2) =
           (*(int *)((longlong)piVar8 * 2) - uVar7) -
           (uint)CARRY1(bVar5 + 0x4d,*(byte *)CONCAT62(uVar15,CONCAT11(bVar14,bVar13)));
      *param_1 = *param_1 + (unaff_BL | bVar10);
      uVar12 = (uint)param_1 & *(uint *)CONCAT62(uVar15,CONCAT11(bVar14,bVar13));
      param_1 = (char *)(ulonglong)uVar12;
      pbVar2 = (byte *)(param_1 + (longlong)piVar8);
      bVar5 = *pbVar2;
      *pbVar2 = *pbVar2 + bVar13;
      *piVar8 = *piVar8 + uVar7 + (uint)CARRY1(bVar5,bVar13);
      in_RAX = (byte *)(ulonglong)(uVar7 | 0x9e00bf0);
      *pbVar1 = *pbVar1 << 1 | (char)*pbVar1 < '\0';
      bVar14 = bVar14 + *in_RAX;
      *unaff_RSI = *unaff_RSI >> ((byte)uVar12 & 0x1f);
      acStack_8[unaff_RBP] = acStack_8[unaff_RBP] + unaff_BH;
    }
  }
  else {
    in_RAX[-0x2e] = in_RAX[-0x2e] ^ bVar5;
    (&stack0x00000000)[unaff_RBP] = (&stack0x00000000)[unaff_RBP] + unaff_BH;
  }
  *(char *)CONCAT71(in_register_00000091,in_R10B) =
       *(char *)CONCAT71(in_register_00000091,in_R10B) + unaff_R15B;
  cVar6 = (char)in_RAX;
  *in_RAX = *in_RAX + cVar6;
  *(char *)(unaff_RBP + 0x2c) = *(char *)(unaff_RBP + 0x2c) - cVar6;
  *(char *)(param_4 + 0x2c) = *(char *)(param_4 + 0x2c) + in_R10B;
  param_1[CONCAT71(in_register_00000091,in_R10B)] =
       param_1[CONCAT71(in_register_00000091,in_R10B)] + (char)param_3;
  pbVar1 = (byte *)(CONCAT62(uVar15,CONCAT11(bVar14,bVar13)) + 0x39);
  *pbVar1 = *pbVar1 ^ bVar14;
  uVar11 = (undefined7)((ulonglong)in_RAX >> 8);
  pcVar9 = (char *)(CONCAT71(uVar11,cVar6 * '\x02') + -0x12f7ffd5);
  *pcVar9 = *pcVar9 + -2;
  cVar6 = cVar6 * '\x02' + *param_3;
  pcVar9 = (char *)CONCAT71(uVar11,cVar6);
  *pcVar9 = *pcVar9 + cVar6;
  *param_1 = *param_1 + bVar13;
  uRam00000001458f3637 = uRam00000001458f3637 | (uint)pcVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

