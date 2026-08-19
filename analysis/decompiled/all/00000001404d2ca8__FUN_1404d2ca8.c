// Function: FUN_1404d2ca8
// Addr: 1404d2ca8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404d2d57) */
/* WARNING: Removing unreachable block (ram,0x0001404d2d3d) */
/* WARNING: Removing unreachable block (ram,0x0001404d2d46) */
/* WARNING: Removing unreachable block (ram,0x0001404d2d72) */
/* WARNING: Removing unreachable block (ram,0x0001404d2d82) */
/* WARNING: Removing unreachable block (ram,0x0001404d2cb2) */

void FUN_1404d2ca8(char *param_1,char *param_2,char *param_3,longlong param_4)

{
  byte *pbVar1;
  undefined3 uVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  char *in_RAX;
  undefined7 uVar8;
  int *piVar6;
  byte bVar9;
  char unaff_BH;
  longlong unaff_RBP;
  byte *unaff_RSI;
  byte *unaff_RDI;
  char in_R10B;
  undefined7 in_register_00000091;
  char unaff_R15B;
  char *pcVar7;
  
  bVar9 = (byte)param_2;
  *in_RAX = *in_RAX + (char)in_RAX;
  uVar8 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar3 = (char)in_RAX + 0xb3;
  *param_2 = *param_2 + (byte)param_1;
  piVar6 = (int *)CONCAT71(uVar8,bVar3 | *(byte *)CONCAT71(uVar8,bVar3));
  pbVar1 = (byte *)(param_1 + (longlong)piVar6);
  bVar3 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar9;
  *piVar6 = *piVar6 + (uint)piVar6 + (uint)CARRY1(bVar3,bVar9);
  uVar5 = (uint)piVar6 | 0x9e00bf0;
  pcVar7 = (char *)(ulonglong)uVar5;
  *unaff_RDI = *unaff_RDI << 1 | (char)*unaff_RDI < '\0';
  bVar3 = (char)((ulonglong)param_2 >> 8) + *pcVar7;
  *unaff_RSI = *unaff_RSI >> ((byte)param_1 & 0x1f);
  (&stack0x00000000)[unaff_RBP] = (&stack0x00000000)[unaff_RBP] + unaff_BH;
  *(char *)CONCAT71(in_register_00000091,in_R10B) =
       *(char *)CONCAT71(in_register_00000091,in_R10B) + unaff_R15B;
  cVar4 = (char)uVar5;
  *pcVar7 = *pcVar7 + cVar4;
  *(char *)(unaff_RBP + 0x2c) = *(char *)(unaff_RBP + 0x2c) - cVar4;
  *(char *)(param_4 + 0x2c) = *(char *)(param_4 + 0x2c) + in_R10B;
  param_1[CONCAT71(in_register_00000091,in_R10B)] =
       param_1[CONCAT71(in_register_00000091,in_R10B)] + (char)param_3;
  pbVar1 = (byte *)(CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(bVar3,bVar9)) + 0x39);
  *pbVar1 = *pbVar1 ^ bVar3;
  uVar2 = (undefined3)(uVar5 >> 8);
  pcVar7 = (char *)((ulonglong)CONCAT31(uVar2,cVar4 * '\x02') - 0x12f7ffd5);
  *pcVar7 = *pcVar7 + -2;
  cVar4 = cVar4 * '\x02' + *param_3;
  uVar5 = CONCAT31(uVar2,cVar4);
  *(char *)(ulonglong)uVar5 = *(char *)(ulonglong)uVar5 + cVar4;
  *param_1 = *param_1 + bVar9;
  uRam00000001458f3637 = uRam00000001458f3637 | uVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

