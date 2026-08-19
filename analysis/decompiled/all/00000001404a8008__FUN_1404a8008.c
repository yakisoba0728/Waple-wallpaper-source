// Function: FUN_1404a8008
// Addr: 1404a8008
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404a8109) */

undefined8 FUN_1404a8008(char *param_1,undefined8 param_2)

{
  undefined3 uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  char cVar8;
  uint *in_RAX;
  byte *pbVar7;
  undefined1 uVar10;
  undefined6 uVar11;
  undefined1 uVar12;
  char cVar13;
  undefined6 uVar14;
  char *unaff_RSI;
  char *pcVar15;
  char *unaff_RDI;
  char *pcVar16;
  byte *pbVar6;
  undefined7 uVar9;
  
  uVar14 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar13 = (char)((ulonglong)param_2 >> 8);
  uVar12 = (undefined1)param_2;
  uVar11 = (undefined6)((ulonglong)param_1 >> 0x10);
  uVar10 = (undefined1)((ulonglong)param_1 >> 8);
  cVar3 = (char)param_1;
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(byte *)in_RAX = (char)*in_RAX + (byte)in_RAX;
  iVar4 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),(byte)in_RAX | (byte)*in_RAX);
  uVar5 = iVar4 + 0xfbfff515;
  pbVar6 = (byte *)(ulonglong)uVar5;
  pcVar16 = unaff_RDI;
  if (uVar5 == 0 || iVar4 < 0x4000aeb) {
    *param_1 = *param_1 + (char)(uVar5 >> 8);
    pcVar15 = (char *)(ulonglong)
                      ((uint)unaff_RSI |
                      *(uint *)((ulonglong)(uVar5 | *(uint *)((longlong)pbVar6 * 2)) * 2));
    pcVar16 = unaff_RDI + 1;
    unaff_RSI = pcVar15 + 1;
    *unaff_RDI = *pcVar15;
    func_0x0001456b807b();
    uVar5 = in(0xf3);
    uVar1 = (undefined3)(uVar5 >> 8);
    bVar2 = (byte)uVar5 | *(byte *)(ulonglong)uVar5;
    pbVar6 = (byte *)(ulonglong)CONCAT31(uVar1,bVar2);
    if ('\0' < (char)bVar2) {
      in(0xc);
      *(char *)CONCAT62(uVar14,CONCAT11(cVar13,uVar12)) =
           *(char *)CONCAT62(uVar14,CONCAT11(cVar13,uVar12)) + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    cVar8 = (char)(uVar5 >> 8);
    *(char *)CONCAT62(uVar11,CONCAT11(uVar10,cVar3)) =
         *(char *)CONCAT62(uVar11,CONCAT11(uVar10,cVar3)) + cVar8;
    *pbVar6 = *pbVar6 + bVar2;
    unaff_RDI[-0x1afff50d] = unaff_RDI[-0x1afff50d] + cVar13;
    bVar2 = bVar2 | *pbVar6;
    pbVar6 = (byte *)(ulonglong)CONCAT31(uVar1,bVar2);
    if ('\0' < (char)bVar2) {
      bVar2 = bVar2 | *pbVar6;
      *(undefined1 *)CONCAT62(uVar11,CONCAT11(uVar10,cVar3)) =
           *(undefined1 *)CONCAT62(uVar11,CONCAT11(uVar10,cVar3));
      *unaff_RSI = *unaff_RSI + bVar2;
      *(char *)(ulonglong)CONCAT31(uVar1,bVar2) = *(char *)(ulonglong)CONCAT31(uVar1,bVar2) + bVar2;
      cVar3 = in(0xc);
      *(char *)(ulonglong)CONCAT31(uVar1,cVar3) = *(char *)(ulonglong)CONCAT31(uVar1,cVar3) + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(char *)CONCAT62(uVar11,CONCAT11(uVar10,cVar3)) =
         *(char *)CONCAT62(uVar11,CONCAT11(uVar10,cVar3)) + cVar8;
    *(byte *)CONCAT62(uVar14,CONCAT11(cVar13,uVar12)) =
         *(char *)CONCAT62(uVar14,CONCAT11(cVar13,uVar12)) + bVar2;
    *pbVar6 = *pbVar6 + bVar2;
    pbVar6 = (byte *)((ulonglong)CONCAT31(uVar1,bVar2) ^ 2);
    unaff_RDI[-0x1afff50d] = unaff_RDI[-0x1afff50d] + cVar13;
  }
  uVar9 = (undefined7)((ulonglong)pbVar6 >> 8);
  bVar2 = (byte)pbVar6 | *pbVar6;
  pbVar7 = (byte *)CONCAT71(uVar9,bVar2);
  cVar8 = (char)((ulonglong)pbVar6 >> 8);
  if ((char)bVar2 < '\x01') {
    *(char *)CONCAT62(uVar11,CONCAT11(uVar10,cVar3)) =
         *(char *)CONCAT62(uVar11,CONCAT11(uVar10,cVar3)) + cVar8;
    *pbVar7 = *pbVar7 + bVar2;
    pbVar7[-0x48fff50e] = pbVar7[-0x48fff50e] + cVar13;
    *pcVar16 = *unaff_RSI;
    func_0x00014d4b80c3();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar2 == 0) {
    *(char *)CONCAT62(uVar11,CONCAT11(uVar10,cVar3)) =
         *(char *)CONCAT62(uVar11,CONCAT11(uVar10,cVar3)) + cVar8;
    *pbVar7 = *pbVar7;
    pbVar7[-0xb] = pbVar7[-0xb];
    return CONCAT71(uVar9,*pbVar7);
  }
  pbVar7[-0xb] = pbVar7[-0xb] + bVar2;
  return CONCAT71(uVar9,bVar2 | *pbVar7);
}

