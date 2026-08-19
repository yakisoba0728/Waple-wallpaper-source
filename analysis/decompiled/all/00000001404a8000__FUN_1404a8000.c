// Function: FUN_1404a8000
// Addr: 1404a8000
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a8051) overlaps instruction at (ram,0x0001404a8050)
    */
/* WARNING: Removing unreachable block (ram,0x0001404a8109) */

undefined8 FUN_1404a8000(char *param_1,undefined8 param_2)

{
  undefined3 uVar1;
  byte bVar2;
  char cVar3;
  char cVar8;
  int in_EAX;
  uint uVar4;
  byte *pbVar6;
  undefined7 uVar9;
  char *pcVar7;
  undefined7 uVar10;
  char cVar11;
  char cVar12;
  undefined6 uVar13;
  char *unaff_RSI;
  char *unaff_RDI;
  byte in_CF;
  bool bVar14;
  byte *pbVar5;
  
  uVar13 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar12 = (char)((ulonglong)param_2 >> 8);
  cVar11 = (char)param_2;
  uVar10 = (undefined7)((ulonglong)param_1 >> 8);
  cVar3 = (char)param_1;
  bVar14 = SBORROW4(in_EAX,0x4000aeb) != SBORROW4(in_EAX + -0x4000aeb,(uint)in_CF);
  uVar4 = (in_EAX + -0x4000aeb) - (uint)in_CF;
  pbVar6 = (byte *)(ulonglong)uVar4;
  if (uVar4 != 0 && bVar14 == (int)uVar4 < 0) {
    if (uVar4 != 0 && bVar14 == (int)uVar4 < 0) goto code_r0x0001404a809d;
  }
  else {
    *param_1 = *param_1 + (char)(uVar4 >> 8);
    *pbVar6 = *pbVar6 + (char)uVar4;
    *pbVar6 = *pbVar6 + cVar11;
    pcVar7 = (char *)(ulonglong)
                     ((uint)unaff_RSI |
                     *(uint *)((ulonglong)(uVar4 | *(uint *)((longlong)pbVar6 * 2)) * 2));
    unaff_RSI = pcVar7 + 1;
    *unaff_RDI = *pcVar7;
    func_0x0001456b807b();
    uVar4 = in(0xf3);
    uVar1 = (undefined3)(uVar4 >> 8);
    bVar2 = (byte)uVar4 | *(byte *)(ulonglong)uVar4;
    pbVar5 = (byte *)(ulonglong)CONCAT31(uVar1,bVar2);
    if ('\0' < (char)bVar2) {
      in(0xc);
      *(char *)CONCAT62(uVar13,CONCAT11(cVar12,cVar11)) =
           *(char *)CONCAT62(uVar13,CONCAT11(cVar12,cVar11)) + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(char *)CONCAT71(uVar10,cVar3) = *(char *)CONCAT71(uVar10,cVar3) + (char)(uVar4 >> 8);
    *pbVar5 = *pbVar5 + bVar2;
    unaff_RDI[-0x1afff50d] = unaff_RDI[-0x1afff50d] + cVar12;
    pbVar6 = (byte *)(ulonglong)CONCAT31(uVar1,bVar2 | *pbVar5);
    unaff_RDI = unaff_RDI + 1;
    if ('\0' < (char)(bVar2 | *pbVar5)) {
code_r0x0001404a809d:
      uVar9 = (undefined7)((ulonglong)pbVar6 >> 8);
      bVar2 = (byte)pbVar6 | *pbVar6;
      pcVar7 = (char *)CONCAT71(uVar9,bVar2);
      *(undefined1 *)CONCAT71(uVar10,cVar3) = *(undefined1 *)CONCAT71(uVar10,cVar3);
      *unaff_RSI = *unaff_RSI + bVar2;
      *pcVar7 = *pcVar7 + bVar2;
      cVar3 = in(0xc);
      pcVar7 = (char *)CONCAT71(uVar9,cVar3);
      *pcVar7 = *pcVar7 + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  cVar8 = (char)((ulonglong)pbVar6 >> 8);
  *(char *)CONCAT71(uVar10,cVar3) = *(char *)CONCAT71(uVar10,cVar3) + cVar8;
  *(char *)CONCAT62(uVar13,CONCAT11(cVar12,cVar11)) =
       *(char *)CONCAT62(uVar13,CONCAT11(cVar12,cVar11)) + (char)pbVar6;
  *pbVar6 = *pbVar6 + (char)pbVar6;
  uVar9 = (undefined7)((ulonglong)pbVar6 >> 8);
  unaff_RDI[-0x1afff50e] = unaff_RDI[-0x1afff50e] + cVar12;
  bVar2 = (byte)(byte *)((ulonglong)pbVar6 ^ 2) | *(byte *)((ulonglong)pbVar6 ^ 2);
  pbVar6 = (byte *)CONCAT71(uVar9,bVar2);
  if ((char)bVar2 < '\x01') {
    *(char *)CONCAT71(uVar10,cVar3) = *(char *)CONCAT71(uVar10,cVar3) + cVar8;
    *pbVar6 = *pbVar6 + bVar2;
    pbVar6[-0x48fff50e] = pbVar6[-0x48fff50e] + cVar12;
    *unaff_RDI = *unaff_RSI;
    func_0x00014d4b80c3();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar2 == 0) {
    *(char *)CONCAT71(uVar10,cVar3) = *(char *)CONCAT71(uVar10,cVar3) + cVar8;
    *pbVar6 = *pbVar6;
    pbVar6[-0xb] = pbVar6[-0xb];
    return CONCAT71(uVar9,*pbVar6);
  }
  pbVar6[-0xb] = pbVar6[-0xb] + bVar2;
  return CONCAT71(uVar9,bVar2 | *pbVar6);
}

