// Function: FUN_1404b518c
// Addr: 1404b518c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b51f1) overlaps instruction at (ram,0x0001404b51ec)
    */

void FUN_1404b518c(undefined8 param_1,char *param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  byte bVar7;
  char *in_RAX;
  byte bVar8;
  char cVar9;
  byte unaff_BL;
  undefined7 unaff_00000019;
  undefined1 *puVar10;
  undefined8 *puVar11;
  longlong unaff_RBP;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  bool in_CF;
  bool bVar12;
  bool in_ZF;
  undefined1 auStack_8 [8];
  uint uVar6;
  
  cVar9 = (char)((ulonglong)param_2 >> 8);
  bVar8 = (byte)((ulonglong)param_1 >> 8);
  *unaff_RDI = *unaff_RSI;
  if (in_CF || in_ZF) {
code_r0x0001404b51a9:
    *param_2 = *param_2 + (char)in_RAX;
    *in_RAX = *in_RAX + (char)in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  in_RAX[(longlong)param_2 * 2 + 0x521004b] = in_RAX[(longlong)param_2 * 2 + 0x521004b] + unaff_BL;
  uVar6 = (uint)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + *in_RAX);
  uVar5 = uVar6 + 0xa5000ed4;
  in_RAX = (char *)(ulonglong)uVar5;
  if (uVar6 < 0x5afff12c && uVar5 != 0) {
    bVar12 = CARRY1(bVar8,unaff_BL);
    bVar8 = bVar8 + unaff_BL;
    if (bVar12 || bVar8 == 0) {
      in_RAX[0x21004b50] = in_RAX[0x21004b50] + cVar9;
      goto code_r0x0001404b51a9;
    }
  }
  else {
    puVar10 = auStack_8;
    register0x00000020 = (BADSPACEBASE *)auStack_8;
    *param_4 = *param_4 + (char)puVar10;
  }
  cVar4 = (char)uVar5;
  *in_RAX = *in_RAX + cVar4;
  pbVar1 = (byte *)(unaff_RBP + -0x22ffe58a);
  bVar3 = *pbVar1;
  bVar7 = (byte)(uVar5 >> 8);
  *pbVar1 = *pbVar1 + bVar7;
  if (CARRY1(bVar3,bVar7) || *pbVar1 == 0) {
    in_RAX[0x21004b50] = in_RAX[0x21004b50] + cVar9;
    *in_RAX = *in_RAX + cVar4;
    pbVar1 = (byte *)(CONCAT71(unaff_00000019,unaff_BL) + -0x5affe58a);
    bVar3 = *pbVar1;
    *pbVar1 = *pbVar1 + unaff_BL;
    if (!CARRY1(bVar3,unaff_BL) && *pbVar1 != 0) {
      in_RAX[(longlong)param_2 * 2 + 0x21004b] = in_RAX[(longlong)param_2 * 2 + 0x21004b] + unaff_BL
      ;
      *in_RAX = *in_RAX + cVar4;
      *(char *)((longlong)unaff_RSI + 0x1e) = *(char *)((longlong)unaff_RSI + 0x1e) + cVar9;
      goto code_r0x0001404b51e3;
    }
  }
  else {
    if (CARRY1(bVar3,bVar7) || *pbVar1 == 0) {
      uRam0000000104505208 = uRam0000000104505208 & uVar5;
      goto code_r0x0001404b5206;
    }
code_r0x0001404b51e3:
    pcVar2 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + 0x68001a76);
    *pcVar2 = *pcVar2 + unaff_BL;
    uRam00000001a45051f4 = uRam00000001a45051f4 & uVar5;
  }
  *(char *)((ulonglong)uVar5 + 0x1a) = *(char *)((ulonglong)uVar5 + 0x1a) >> 1;
  pcVar2 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + 0x79);
  *pcVar2 = *pcVar2 + bVar8;
  puVar11 = (undefined8 *)((longlong)register0x00000020 + -8);
  register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + -8);
  *puVar11 = 0x21004a02;
code_r0x0001404b5206:
  *(char *)(unaff_RBP + 0x79) = *(char *)(unaff_RBP + 0x79) + cVar9;
  *param_4 = *param_4 + (char)register0x00000020;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

