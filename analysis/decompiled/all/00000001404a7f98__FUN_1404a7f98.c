// Function: FUN_1404a7f98
// Addr: 1404a7f98
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404a8109) */

undefined4 FUN_1404a7f98(char *param_1,undefined8 param_2)

{
  undefined3 uVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  char cVar7;
  char *in_RAX;
  char *pcVar5;
  ulonglong uVar8;
  char cVar9;
  undefined6 uVar10;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  uint unaff_ESI;
  undefined1 *puVar11;
  undefined1 *unaff_RDI;
  bool in_SF;
  byte *pbVar6;
  
  uVar10 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar9 = (char)((ulonglong)param_2 >> 8);
  cVar3 = (char)param_2;
  if (in_SF) {
    *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) & (uint)param_1;
  }
  else {
    *param_1 = *param_1;
    *in_RAX = *in_RAX + (char)in_RAX;
    param_1[-0x3ffff51b] = param_1[-0x3ffff51b] + cVar3;
    uVar4 = in(10);
    pcVar5 = (char *)((ulonglong)uVar4 + 0x7e);
    *pcVar5 = *pcVar5 + unaff_BH;
    *param_1 = *param_1;
    pcVar5 = (char *)((ulonglong)uVar4 * 2);
    bVar2 = (byte)uVar4;
    *pcVar5 = *pcVar5 + bVar2;
    cVar7 = (char)(uVar4 >> 8) + cVar9;
    uVar4 = CONCAT22((short)(uVar4 >> 0x10),CONCAT11(cVar7,bVar2));
    pbVar6 = (byte *)(ulonglong)uVar4;
    *pbVar6 = *pbVar6 + bVar2;
    pbVar6[(longlong)param_1] = pbVar6[(longlong)param_1] + cVar7;
    uVar8 = (ulonglong)CONCAT31((int3)(uVar4 >> 8),bVar2 | *pbVar6);
    uVar4 = in(10);
    pcVar5 = (char *)(ulonglong)uVar4;
    pcVar5[0x210049e1] = pcVar5[0x210049e1] + (char)uVar4;
    *pcVar5 = *pcVar5 + (char)uVar4;
    *pcVar5 = *pcVar5 + (char)(uVar4 >> 8);
    uVar4 = in(10);
    in_RAX = (char *)(ulonglong)uVar4;
    pcVar5 = (char *)(uVar8 - 0x7ffff51b);
    *pcVar5 = *pcVar5 + cVar3;
    param_1 = (char *)(uVar8 - 1);
    if (param_1 == (char *)0x0 || *pcVar5 != '\0') {
      *param_1 = *param_1 + (char)uVar4;
      uVar4 = uVar4 | 0xd20d0002;
      *(uint *)(unaff_RDI + 0xe) = *(uint *)(unaff_RDI + 0xe) & unaff_ESI;
      unaff_RDI[-0x1c] = unaff_RDI[-0x1c] + cVar9;
      *(byte *)(ulonglong)uVar4 = *(byte *)(ulonglong)uVar4 | (byte)uVar4;
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
  }
  puVar11 = (undefined1 *)(ulonglong)(unaff_ESI | *(uint *)((longlong)in_RAX * 2));
  pcVar5 = puVar11 + 1;
  *unaff_RDI = *puVar11;
  func_0x0001456b807b();
  uVar4 = in(0xf3);
  uVar1 = (undefined3)(uVar4 >> 8);
  bVar2 = (byte)uVar4 | *(byte *)(ulonglong)uVar4;
  pbVar6 = (byte *)(ulonglong)CONCAT31(uVar1,bVar2);
  if ('\0' < (char)bVar2) {
    in(0xc);
    *(char *)CONCAT62(uVar10,CONCAT11(cVar9,cVar3)) =
         *(char *)CONCAT62(uVar10,CONCAT11(cVar9,cVar3)) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar7 = (char)(uVar4 >> 8);
  *param_1 = *param_1 + cVar7;
  *pbVar6 = *pbVar6 + bVar2;
  unaff_RDI[-0x1afff50d] = unaff_RDI[-0x1afff50d] + cVar9;
  bVar2 = bVar2 | *pbVar6;
  pbVar6 = (byte *)(ulonglong)CONCAT31(uVar1,bVar2);
  if ('\0' < (char)bVar2) {
    bVar2 = bVar2 | *pbVar6;
    *param_1 = *param_1;
    *pcVar5 = *pcVar5 + bVar2;
    *(char *)(ulonglong)CONCAT31(uVar1,bVar2) = *(char *)(ulonglong)CONCAT31(uVar1,bVar2) + bVar2;
    cVar3 = in(0xc);
    *(char *)(ulonglong)CONCAT31(uVar1,cVar3) = *(char *)(ulonglong)CONCAT31(uVar1,cVar3) + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_1 + cVar7;
  *(byte *)CONCAT62(uVar10,CONCAT11(cVar9,cVar3)) =
       *(char *)CONCAT62(uVar10,CONCAT11(cVar9,cVar3)) + bVar2;
  *pbVar6 = *pbVar6 + bVar2;
  pbVar6 = (byte *)((ulonglong)CONCAT31(uVar1,bVar2) ^ 2);
  unaff_RDI[-0x1afff50d] = unaff_RDI[-0x1afff50d] + cVar9;
  bVar2 = (byte)pbVar6 | *pbVar6;
  pbVar6 = (byte *)(ulonglong)CONCAT31(uVar1,bVar2);
  if ('\0' < (char)bVar2) {
    if (bVar2 == 0) {
      *param_1 = *param_1 + cVar7;
      *pbVar6 = *pbVar6;
      pbVar6[-0xb] = pbVar6[-0xb];
      return CONCAT31(uVar1,*pbVar6);
    }
    pbVar6[-0xb] = pbVar6[-0xb] + bVar2;
    return CONCAT31(uVar1,bVar2 | *pbVar6);
  }
  *param_1 = *param_1 + cVar7;
  *pbVar6 = *pbVar6 + bVar2;
  pbVar6[-0x48fff50e] = pbVar6[-0x48fff50e] + cVar9;
  unaff_RDI[1] = *pcVar5;
  func_0x00014d4b80c3();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

