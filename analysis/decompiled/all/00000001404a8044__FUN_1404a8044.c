// Function: FUN_1404a8044
// Addr: 1404a8044
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404a8109) */

undefined4 FUN_1404a8044(char *param_1,char *param_2)

{
  undefined3 uVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  char cVar6;
  uint *in_RAX;
  char *unaff_RSI;
  char *unaff_RDI;
  byte *pbVar5;
  
  cVar3 = (char)((ulonglong)param_2 >> 8);
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  uVar4 = in(0xf3);
  uVar1 = (undefined3)(uVar4 >> 8);
  bVar2 = (byte)uVar4 | *(byte *)(ulonglong)uVar4;
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
  cVar6 = (char)(uVar4 >> 8);
  *param_1 = *param_1 + cVar6;
  *param_2 = *param_2 + bVar2;
  *pbVar5 = *pbVar5 + bVar2;
  pbVar5 = (byte *)((ulonglong)CONCAT31(uVar1,bVar2) ^ 2);
  unaff_RDI[-0x1afff50e] = unaff_RDI[-0x1afff50e] + cVar3;
  bVar2 = (byte)pbVar5 | *pbVar5;
  pbVar5 = (byte *)(ulonglong)CONCAT31(uVar1,bVar2);
  if ('\0' < (char)bVar2) {
    if (bVar2 == 0) {
      *param_1 = *param_1 + cVar6;
      *pbVar5 = *pbVar5;
      pbVar5[-0xb] = pbVar5[-0xb];
      return CONCAT31(uVar1,*pbVar5);
    }
    pbVar5[-0xb] = pbVar5[-0xb] + bVar2;
    return CONCAT31(uVar1,bVar2 | *pbVar5);
  }
  *param_1 = *param_1 + cVar6;
  *pbVar5 = *pbVar5 + bVar2;
  pbVar5[-0x48fff50e] = pbVar5[-0x48fff50e] + cVar3;
  *unaff_RDI = *unaff_RSI;
  func_0x00014d4b80c3();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

