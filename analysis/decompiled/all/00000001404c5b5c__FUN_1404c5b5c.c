// Function: FUN_1404c5b5c
// Addr: 1404c5b5c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c5ba5) overlaps instruction at (ram,0x0001404c5ba3)
    */

void FUN_1404c5b5c(byte *param_1,char *param_2)

{
  byte *pbVar1;
  char *pcVar2;
  uint uVar3;
  undefined3 uVar4;
  uint *puVar5;
  byte bVar6;
  char cVar7;
  byte bVar12;
  int in_EAX;
  uint uVar8;
  undefined4 uVar9;
  longlong lVar11;
  byte bVar13;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char unaff_SPL;
  int *unaff_RSI;
  longlong unaff_RDI;
  char *pcVar10;
  
  uVar8 = in_EAX + 0x90000634;
  pcVar10 = (char *)(ulonglong)uVar8;
  uVar4 = (undefined3)(uVar8 >> 8);
  bVar13 = (byte)param_2;
  if (param_1 == (byte *)0x0) {
    cVar7 = in(0x2e);
    pcVar10 = (char *)(ulonglong)CONCAT31(uVar4,cVar7);
    pcVar10[0x210049e1] = pcVar10[0x210049e1] + cVar7;
    param_1 = (byte *)0x0;
  }
  else {
    pcVar2 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x68b3ffd2);
    *pcVar2 = *pcVar2 + unaff_BH;
    *param_1 = *param_1 + unaff_SPL;
    *pcVar10 = *pcVar10 + (char)uVar8;
    pcVar2 = pcVar10 + -0x43ffd11d;
    *pcVar2 = *pcVar2 + bVar13;
    bVar12 = (byte)(uVar8 >> 8);
    if (param_1 == (byte *)0x0) {
      param_1 = (byte *)0xffffffffffffffff;
      if (*pcVar2 == '\0') goto code_r0x0001404c5bf0;
      cRamffffffffffffffff = cRamffffffffffffffff + bVar12;
    }
    else {
      pcVar10 = (char *)(unaff_RDI + 0x4a + (longlong)param_2 * 4);
      *pcVar10 = *pcVar10 + (char)param_1;
      bVar6 = *param_1;
      *param_1 = *param_1 + bVar12;
      *unaff_RSI = (*unaff_RSI - uVar8) - (uint)CARRY1(bVar6,bVar12);
      *param_1 = *param_1 + unaff_BL;
      if (*param_1 != 0) {
        *param_2 = *param_2 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      cRam00000000c04c61c1 = cRam00000000c04c61c1 + (char)uVar8;
      bVar6 = in(0x2e);
      pcVar10 = (char *)(ulonglong)CONCAT31(uVar4,bVar6);
      pcVar2 = (char *)(unaff_RDI + -0x7fffd11c);
      *pcVar2 = *pcVar2 + bVar13;
      param_1 = param_1 + -1;
      if (param_1 != (byte *)0x0 && *pcVar2 == '\0') {
        bVar6 = bVar6 & bVar13;
        uVar8 = CONCAT31(uVar4,bVar6);
        pcVar10 = (char *)(ulonglong)uVar8;
        *pcVar10 = *pcVar10 + unaff_BL;
        *pcVar10 = *pcVar10 + bVar6;
        *(uint *)(param_1 + (longlong)pcVar10) = *(int *)(param_1 + (longlong)pcVar10) + uVar8;
        *param_2 = *param_2 + bVar6;
        *pcVar10 = *pcVar10 + bVar6;
code_r0x0001404c5bf0:
        uRam00000001a4515bf8 = uRam00000001a4515bf8 & uVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *param_1 = *param_1 + bVar12;
    }
  }
  *pcVar10 = *pcVar10 + (char)pcVar10;
  pcVar10[-0x68ffd11c] = pcVar10[-0x68ffd11c] + (char)pcVar10;
  bVar6 = in(0x2e);
  lVar11 = CONCAT71((int7)((ulonglong)pcVar10 >> 8),bVar6);
  pbVar1 = (byte *)(lVar11 + 0x210049e1);
  bVar12 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar6;
  puVar5 = (uint *)(lVar11 * 2);
  uVar8 = *puVar5;
  uVar3 = *puVar5 + (uint)lVar11;
  *puVar5 = uVar3 + CARRY1(bVar12,bVar6);
  *(uint *)(param_1 + lVar11) =
       *(int *)(param_1 + lVar11) + (int)param_2 +
       (uint)(CARRY4(uVar8,(uint)lVar11) || CARRY4(uVar3,(uint)CARRY1(bVar12,bVar6)));
  uVar9 = in(0x2e);
  *param_1 = *param_1 + bVar13;
  out(0x2e,(char)uVar9);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

