// Function: FUN_1404a7f38
// Addr: 1404a7f38
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404a8109) */

undefined4 FUN_1404a7f38(char *param_1,char *param_2)

{
  undefined3 uVar1;
  byte bVar2;
  undefined1 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  char cVar11;
  uint *in_RAX;
  longlong lVar9;
  byte *pbVar10;
  char *pcVar12;
  char cVar13;
  undefined6 uVar14;
  char unaff_BH;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  char *pcVar7;
  ulonglong uVar8;
  
  uVar14 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar13 = (char)((ulonglong)param_2 >> 8);
  cVar4 = (char)param_2;
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(byte *)in_RAX = (char)*in_RAX + (byte)in_RAX;
  param_1[-0x20] = param_1[-0x20] + unaff_BH;
  bVar2 = (byte)in_RAX | (byte)*in_RAX;
  pcVar7 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar2);
  uVar6 = (uint)unaff_RSI;
  if ((char)bVar2 < '\x01') {
    in(10);
    uVar5 = in(10);
    pcVar7 = (char *)(ulonglong)uVar5;
    pcVar7[0x7e] = pcVar7[0x7e] + unaff_BH;
    *param_1 = *param_1;
    *pcVar7 = *pcVar7 + (char)uVar5;
    param_1[-0x3ffff51b] = param_1[-0x3ffff51b] + cVar4;
    uVar5 = in(10);
    uVar8 = (ulonglong)uVar5;
    *(char *)(uVar8 + 0x7e) = *(char *)(uVar8 + 0x7e) + unaff_BH;
  }
  else {
    *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
    *(uint *)((longlong)pcVar7 * 2) = *(uint *)((longlong)pcVar7 * 2) | (uint)pcVar7;
    register0x00000020 = (BADSPACEBASE *)(ulonglong)((uint)&stack0x00000000 | uVar6);
    *pcVar7 = *pcVar7 + bVar2;
    uVar5 = in(10);
    uVar8 = (ulonglong)uVar5;
    pcVar7 = param_1 + -0x7ffff51b;
    *pcVar7 = *pcVar7 + cVar4;
    pcVar12 = param_1 + -1;
    if (pcVar12 == (char *)0x0 || *pcVar7 != '\0') {
      *pcVar12 = *pcVar12 + (char)(uVar5 >> 8);
      *(BADSPACEBASE **)((longlong)register0x00000020 + -8) = register0x00000020;
      *(undefined1 **)((longlong)register0x00000020 + -0x10) =
           (undefined1 *)((longlong)register0x00000020 + -8);
      uVar3 = in(1);
      uVar6 = CONCAT31((int3)(uVar5 >> 8),uVar3);
      param_2[-0x3c] = param_2[-0x3c] + (char)pcVar12;
      if (uVar6 + *(int *)(ulonglong)uVar6 == 0) {
        cRam00000001454a86cd = cRam00000001454a86cd + (char)pcVar12;
        param_1[-0x3ffff51c] = param_1[-0x3ffff51c] + cVar4;
        uVar6 = in(10);
        pcVar7 = (char *)(ulonglong)uVar6;
        pcVar7[0x7e] = pcVar7[0x7e] + unaff_BH;
        *pcVar12 = *pcVar12 + (char)(undefined1 *)((longlong)register0x00000020 + -0x10);
        *param_2 = *param_2 + (char)uVar6;
        *pcVar7 = *pcVar7 + (char)uVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *param_2 = *param_2 + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    param_1 = pcVar12;
    if (*pcVar7 < '\0') goto code_r0x0001404a8028;
  }
  *param_1 = *param_1 + (char)register0x00000020;
  bVar2 = (byte)uVar8;
  *(char *)(uVar8 * 2) = *(char *)(uVar8 * 2) + bVar2;
  cVar11 = (char)(uVar8 >> 8) + cVar13;
  pbVar10 = (byte *)CONCAT62((int6)(uVar8 >> 0x10),CONCAT11(cVar11,bVar2));
  *pbVar10 = *pbVar10 + bVar2;
  pbVar10[(longlong)param_1] = pbVar10[(longlong)param_1] + cVar11;
  lVar9 = CONCAT71((int7)((ulonglong)pbVar10 >> 8),bVar2 | *pbVar10);
  uVar5 = in(10);
  pcVar7 = (char *)(ulonglong)uVar5;
  pcVar7[0x210049e1] = pcVar7[0x210049e1] + (char)uVar5;
  *pcVar7 = *pcVar7 + (char)uVar5;
  *pcVar7 = *pcVar7 + (char)(uVar5 >> 8);
  uVar5 = in(10);
  pcVar7 = (char *)(lVar9 + -0x7ffff51b);
  *pcVar7 = *pcVar7 + cVar4;
  pcVar12 = (char *)(lVar9 + -1);
  if (pcVar12 == (char *)0x0 || *pcVar7 != '\0') {
    *pcVar12 = *pcVar12 + (char)uVar5;
    uVar5 = uVar5 | 0xd20d0002;
    *(uint *)(unaff_RDI + 0xe) = *(uint *)(unaff_RDI + 0xe) & uVar6;
    unaff_RDI[-0x1c] = unaff_RDI[-0x1c] + cVar13;
    *(byte *)(ulonglong)uVar5 = *(byte *)(ulonglong)uVar5 | (byte)uVar5;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  unaff_RSI = (undefined1 *)(ulonglong)(uVar6 | *(uint *)((ulonglong)uVar5 * 2));
code_r0x0001404a8028:
  pcVar7 = unaff_RSI + 1;
  *unaff_RDI = *unaff_RSI;
  *(undefined **)((longlong)register0x00000020 + -8) = &UNK_1404a8032;
  func_0x0001456b807b();
  uVar6 = in(0xf3);
  uVar1 = (undefined3)(uVar6 >> 8);
  bVar2 = (byte)uVar6 | *(byte *)(ulonglong)uVar6;
  pbVar10 = (byte *)(ulonglong)CONCAT31(uVar1,bVar2);
  if ('\0' < (char)bVar2) {
    in(0xc);
    *(char *)CONCAT62(uVar14,CONCAT11(cVar13,cVar4)) =
         *(char *)CONCAT62(uVar14,CONCAT11(cVar13,cVar4)) + (char)pcVar12;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar11 = (char)(uVar6 >> 8);
  *pcVar12 = *pcVar12 + cVar11;
  *pbVar10 = *pbVar10 + bVar2;
  unaff_RDI[-0x1afff50d] = unaff_RDI[-0x1afff50d] + cVar13;
  bVar2 = bVar2 | *pbVar10;
  pbVar10 = (byte *)(ulonglong)CONCAT31(uVar1,bVar2);
  if ('\0' < (char)bVar2) {
    bVar2 = bVar2 | *pbVar10;
    *pcVar12 = *pcVar12 + (char)register0x00000020;
    *pcVar7 = *pcVar7 + bVar2;
    *(char *)(ulonglong)CONCAT31(uVar1,bVar2) = *(char *)(ulonglong)CONCAT31(uVar1,bVar2) + bVar2;
    cVar4 = in(0xc);
    *(char *)(ulonglong)CONCAT31(uVar1,cVar4) = *(char *)(ulonglong)CONCAT31(uVar1,cVar4) + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar12 = *pcVar12 + cVar11;
  *(byte *)CONCAT62(uVar14,CONCAT11(cVar13,cVar4)) =
       *(char *)CONCAT62(uVar14,CONCAT11(cVar13,cVar4)) + bVar2;
  *pbVar10 = *pbVar10 + bVar2;
  pbVar10 = (byte *)((ulonglong)CONCAT31(uVar1,bVar2) ^ 2);
  unaff_RDI[-0x1afff50d] = unaff_RDI[-0x1afff50d] + cVar13;
  bVar2 = (byte)pbVar10 | *pbVar10;
  pbVar10 = (byte *)(ulonglong)CONCAT31(uVar1,bVar2);
  if ((char)bVar2 < '\x01') {
    *pcVar12 = *pcVar12 + cVar11;
    *pbVar10 = *pbVar10 + bVar2;
    pbVar10[-0x48fff50e] = pbVar10[-0x48fff50e] + cVar13;
    unaff_RDI[1] = *pcVar7;
    *(undefined **)((longlong)register0x00000020 + -8) = &UNK_1404a807a;
    func_0x00014d4b80c3();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar2 == 0) {
    *pcVar12 = *pcVar12 + cVar11;
    *pbVar10 = *pbVar10;
    pbVar10[-0xb] = pbVar10[-0xb];
    return CONCAT31(uVar1,*pbVar10);
  }
  pbVar10[-0xb] = pbVar10[-0xb] + bVar2;
  return CONCAT31(uVar1,bVar2 | *pbVar10);
}

