// Function: FUN_1404d2ccc
// Addr: 1404d2ccc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404d2d3d) */
/* WARNING: Removing unreachable block (ram,0x0001404d2d46) */
/* WARNING: Removing unreachable block (ram,0x0001404d2d72) */
/* WARNING: Removing unreachable block (ram,0x0001404d2d82) */
/* WARNING: Removing unreachable block (ram,0x0001404d2d57) */

void FUN_1404d2ccc(char *param_1,uint *param_2,char *param_3,longlong param_4)

{
  byte *pbVar1;
  undefined3 uVar2;
  byte bVar3;
  char cVar4;
  uint in_EAX;
  int iVar5;
  uint uVar6;
  int *piVar7;
  uint uVar9;
  byte bVar11;
  byte unaff_BL;
  char unaff_BH;
  longlong unaff_RBP;
  byte *unaff_RSI;
  byte *unaff_RDI;
  char in_R10B;
  undefined7 in_register_00000091;
  char unaff_R15B;
  char acStack_8 [8];
  char *pcVar8;
  char *pcVar10;
  
  bVar11 = (byte)param_2;
  uVar6 = *param_2;
  *param_2 = *param_2 + in_EAX;
  *param_1 = *param_1 + bVar11 + CARRY4(uVar6,in_EAX);
  iVar5 = in_EAX + 0x403e900;
  builtin_strncpy(acStack_8,"\x06I\x03\b",5);
  acStack_8[5] = '\0';
  acStack_8[6] = '\0';
  acStack_8[7] = '\0';
  *param_2 = *param_2 + iVar5 + (uint)(0xfbfc16ff < in_EAX);
  bVar3 = (char)iVar5 + 0x4d;
  uVar6 = CONCAT31((int3)((uint)iVar5 >> 8),bVar3 + (char)*param_2);
  piVar7 = (int *)(ulonglong)uVar6;
  *(int *)((longlong)piVar7 * 2) =
       (*(int *)((longlong)piVar7 * 2) - uVar6) - (uint)CARRY1(bVar3,(byte)*param_2);
  *param_1 = *param_1 + (unaff_BL | (byte)((uint)iVar5 >> 8));
  uVar9 = (uint)param_1 & *param_2;
  pcVar10 = (char *)(ulonglong)uVar9;
  pbVar1 = (byte *)(pcVar10 + (longlong)piVar7);
  bVar3 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar11;
  *piVar7 = *piVar7 + uVar6 + (uint)CARRY1(bVar3,bVar11);
  uVar6 = uVar6 | 0x9e00bf0;
  pcVar8 = (char *)(ulonglong)uVar6;
  *unaff_RDI = *unaff_RDI << 1 | (char)*unaff_RDI < '\0';
  bVar3 = (char)((ulonglong)param_2 >> 8) + *pcVar8;
  *unaff_RSI = *unaff_RSI >> ((byte)uVar9 & 0x1f);
  acStack_8[unaff_RBP] = acStack_8[unaff_RBP] + unaff_BH;
  *(char *)CONCAT71(in_register_00000091,in_R10B) =
       *(char *)CONCAT71(in_register_00000091,in_R10B) + unaff_R15B;
  cVar4 = (char)uVar6;
  *pcVar8 = *pcVar8 + cVar4;
  *(char *)(unaff_RBP + 0x2c) = *(char *)(unaff_RBP + 0x2c) - cVar4;
  *(char *)(param_4 + 0x2c) = *(char *)(param_4 + 0x2c) + in_R10B;
  pcVar10[CONCAT71(in_register_00000091,in_R10B)] =
       pcVar10[CONCAT71(in_register_00000091,in_R10B)] + (char)param_3;
  pbVar1 = (byte *)(CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(bVar3,bVar11)) + 0x39);
  *pbVar1 = *pbVar1 ^ bVar3;
  uVar2 = (undefined3)(uVar6 >> 8);
  pcVar8 = (char *)((ulonglong)CONCAT31(uVar2,cVar4 * '\x02') - 0x12f7ffd5);
  *pcVar8 = *pcVar8 + -2;
  cVar4 = cVar4 * '\x02' + *param_3;
  uVar6 = CONCAT31(uVar2,cVar4);
  *(char *)(ulonglong)uVar6 = *(char *)(ulonglong)uVar6 + cVar4;
  *pcVar10 = *pcVar10 + bVar11;
  uRam00000001458f3637 = uRam00000001458f3637 | uVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

