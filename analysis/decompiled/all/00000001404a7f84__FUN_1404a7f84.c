// Function: FUN_1404a7f84
// Addr: 1404a7f84
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404a8109) */

undefined4 FUN_1404a7f84(undefined1 *param_1,char *param_2)

{
  undefined3 uVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  char *in_RAX;
  char *pcVar5;
  char cVar7;
  undefined7 uVar8;
  char cVar9;
  char cVar10;
  undefined6 uVar11;
  uint unaff_ESI;
  undefined1 *puVar12;
  undefined1 *unaff_RDI;
  bool in_SF;
  byte *pbVar6;
  
  uVar11 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar10 = (char)((ulonglong)param_2 >> 8);
  cVar9 = (char)param_2;
  uVar8 = (undefined7)((ulonglong)param_1 >> 8);
  cVar7 = (char)param_1;
  cVar3 = (char)in_RAX;
  if (!in_SF) {
    *param_1 = *param_1;
    *param_2 = *param_2 + cVar3;
    *in_RAX = *in_RAX + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar5 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar3 + '\x7f');
  *param_1 = *param_1;
  *pcVar5 = *pcVar5 + cVar3 + '\x7f';
  *pcVar5 = *pcVar5 + cVar9;
  puVar12 = (undefined1 *)
            (ulonglong)
            (unaff_ESI | *(uint *)((ulonglong)((uint)pcVar5 | *(uint *)((longlong)pcVar5 * 2)) * 2))
  ;
  pcVar5 = puVar12 + 1;
  *unaff_RDI = *puVar12;
  func_0x0001456b807b();
  uVar4 = in(0xf3);
  uVar1 = (undefined3)(uVar4 >> 8);
  bVar2 = (byte)uVar4 | *(byte *)(ulonglong)uVar4;
  pbVar6 = (byte *)(ulonglong)CONCAT31(uVar1,bVar2);
  if ('\0' < (char)bVar2) {
    in(0xc);
    *(char *)CONCAT62(uVar11,CONCAT11(cVar10,cVar9)) =
         *(char *)CONCAT62(uVar11,CONCAT11(cVar10,cVar9)) + cVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar3 = (char)(uVar4 >> 8);
  *(char *)CONCAT71(uVar8,cVar7) = *(char *)CONCAT71(uVar8,cVar7) + cVar3;
  *pbVar6 = *pbVar6 + bVar2;
  unaff_RDI[-0x1afff50d] = unaff_RDI[-0x1afff50d] + cVar10;
  bVar2 = bVar2 | *pbVar6;
  pbVar6 = (byte *)(ulonglong)CONCAT31(uVar1,bVar2);
  if ('\0' < (char)bVar2) {
    bVar2 = bVar2 | *pbVar6;
    *(undefined1 *)CONCAT71(uVar8,cVar7) = *(undefined1 *)CONCAT71(uVar8,cVar7);
    *pcVar5 = *pcVar5 + bVar2;
    *(char *)(ulonglong)CONCAT31(uVar1,bVar2) = *(char *)(ulonglong)CONCAT31(uVar1,bVar2) + bVar2;
    cVar3 = in(0xc);
    *(char *)(ulonglong)CONCAT31(uVar1,cVar3) = *(char *)(ulonglong)CONCAT31(uVar1,cVar3) + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)CONCAT71(uVar8,cVar7) = *(char *)CONCAT71(uVar8,cVar7) + cVar3;
  *(byte *)CONCAT62(uVar11,CONCAT11(cVar10,cVar9)) =
       *(char *)CONCAT62(uVar11,CONCAT11(cVar10,cVar9)) + bVar2;
  *pbVar6 = *pbVar6 + bVar2;
  pbVar6 = (byte *)((ulonglong)CONCAT31(uVar1,bVar2) ^ 2);
  unaff_RDI[-0x1afff50d] = unaff_RDI[-0x1afff50d] + cVar10;
  bVar2 = (byte)pbVar6 | *pbVar6;
  pbVar6 = (byte *)(ulonglong)CONCAT31(uVar1,bVar2);
  if ('\0' < (char)bVar2) {
    if (bVar2 == 0) {
      *(char *)CONCAT71(uVar8,cVar7) = *(char *)CONCAT71(uVar8,cVar7) + cVar3;
      *pbVar6 = *pbVar6;
      pbVar6[-0xb] = pbVar6[-0xb];
      return CONCAT31(uVar1,*pbVar6);
    }
    pbVar6[-0xb] = pbVar6[-0xb] + bVar2;
    return CONCAT31(uVar1,bVar2 | *pbVar6);
  }
  *(char *)CONCAT71(uVar8,cVar7) = *(char *)CONCAT71(uVar8,cVar7) + cVar3;
  *pbVar6 = *pbVar6 + bVar2;
  pbVar6[-0x48fff50e] = pbVar6[-0x48fff50e] + cVar10;
  unaff_RDI[1] = *pcVar5;
  func_0x00014d4b80c3();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

