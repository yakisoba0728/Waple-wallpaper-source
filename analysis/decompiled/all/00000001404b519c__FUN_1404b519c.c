// Function: FUN_1404b519c
// Addr: 1404b519c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b51f1) overlaps instruction at (ram,0x0001404b51ec)
    */

void FUN_1404b519c(undefined8 param_1,char *param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  char *in_RAX;
  byte bVar6;
  char cVar7;
  byte unaff_BL;
  undefined7 unaff_00000019;
  undefined1 *puVar8;
  undefined8 *puVar9;
  longlong unaff_RBP;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  bool in_CF;
  bool bVar10;
  bool in_ZF;
  undefined1 auStack_8 [8];
  
  cVar7 = (char)((ulonglong)param_2 >> 8);
  bVar6 = (byte)((ulonglong)param_1 >> 8);
  *unaff_RDI = *unaff_RSI;
  cVar4 = (char)in_RAX;
  if (in_CF || in_ZF) {
    puVar8 = auStack_8;
    register0x00000020 = (BADSPACEBASE *)auStack_8;
    *param_4 = *param_4 + (char)puVar8;
  }
  else {
    bVar10 = CARRY1(bVar6,unaff_BL);
    bVar6 = bVar6 + unaff_BL;
    if (bVar10 || bVar6 == 0) {
      in_RAX[0x21004b50] = in_RAX[0x21004b50] + cVar7;
      *param_2 = *param_2 + cVar4;
      *in_RAX = *in_RAX + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  *in_RAX = *in_RAX + cVar4;
  pbVar1 = (byte *)(unaff_RBP + -0x22ffe58a);
  bVar3 = *pbVar1;
  bVar5 = (byte)((ulonglong)in_RAX >> 8);
  *pbVar1 = *pbVar1 + bVar5;
  if (CARRY1(bVar3,bVar5) || *pbVar1 == 0) {
    in_RAX[0x21004b50] = in_RAX[0x21004b50] + cVar7;
    *in_RAX = *in_RAX + cVar4;
    pbVar1 = (byte *)(CONCAT71(unaff_00000019,unaff_BL) + -0x5affe58a);
    bVar3 = *pbVar1;
    *pbVar1 = *pbVar1 + unaff_BL;
    if (!CARRY1(bVar3,unaff_BL) && *pbVar1 != 0) {
      in_RAX[(longlong)param_2 * 2 + 0x21004b] = in_RAX[(longlong)param_2 * 2 + 0x21004b] + unaff_BL
      ;
      *in_RAX = *in_RAX + cVar4;
      *(char *)((longlong)unaff_RSI + 0x1e) = *(char *)((longlong)unaff_RSI + 0x1e) + cVar7;
      goto code_r0x0001404b51e3;
    }
  }
  else {
    if (CARRY1(bVar3,bVar5) || *pbVar1 == 0) {
      uRam0000000104505208 = uRam0000000104505208 & (uint)in_RAX;
      goto code_r0x0001404b5206;
    }
code_r0x0001404b51e3:
    pcVar2 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + 0x68001a76);
    *pcVar2 = *pcVar2 + unaff_BL;
    uRam00000001a45051f4 = uRam00000001a45051f4 & (uint)in_RAX;
  }
  in_RAX[0x1a] = in_RAX[0x1a] >> 1;
  pcVar2 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + 0x79);
  *pcVar2 = *pcVar2 + bVar6;
  puVar9 = (undefined8 *)((longlong)register0x00000020 + -8);
  register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + -8);
  *puVar9 = 0x21004a02;
code_r0x0001404b5206:
  *(char *)(unaff_RBP + 0x79) = *(char *)(unaff_RBP + 0x79) + cVar7;
  *param_4 = *param_4 + (char)register0x00000020;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

