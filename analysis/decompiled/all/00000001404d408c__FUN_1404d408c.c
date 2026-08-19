// Function: FUN_1404d408c
// Addr: 1404d408c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d408c(undefined8 param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  uint uVar7;
  char *in_RAX;
  undefined7 uVar10;
  longlong lVar9;
  byte bVar11;
  char unaff_SPL;
  int unaff_ESI;
  undefined4 unaff_00000034;
  longlong unaff_RDI;
  longlong in_FS_OFFSET;
  undefined1 in_MM1_Ba;
  undefined1 in_MM1_Bb;
  undefined1 in_MM1_Bc;
  undefined1 in_MM1_Bd;
  undefined1 in_MM1_Be;
  undefined1 in_MM1_Bf;
  undefined1 in_MM1_Bg;
  undefined1 in_MM1_Bh;
  uint uVar6;
  char *pcVar8;
  
  bVar11 = (byte)((ulonglong)param_1 >> 8);
  *param_4 = *param_4 + unaff_SPL;
  *in_RAX = *in_RAX + (char)param_1;
  *in_RAX = *in_RAX + (char)in_RAX;
  uVar10 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar4 = in(9);
  pcVar8 = (char *)CONCAT71(uVar10,bVar4);
  *pcVar8 = *pcVar8 + bVar4;
  pcVar8[in_FS_OFFSET] = pcVar8[in_FS_OFFSET] | bVar4;
  pcVar8[unaff_RDI] = pcVar8[unaff_RDI] + (char)param_2;
  pcVar8[CONCAT44(unaff_00000034,unaff_ESI)] =
       pcVar8[CONCAT44(unaff_00000034,unaff_ESI)] + (char)((ulonglong)param_2 >> 8);
  lVar9 = CONCAT71(uVar10,bVar4 * '\x02');
  pbVar1 = (byte *)(lVar9 + 0x110049ed);
  bVar4 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar11;
  uVar2 = (uint)CARRY1(bVar4,bVar11);
  uVar6 = (uint)lVar9;
  uVar7 = uVar6 + 0x62150009;
  iVar5 = uVar7 + uVar2;
  uVar2 = (uint)(0x9deafff6 < uVar6 || CARRY4(uVar7,uVar2));
  iVar3 = iVar5 + unaff_ESI;
  uVar7 = iVar3 + uVar2;
  pavgb(in_MM1_Ba,(char)uRam000000014a0d4c8f);
  pavgb(in_MM1_Bb,(char)((ulonglong)uRam000000014a0d4c8f >> 8));
  pavgb(in_MM1_Bc,(char)((ulonglong)uRam000000014a0d4c8f >> 0x10));
  pavgb(in_MM1_Bd,(char)((ulonglong)uRam000000014a0d4c8f >> 0x18));
  pavgb(in_MM1_Be,(char)((ulonglong)uRam000000014a0d4c8f >> 0x20));
  pavgb(in_MM1_Bf,(char)((ulonglong)uRam000000014a0d4c8f >> 0x28));
  pavgb(in_MM1_Bg,(char)((ulonglong)uRam000000014a0d4c8f >> 0x30));
  pavgb(in_MM1_Bh,(char)((ulonglong)uRam000000014a0d4c8f >> 0x38));
  if (SCARRY4(iVar5,unaff_ESI) == SCARRY4(iVar3,uVar2)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(ulonglong)uVar7 = *(char *)(ulonglong)uVar7 + (char)uVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

