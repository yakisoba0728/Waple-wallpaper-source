// Function: FUN_1404a8034
// Addr: 1404a8034
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404a8109) */

undefined4 FUN_1404a8034(char *param_1,char *param_2)

{
  undefined3 uVar1;
  byte bVar2;
  char cVar3;
  char cVar6;
  uint uVar4;
  char *unaff_RSI;
  char *unaff_RDI;
  byte *pbVar5;
  
  cVar3 = (char)((ulonglong)param_2 >> 8);
  uVar4 = in(0xf3);
  uVar1 = (undefined3)(uVar4 >> 8);
  bVar2 = (byte)uVar4 | *(byte *)(ulonglong)uVar4;
  pbVar5 = (byte *)(ulonglong)CONCAT31(uVar1,bVar2);
  if ('\0' < (char)bVar2) {
    in(0xc);
    *param_2 = *param_2 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar6 = (char)(uVar4 >> 8);
  *param_1 = *param_1 + cVar6;
  *pbVar5 = *pbVar5 + bVar2;
  unaff_RDI[-0x1afff50e] = unaff_RDI[-0x1afff50e] + cVar3;
  bVar2 = bVar2 | *pbVar5;
  pbVar5 = (byte *)(ulonglong)CONCAT31(uVar1,bVar2);
  if ('\0' < (char)bVar2) {
    bVar2 = bVar2 | *pbVar5;
    *param_1 = *param_1;
    *unaff_RSI = *unaff_RSI + bVar2;
    *(char *)(ulonglong)CONCAT31(uVar1,bVar2) = *(char *)(ulonglong)CONCAT31(uVar1,bVar2) + bVar2;
    cVar3 = in(0xc);
    *(char *)(ulonglong)CONCAT31(uVar1,cVar3) = *(char *)(ulonglong)CONCAT31(uVar1,cVar3) + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_1 + cVar6;
  *param_2 = *param_2 + bVar2;
  *pbVar5 = *pbVar5 + bVar2;
  pbVar5 = (byte *)((ulonglong)CONCAT31(uVar1,bVar2) ^ 2);
  unaff_RDI[-0x1afff50e] = unaff_RDI[-0x1afff50e] + cVar3;
  bVar2 = (byte)pbVar5 | *pbVar5;
  pbVar5 = (byte *)(ulonglong)CONCAT31(uVar1,bVar2);
  if ((char)bVar2 < '\x01') {
    *param_1 = *param_1 + cVar6;
    *pbVar5 = *pbVar5 + bVar2;
    pbVar5[-0x48fff50e] = pbVar5[-0x48fff50e] + cVar3;
    *unaff_RDI = *unaff_RSI;
    func_0x00014d4b80c3();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar2 == 0) {
    *param_1 = *param_1 + cVar6;
    *pbVar5 = *pbVar5;
    pbVar5[-0xb] = pbVar5[-0xb];
    return CONCAT31(uVar1,*pbVar5);
  }
  pbVar5[-0xb] = pbVar5[-0xb] + bVar2;
  return CONCAT31(uVar1,bVar2 | *pbVar5);
}

