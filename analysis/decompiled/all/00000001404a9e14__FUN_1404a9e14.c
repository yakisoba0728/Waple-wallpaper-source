// Function: FUN_1404a9e14
// Addr: 1404a9e14
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a9e14(byte *param_1,longlong param_2)

{
  byte *pbVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  undefined3 uVar5;
  char cVar6;
  byte bVar7;
  uint uVar8;
  uint *in_RAX;
  undefined7 uVar9;
  char cVar10;
  byte bVar11;
  longlong unaff_RBX;
  int unaff_ESI;
  undefined4 unaff_00000034;
  undefined1 in_MM1_Ba;
  undefined1 in_MM1_Bb;
  undefined1 in_MM1_Bc;
  undefined1 in_MM1_Bd;
  undefined1 in_MM1_Be;
  undefined1 in_MM1_Bf;
  undefined1 in_MM1_Bg;
  undefined1 in_MM1_Bh;
  
  cVar10 = (char)((ulonglong)param_1 >> 8);
  *in_RAX = *in_RAX & (uint)param_1;
  uVar9 = (undefined7)((ulonglong)in_RAX >> 8);
  cVar6 = (char)in_RAX + (char)*in_RAX;
  pbVar1 = (byte *)(CONCAT71(uVar9,cVar6) + param_2);
  bVar11 = (byte)((ulonglong)param_2 >> 8);
  *pbVar1 = *pbVar1 | bVar11;
  cVar6 = cVar6 + (char)((ulonglong)in_RAX >> 8);
  uVar8 = (uint)CONCAT71(uVar9,cVar6) | 0xd451a00;
  pcVar2 = (char *)(unaff_RBX * 4 + 0x21004a);
  *pcVar2 = *pcVar2 + bVar11;
  uVar5 = (undefined3)(uVar8 >> 8);
  cVar6 = cVar6 + *(char *)(ulonglong)uVar8;
  pcVar2 = (char *)((ulonglong)CONCAT31(uVar5,cVar6) + param_2);
  *pcVar2 = *pcVar2 + bVar11;
  bVar7 = cVar6 + (char)(uVar8 >> 8);
  uVar8 = CONCAT31(uVar5,bVar7) | 0xd451a00;
  pcVar2 = (char *)(unaff_RBX * 4 + 0x2001004a);
  *pcVar2 = *pcVar2 + bVar11;
  bVar7 = bVar7 | *(byte *)(ulonglong)uVar8;
  *param_1 = *param_1 & bVar7;
  iVar4 = *(int *)(ulonglong)CONCAT31((int3)(uVar8 >> 8),bVar7);
  pavgb(in_MM1_Ba,(char)uRam000000014a0aaa1d);
  pavgb(in_MM1_Bb,(char)((ulonglong)uRam000000014a0aaa1d >> 8));
  pavgb(in_MM1_Bc,(char)((ulonglong)uRam000000014a0aaa1d >> 0x10));
  pavgb(in_MM1_Bd,(char)((ulonglong)uRam000000014a0aaa1d >> 0x18));
  pavgb(in_MM1_Be,(char)((ulonglong)uRam000000014a0aaa1d >> 0x20));
  pavgb(in_MM1_Bf,(char)((ulonglong)uRam000000014a0aaa1d >> 0x28));
  pavgb(in_MM1_Bg,(char)((ulonglong)uRam000000014a0aaa1d >> 0x30));
  pavgb(in_MM1_Bh,(char)((ulonglong)uRam000000014a0aaa1d >> 0x38));
  if (!SCARRY4(iVar4,unaff_ESI)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)CONCAT44(unaff_00000034,unaff_ESI) = *(char *)CONCAT44(unaff_00000034,unaff_ESI) + cVar10
  ;
  *(char *)CONCAT44(unaff_00000034,unaff_ESI) = *(char *)CONCAT44(unaff_00000034,unaff_ESI) + cVar10
  ;
  piVar3 = (int *)(((ulonglong)(uint)(iVar4 + unaff_ESI) ^ 0x9d) * 2 + -0x1fe20fe1);
  *piVar3 = *piVar3 + (int)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

