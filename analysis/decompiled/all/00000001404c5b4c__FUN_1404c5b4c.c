// Function: FUN_1404c5b4c
// Addr: 1404c5b4c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c5ba5) overlaps instruction at (ram,0x0001404c5ba3)
    */

void FUN_1404c5b4c(byte *param_1,char *param_2)

{
  byte *pbVar1;
  char *pcVar2;
  uint uVar3;
  uint *puVar5;
  undefined3 uVar6;
  byte bVar7;
  char cVar8;
  uint uVar9;
  undefined4 uVar10;
  byte bVar13;
  undefined8 in_RAX;
  longlong lVar11;
  byte bVar14;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char unaff_SPL;
  int unaff_ESI;
  undefined4 unaff_00000034;
  longlong unaff_RDI;
  byte in_CF;
  uint uVar4;
  char *pcVar12;
  
  lVar11 = CONCAT71((int7)((ulonglong)in_RAX >> 8),uRam21004a5ac4002ee9);
  puVar5 = (uint *)(lVar11 * 2);
  uVar3 = *puVar5;
  uVar9 = (uint)lVar11;
  uVar4 = *puVar5;
  *puVar5 = uVar4 + uVar9 + (uint)in_CF;
  *(int *)(unaff_RDI + lVar11) =
       *(int *)(unaff_RDI + lVar11) + unaff_ESI +
       (uint)(CARRY4(uVar3,uVar9) || CARRY4(uVar4 + uVar9,(uint)in_CF));
  uVar9 = uVar9 + 0x90000634;
  pcVar12 = (char *)(ulonglong)uVar9;
  uVar6 = (undefined3)(uVar9 >> 8);
  bVar14 = (byte)param_2;
  if (param_1 == (byte *)0x0) {
    cVar8 = in(0x2e);
    pcVar12 = (char *)(ulonglong)CONCAT31(uVar6,cVar8);
    pcVar12[0x210049e1] = pcVar12[0x210049e1] + cVar8;
    param_1 = (byte *)0x0;
  }
  else {
    pcVar2 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x68b3ffd2);
    *pcVar2 = *pcVar2 + unaff_BH;
    *param_1 = *param_1 + unaff_SPL;
    *pcVar12 = *pcVar12 + (char)uVar9;
    pcVar2 = pcVar12 + -0x43ffd11d;
    *pcVar2 = *pcVar2 + bVar14;
    bVar13 = (byte)(uVar9 >> 8);
    if (param_1 == (byte *)0x0) {
      param_1 = (byte *)0xffffffffffffffff;
      if (*pcVar2 == '\0') goto code_r0x0001404c5bf0;
      cRamffffffffffffffff = cRamffffffffffffffff + bVar13;
    }
    else {
      pcVar12 = (char *)(unaff_RDI + 0x4a + (longlong)param_2 * 4);
      *pcVar12 = *pcVar12 + (char)param_1;
      bVar7 = *param_1;
      *param_1 = *param_1 + bVar13;
      *(uint *)CONCAT44(unaff_00000034,unaff_ESI) =
           (*(int *)CONCAT44(unaff_00000034,unaff_ESI) - uVar9) - (uint)CARRY1(bVar7,bVar13);
      *param_1 = *param_1 + unaff_BL;
      if (*param_1 != 0) {
        *param_2 = *param_2 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      cRam00000000c04c61c1 = cRam00000000c04c61c1 + (char)uVar9;
      bVar7 = in(0x2e);
      pcVar12 = (char *)(ulonglong)CONCAT31(uVar6,bVar7);
      pcVar2 = (char *)(unaff_RDI + -0x7fffd11c);
      *pcVar2 = *pcVar2 + bVar14;
      param_1 = param_1 + -1;
      if (param_1 != (byte *)0x0 && *pcVar2 == '\0') {
        bVar7 = bVar7 & bVar14;
        uVar9 = CONCAT31(uVar6,bVar7);
        pcVar12 = (char *)(ulonglong)uVar9;
        *pcVar12 = *pcVar12 + unaff_BL;
        *pcVar12 = *pcVar12 + bVar7;
        *(uint *)(param_1 + (longlong)pcVar12) = *(int *)(param_1 + (longlong)pcVar12) + uVar9;
        *param_2 = *param_2 + bVar7;
        *pcVar12 = *pcVar12 + bVar7;
code_r0x0001404c5bf0:
        uRam00000001a4515bf8 = uRam00000001a4515bf8 & uVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *param_1 = *param_1 + bVar13;
    }
  }
  *pcVar12 = *pcVar12 + (char)pcVar12;
  pcVar12[-0x68ffd11c] = pcVar12[-0x68ffd11c] + (char)pcVar12;
  bVar7 = in(0x2e);
  lVar11 = CONCAT71((int7)((ulonglong)pcVar12 >> 8),bVar7);
  pbVar1 = (byte *)(lVar11 + 0x210049e1);
  bVar13 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar7;
  puVar5 = (uint *)(lVar11 * 2);
  uVar3 = *puVar5;
  uVar4 = *puVar5 + (uint)lVar11;
  *puVar5 = uVar4 + CARRY1(bVar13,bVar7);
  *(uint *)(param_1 + lVar11) =
       *(int *)(param_1 + lVar11) + (int)param_2 +
       (uint)(CARRY4(uVar3,(uint)lVar11) || CARRY4(uVar4,(uint)CARRY1(bVar13,bVar7)));
  uVar10 = in(0x2e);
  *param_1 = *param_1 + bVar14;
  out(0x2e,(char)uVar10);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

