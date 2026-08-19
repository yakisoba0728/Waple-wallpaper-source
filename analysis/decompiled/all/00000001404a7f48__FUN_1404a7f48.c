// Function: FUN_1404a7f48
// Addr: 1404a7f48
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404a8109) */

undefined4 FUN_1404a7f48(uint *param_1,char *param_2)

{
  undefined3 uVar1;
  undefined1 uVar2;
  byte bVar3;
  uint uVar4;
  char cVar7;
  char *in_RAX;
  char *pcVar5;
  char *pcVar8;
  ulonglong uVar9;
  char cVar10;
  char cVar11;
  undefined6 uVar12;
  char unaff_BH;
  char cVar13;
  ulonglong uVar14;
  uint uVar15;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  byte *pbVar6;
  
  uVar12 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar11 = (char)((ulonglong)param_2 >> 8);
  cVar10 = (char)param_2;
  *param_1 = *param_1 & (uint)param_1;
  uVar15 = (uint)unaff_RSI;
  uVar14 = (ulonglong)((uint)&stack0x00000000 | uVar15);
  *in_RAX = *in_RAX + (char)in_RAX;
  uVar4 = in(10);
  pcVar5 = (char *)((longlong)param_1 + -0x7ffff51b);
  *pcVar5 = *pcVar5 + cVar10;
  pcVar8 = (char *)((longlong)param_1 + -1);
  cVar7 = (char)(uVar4 >> 8);
  if (pcVar8 == (char *)0x0 || *pcVar5 != '\0') {
    *pcVar8 = *pcVar8 + cVar7;
    *(ulonglong *)(uVar14 - 8) = uVar14;
    *(ulonglong *)(uVar14 - 0x10) = uVar14 - 8;
    uVar2 = in(1);
    uVar4 = CONCAT31((int3)(uVar4 >> 8),uVar2);
    param_2[-0x3c] = param_2[-0x3c] + (char)pcVar8;
    if (uVar4 + *(int *)(ulonglong)uVar4 == 0) {
      cRam00000001454a86cd = cRam00000001454a86cd + (char)pcVar8;
      *(char *)(param_1 + -0xffffd47) = (char)param_1[-0xffffd47] + cVar10;
      uVar4 = in(10);
      pcVar5 = (char *)(ulonglong)uVar4;
      pcVar5[0x7e] = pcVar5[0x7e] + unaff_BH;
      *pcVar8 = *pcVar8 + (char)(uVar14 - 0x10);
      *param_2 = *param_2 + (char)uVar4;
      *pcVar5 = *pcVar5 + (char)uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *param_2 = *param_2 + cVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar13 = (char)unaff_RSI;
  if (-1 < *pcVar5) {
    *pcVar8 = *pcVar8 + cVar13;
    bVar3 = (byte)uVar4;
    *(char *)((ulonglong)uVar4 * 2) = *(char *)((ulonglong)uVar4 * 2) + bVar3;
    cVar7 = cVar7 + cVar11;
    uVar4 = CONCAT22((short)(uVar4 >> 0x10),CONCAT11(cVar7,bVar3));
    pbVar6 = (byte *)(ulonglong)uVar4;
    *pbVar6 = *pbVar6 + bVar3;
    pbVar6[(longlong)pcVar8] = pbVar6[(longlong)pcVar8] + cVar7;
    uVar9 = (ulonglong)CONCAT31((int3)(uVar4 >> 8),bVar3 | *pbVar6);
    uVar4 = in(10);
    pcVar5 = (char *)(ulonglong)uVar4;
    pcVar5[0x210049e1] = pcVar5[0x210049e1] + (char)uVar4;
    *pcVar5 = *pcVar5 + (char)uVar4;
    *pcVar5 = *pcVar5 + (char)(uVar4 >> 8);
    uVar4 = in(10);
    pcVar5 = (char *)(uVar9 - 0x7ffff51b);
    *pcVar5 = *pcVar5 + cVar10;
    pcVar8 = (char *)(uVar9 - 1);
    if (pcVar8 == (char *)0x0 || *pcVar5 != '\0') {
      *pcVar8 = *pcVar8 + (char)uVar4;
      uVar4 = uVar4 | 0xd20d0002;
      *(uint *)(unaff_RDI + 0xe) = *(uint *)(unaff_RDI + 0xe) & uVar15;
      unaff_RDI[-0x1c] = unaff_RDI[-0x1c] + cVar11;
      *(byte *)(ulonglong)uVar4 = *(byte *)(ulonglong)uVar4 | (byte)uVar4;
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    unaff_RSI = (undefined1 *)(ulonglong)(uVar15 | *(uint *)((ulonglong)uVar4 * 2));
  }
  pcVar5 = unaff_RSI + 1;
  *unaff_RDI = *unaff_RSI;
  *(undefined **)(uVar14 - 8) = &UNK_1404a8032;
  func_0x0001456b807b();
  uVar4 = in(0xf3);
  uVar1 = (undefined3)(uVar4 >> 8);
  bVar3 = (byte)uVar4 | *(byte *)(ulonglong)uVar4;
  pbVar6 = (byte *)(ulonglong)CONCAT31(uVar1,bVar3);
  if ('\0' < (char)bVar3) {
    in(0xc);
    *(char *)CONCAT62(uVar12,CONCAT11(cVar11,cVar10)) =
         *(char *)CONCAT62(uVar12,CONCAT11(cVar11,cVar10)) + (char)pcVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar7 = (char)(uVar4 >> 8);
  *pcVar8 = *pcVar8 + cVar7;
  *pbVar6 = *pbVar6 + bVar3;
  unaff_RDI[-0x1afff50d] = unaff_RDI[-0x1afff50d] + cVar11;
  bVar3 = bVar3 | *pbVar6;
  pbVar6 = (byte *)(ulonglong)CONCAT31(uVar1,bVar3);
  if ('\0' < (char)bVar3) {
    bVar3 = bVar3 | *pbVar6;
    *pcVar8 = *pcVar8 + cVar13;
    *pcVar5 = *pcVar5 + bVar3;
    *(char *)(ulonglong)CONCAT31(uVar1,bVar3) = *(char *)(ulonglong)CONCAT31(uVar1,bVar3) + bVar3;
    cVar7 = in(0xc);
    *(char *)(ulonglong)CONCAT31(uVar1,cVar7) = *(char *)(ulonglong)CONCAT31(uVar1,cVar7) + cVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar8 = *pcVar8 + cVar7;
  *(byte *)CONCAT62(uVar12,CONCAT11(cVar11,cVar10)) =
       *(char *)CONCAT62(uVar12,CONCAT11(cVar11,cVar10)) + bVar3;
  *pbVar6 = *pbVar6 + bVar3;
  pbVar6 = (byte *)((ulonglong)CONCAT31(uVar1,bVar3) ^ 2);
  unaff_RDI[-0x1afff50d] = unaff_RDI[-0x1afff50d] + cVar11;
  bVar3 = (byte)pbVar6 | *pbVar6;
  pbVar6 = (byte *)(ulonglong)CONCAT31(uVar1,bVar3);
  if ('\0' < (char)bVar3) {
    if (bVar3 == 0) {
      *pcVar8 = *pcVar8 + cVar7;
      *pbVar6 = *pbVar6;
      pbVar6[-0xb] = pbVar6[-0xb];
      return CONCAT31(uVar1,*pbVar6);
    }
    pbVar6[-0xb] = pbVar6[-0xb] + bVar3;
    return CONCAT31(uVar1,bVar3 | *pbVar6);
  }
  *pcVar8 = *pcVar8 + cVar7;
  *pbVar6 = *pbVar6 + bVar3;
  pbVar6[-0x48fff50e] = pbVar6[-0x48fff50e] + cVar11;
  unaff_RDI[1] = *pcVar5;
  *(undefined **)(uVar14 - 8) = &UNK_1404a807a;
  func_0x00014d4b80c3();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

