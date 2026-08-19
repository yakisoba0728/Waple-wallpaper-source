// Function: FUN_1404a7ff0
// Addr: 1404a7ff0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a8051) overlaps instruction at (ram,0x0001404a8050)
    */
/* WARNING: Removing unreachable block (ram,0x0001404a8109) */

undefined8 FUN_1404a7ff0(char *param_1,uint param_2)

{
  undefined3 uVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  undefined8 in_RAX;
  byte *pbVar7;
  undefined7 uVar9;
  char *pcVar8;
  char cVar10;
  undefined7 uVar11;
  char cVar12;
  char unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  char *unaff_RSI;
  char *pcVar13;
  char *unaff_RDI;
  char in_CF;
  bool bVar14;
  byte *pbVar6;
  
  uVar11 = (undefined7)((ulonglong)param_1 >> 8);
  cVar10 = (char)param_1;
  uVar5 = *(uint *)(&stack0x00000000 + (longlong)param_1);
  pcVar8 = (char *)(ulonglong)(param_2 | uVar5);
  cVar2 = (char)in_RAX + '4';
  uVar4 = (uint)CONCAT71((int7)(CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                                         CONCAT11((char)((ulonglong)in_RAX >> 8) +
                                                  param_1[CONCAT62(unaff_0000001a,
                                                                   CONCAT11(unaff_BH,unaff_BL))] +
                                                  in_CF,(char)in_RAX)) >> 8),cVar2) | 0xaeb1000;
  pbVar7 = (byte *)(ulonglong)uVar4;
  bVar14 = SCARRY1(cRam00000001444a8af0,unaff_BL);
  cRam00000001444a8af0 = cRam00000001444a8af0 + unaff_BL;
  if (cRam00000001444a8af0 != '\0' && bVar14 == cRam00000001444a8af0 < '\0') {
    if (cRam00000001444a8af0 != '\0' && bVar14 == cRam00000001444a8af0 < '\0')
    goto code_r0x0001404a809d;
  }
  else {
    *param_1 = *param_1 + (char)(uVar4 >> 8);
    *pbVar7 = *pbVar7 + cVar2;
    *pbVar7 = *pbVar7 + (char)(param_2 | uVar5);
    pcVar13 = (char *)(ulonglong)
                      ((uint)unaff_RSI |
                      *(uint *)((ulonglong)(uVar4 | *(uint *)((longlong)pbVar7 * 2)) * 2));
    unaff_RSI = pcVar13 + 1;
    *unaff_RDI = *pcVar13;
    func_0x0001456b807b();
    uVar5 = in(0xf3);
    uVar1 = (undefined3)(uVar5 >> 8);
    bVar3 = (byte)uVar5 | *(byte *)(ulonglong)uVar5;
    pbVar6 = (byte *)(ulonglong)CONCAT31(uVar1,bVar3);
    if ('\0' < (char)bVar3) {
      in(0xc);
      *pcVar8 = *pcVar8 + cVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(char *)CONCAT71(uVar11,cVar10) = *(char *)CONCAT71(uVar11,cVar10) + (char)(uVar5 >> 8);
    *pbVar6 = *pbVar6 + bVar3;
    unaff_RDI[-0x1afff50d] = unaff_RDI[-0x1afff50d] + (char)((ulonglong)pcVar8 >> 8);
    pbVar7 = (byte *)(ulonglong)CONCAT31(uVar1,bVar3 | *pbVar6);
    unaff_RDI = unaff_RDI + 1;
    if ('\0' < (char)(bVar3 | *pbVar6)) {
code_r0x0001404a809d:
      uVar9 = (undefined7)((ulonglong)pbVar7 >> 8);
      bVar3 = (byte)pbVar7 | *pbVar7;
      pcVar8 = (char *)CONCAT71(uVar9,bVar3);
      *(undefined1 *)CONCAT71(uVar11,cVar10) = *(undefined1 *)CONCAT71(uVar11,cVar10);
      *unaff_RSI = *unaff_RSI + bVar3;
      *pcVar8 = *pcVar8 + bVar3;
      cVar2 = in(0xc);
      pcVar8 = (char *)CONCAT71(uVar9,cVar2);
      *pcVar8 = *pcVar8 + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  cVar2 = (char)((ulonglong)pbVar7 >> 8);
  *(char *)CONCAT71(uVar11,cVar10) = *(char *)CONCAT71(uVar11,cVar10) + cVar2;
  *pcVar8 = *pcVar8 + (char)pbVar7;
  *pbVar7 = *pbVar7 + (char)pbVar7;
  uVar9 = (undefined7)((ulonglong)pbVar7 >> 8);
  cVar12 = (char)((ulonglong)pcVar8 >> 8);
  unaff_RDI[-0x1afff50e] = unaff_RDI[-0x1afff50e] + cVar12;
  bVar3 = (byte)(byte *)((ulonglong)pbVar7 ^ 2) | *(byte *)((ulonglong)pbVar7 ^ 2);
  pbVar7 = (byte *)CONCAT71(uVar9,bVar3);
  if ((char)bVar3 < '\x01') {
    *(char *)CONCAT71(uVar11,cVar10) = *(char *)CONCAT71(uVar11,cVar10) + cVar2;
    *pbVar7 = *pbVar7 + bVar3;
    pbVar7[-0x48fff50e] = pbVar7[-0x48fff50e] + cVar12;
    *unaff_RDI = *unaff_RSI;
    func_0x00014d4b80c3();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar3 == 0) {
    *(char *)CONCAT71(uVar11,cVar10) = *(char *)CONCAT71(uVar11,cVar10) + cVar2;
    *pbVar7 = *pbVar7;
    pbVar7[-0xb] = pbVar7[-0xb];
    return CONCAT71(uVar9,*pbVar7);
  }
  pbVar7[-0xb] = pbVar7[-0xb] + bVar3;
  return CONCAT71(uVar9,bVar3 | *pbVar7);
}

