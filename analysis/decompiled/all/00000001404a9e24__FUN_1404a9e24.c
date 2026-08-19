// Function: FUN_1404a9e24
// Addr: 1404a9e24
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a9e24(byte *param_1,char *param_2)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  ulonglong in_RAX;
  char *pcVar5;
  char cVar6;
  longlong unaff_RBX;
  char unaff_SPL;
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
  
  cVar6 = (char)((ulonglong)param_1 >> 8);
  pcVar5 = (char *)(in_RAX ^ 0x9d);
  *param_1 = *param_1 + unaff_SPL;
  bVar3 = (byte)pcVar5;
  *param_2 = *param_2 + bVar3;
  *pcVar5 = *pcVar5 + bVar3;
  bVar3 = (bVar3 ^ 0x10) + (char)(in_RAX >> 8);
  uVar4 = (uint)CONCAT71((int7)(in_RAX >> 8),bVar3) | 0xd451a00;
  pcVar5 = (char *)(unaff_RBX * 4 + 0x2001004a);
  *pcVar5 = *pcVar5 + (char)((ulonglong)param_2 >> 8);
  bVar3 = bVar3 | *(byte *)(ulonglong)uVar4;
  *param_1 = *param_1 & bVar3;
  iVar2 = *(int *)(ulonglong)CONCAT31((int3)(uVar4 >> 8),bVar3);
  pavgb(in_MM1_Ba,(char)uRam000000014a0aaa1d);
  pavgb(in_MM1_Bb,(char)((ulonglong)uRam000000014a0aaa1d >> 8));
  pavgb(in_MM1_Bc,(char)((ulonglong)uRam000000014a0aaa1d >> 0x10));
  pavgb(in_MM1_Bd,(char)((ulonglong)uRam000000014a0aaa1d >> 0x18));
  pavgb(in_MM1_Be,(char)((ulonglong)uRam000000014a0aaa1d >> 0x20));
  pavgb(in_MM1_Bf,(char)((ulonglong)uRam000000014a0aaa1d >> 0x28));
  pavgb(in_MM1_Bg,(char)((ulonglong)uRam000000014a0aaa1d >> 0x30));
  pavgb(in_MM1_Bh,(char)((ulonglong)uRam000000014a0aaa1d >> 0x38));
  if (!SCARRY4(iVar2,unaff_ESI)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)CONCAT44(unaff_00000034,unaff_ESI) = *(char *)CONCAT44(unaff_00000034,unaff_ESI) + cVar6;
  *(char *)CONCAT44(unaff_00000034,unaff_ESI) = *(char *)CONCAT44(unaff_00000034,unaff_ESI) + cVar6;
  piVar1 = (int *)(((ulonglong)(uint)(iVar2 + unaff_ESI) ^ 0x9d) * 2 + -0x1fe20fe1);
  *piVar1 = *piVar1 + (int)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

