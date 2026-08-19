// Function: FUN_1404cf154
// Addr: 1404cf154
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404cf16b) overlaps instruction at (ram,0x0001404cf16a)
    */

void FUN_1404cf154(longlong param_1)

{
  int iVar1;
  uint uVar2;
  char *pcVar4;
  int unaff_EBX;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  byte *pbVar3;
  
  *unaff_RDI = *unaff_RSI;
  *(undefined **)((ulonglong)(uint)((int)&stack0x00000000 - unaff_EBX) - 8) = &UNK_1404cf15e;
  iVar1 = func_0x00014a4df1a7();
  uVar2 = iVar1 + 0x6e20a00;
  pbVar3 = (byte *)(ulonglong)uVar2;
  pcVar4 = (char *)(param_1 + -1);
  if (pcVar4 == (char *)0x0 || uVar2 == 0) {
    if (!SCARRY4(iVar1,0x6e20a00)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    *pbVar3 = *pbVar3 ^ (byte)uVar2;
    *pcVar4 = *pcVar4 + (char)(uVar2 >> 8);
    pbVar3 = (byte *)(ulonglong)(iVar1 + 0x6ae70a02);
  }
  *pbVar3 = *pbVar3 + (char)pbVar3;
  uRam00000001a451f174 = uRam00000001a451f174 & (uint)pbVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

