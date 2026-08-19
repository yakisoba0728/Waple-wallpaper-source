// Function: FUN_1404a7fb8
// Addr: 1404a7fb8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404a8109) */

undefined4 FUN_1404a7fb8(undefined8 param_1,undefined8 param_2)

{
  undefined3 uVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  char cVar7;
  byte *in_RAX;
  ulonglong uVar8;
  char *pcVar9;
  char cVar10;
  undefined6 uVar11;
  uint unaff_ESI;
  undefined1 *puVar12;
  undefined1 *unaff_RDI;
  char *pcVar5;
  byte *pbVar6;
  
  uVar11 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar10 = (char)((ulonglong)param_2 >> 8);
  cVar3 = (char)param_2;
  uVar8 = CONCAT71((int7)((ulonglong)in_RAX >> 8),(byte)in_RAX | *in_RAX) & 0xffffffff;
  uVar4 = in(10);
  pcVar5 = (char *)(ulonglong)uVar4;
  pcVar5[0x210049e1] = pcVar5[0x210049e1] + (char)uVar4;
  *pcVar5 = *pcVar5 + (char)uVar4;
  *pcVar5 = *pcVar5 + (char)(uVar4 >> 8);
  uVar4 = in(10);
  pcVar5 = (char *)(uVar8 - 0x7ffff51b);
  *pcVar5 = *pcVar5 + cVar3;
  pcVar9 = (char *)(uVar8 - 1);
  if (pcVar9 == (char *)0x0 || *pcVar5 != '\0') {
    *pcVar9 = *pcVar9 + (char)uVar4;
    uVar4 = uVar4 | 0xd20d0002;
    *(uint *)(unaff_RDI + 0xe) = *(uint *)(unaff_RDI + 0xe) & unaff_ESI;
    unaff_RDI[-0x1c] = unaff_RDI[-0x1c] + cVar10;
    *(byte *)(ulonglong)uVar4 = *(byte *)(ulonglong)uVar4 | (byte)uVar4;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  puVar12 = (undefined1 *)(ulonglong)(unaff_ESI | *(uint *)((ulonglong)uVar4 * 2));
  pcVar5 = puVar12 + 1;
  *unaff_RDI = *puVar12;
  func_0x0001456b807b();
  uVar4 = in(0xf3);
  uVar1 = (undefined3)(uVar4 >> 8);
  bVar2 = (byte)uVar4 | *(byte *)(ulonglong)uVar4;
  pbVar6 = (byte *)(ulonglong)CONCAT31(uVar1,bVar2);
  if ('\0' < (char)bVar2) {
    in(0xc);
    *(char *)CONCAT62(uVar11,CONCAT11(cVar10,cVar3)) =
         *(char *)CONCAT62(uVar11,CONCAT11(cVar10,cVar3)) + (char)pcVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar7 = (char)(uVar4 >> 8);
  *pcVar9 = *pcVar9 + cVar7;
  *pbVar6 = *pbVar6 + bVar2;
  unaff_RDI[-0x1afff50d] = unaff_RDI[-0x1afff50d] + cVar10;
  bVar2 = bVar2 | *pbVar6;
  pbVar6 = (byte *)(ulonglong)CONCAT31(uVar1,bVar2);
  if ('\0' < (char)bVar2) {
    bVar2 = bVar2 | *pbVar6;
    *pcVar9 = *pcVar9;
    *pcVar5 = *pcVar5 + bVar2;
    *(char *)(ulonglong)CONCAT31(uVar1,bVar2) = *(char *)(ulonglong)CONCAT31(uVar1,bVar2) + bVar2;
    cVar3 = in(0xc);
    *(char *)(ulonglong)CONCAT31(uVar1,cVar3) = *(char *)(ulonglong)CONCAT31(uVar1,cVar3) + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar9 = *pcVar9 + cVar7;
  *(byte *)CONCAT62(uVar11,CONCAT11(cVar10,cVar3)) =
       *(char *)CONCAT62(uVar11,CONCAT11(cVar10,cVar3)) + bVar2;
  *pbVar6 = *pbVar6 + bVar2;
  pbVar6 = (byte *)((ulonglong)CONCAT31(uVar1,bVar2) ^ 2);
  unaff_RDI[-0x1afff50d] = unaff_RDI[-0x1afff50d] + cVar10;
  bVar2 = (byte)pbVar6 | *pbVar6;
  pbVar6 = (byte *)(ulonglong)CONCAT31(uVar1,bVar2);
  if ('\0' < (char)bVar2) {
    if (bVar2 == 0) {
      *pcVar9 = *pcVar9 + cVar7;
      *pbVar6 = *pbVar6;
      pbVar6[-0xb] = pbVar6[-0xb];
      return CONCAT31(uVar1,*pbVar6);
    }
    pbVar6[-0xb] = pbVar6[-0xb] + bVar2;
    return CONCAT31(uVar1,bVar2 | *pbVar6);
  }
  *pcVar9 = *pcVar9 + cVar7;
  *pbVar6 = *pbVar6 + bVar2;
  pbVar6[-0x48fff50e] = pbVar6[-0x48fff50e] + cVar10;
  unaff_RDI[1] = *pcVar5;
  func_0x00014d4b80c3();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

