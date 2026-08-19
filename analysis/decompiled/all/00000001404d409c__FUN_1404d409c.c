// Function: FUN_1404d409c
// Addr: 1404d409c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d409c(undefined8 param_1,undefined8 param_2)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar8;
  longlong in_RAX;
  longlong lVar9;
  byte bVar10;
  int unaff_ESI;
  undefined4 unaff_00000034;
  longlong unaff_RDI;
  undefined1 in_MM1_Ba;
  undefined1 in_MM1_Bb;
  undefined1 in_MM1_Bc;
  undefined1 in_MM1_Bd;
  undefined1 in_MM1_Be;
  undefined1 in_MM1_Bf;
  undefined1 in_MM1_Bg;
  undefined1 in_MM1_Bh;
  uint uVar7;
  
  bVar10 = (byte)((ulonglong)param_1 >> 8);
  *(char *)(unaff_RDI + in_RAX) = *(char *)(unaff_RDI + in_RAX) + (char)param_2;
  pcVar2 = (char *)(CONCAT44(unaff_00000034,unaff_ESI) + in_RAX);
  *pcVar2 = *pcVar2 + (char)((ulonglong)param_2 >> 8);
  lVar9 = CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX * '\x02');
  pbVar1 = (byte *)(lVar9 + 0x110049ed);
  bVar3 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar10;
  uVar4 = (uint)CARRY1(bVar3,bVar10);
  uVar7 = (uint)lVar9;
  uVar8 = uVar7 + 0x62150009;
  iVar6 = uVar8 + uVar4;
  uVar4 = (uint)(0x9deafff6 < uVar7 || CARRY4(uVar8,uVar4));
  iVar5 = iVar6 + unaff_ESI;
  uVar8 = iVar5 + uVar4;
  pavgb(in_MM1_Ba,(char)uRam000000014a0d4c8f);
  pavgb(in_MM1_Bb,(char)((ulonglong)uRam000000014a0d4c8f >> 8));
  pavgb(in_MM1_Bc,(char)((ulonglong)uRam000000014a0d4c8f >> 0x10));
  pavgb(in_MM1_Bd,(char)((ulonglong)uRam000000014a0d4c8f >> 0x18));
  pavgb(in_MM1_Be,(char)((ulonglong)uRam000000014a0d4c8f >> 0x20));
  pavgb(in_MM1_Bf,(char)((ulonglong)uRam000000014a0d4c8f >> 0x28));
  pavgb(in_MM1_Bg,(char)((ulonglong)uRam000000014a0d4c8f >> 0x30));
  pavgb(in_MM1_Bh,(char)((ulonglong)uRam000000014a0d4c8f >> 0x38));
  if (SCARRY4(iVar6,unaff_ESI) == SCARRY4(iVar5,uVar4)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(ulonglong)uVar8 = *(char *)(ulonglong)uVar8 + (char)uVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

