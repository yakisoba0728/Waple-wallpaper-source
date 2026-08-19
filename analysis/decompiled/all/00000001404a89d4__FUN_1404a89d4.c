// Function: FUN_1404a89d4
// Addr: 1404a89d4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a8a0d) overlaps instruction at (ram,0x0001404a8a0c)
    */

void FUN_1404a89d4(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint *in_RAX;
  byte *pbVar4;
  char cVar5;
  char unaff_BL;
  undefined7 unaff_00000019;
  char *unaff_RSI;
  int *unaff_RDI;
  uint *puVar3;
  
  cVar5 = (char)((uint)param_2 >> 8);
  unaff_RSI[-0x49e2fff5] = unaff_RSI[-0x49e2fff5] + cVar5;
  uVar1 = (uint)in_RAX | *in_RAX;
  puVar3 = (uint *)(ulonglong)uVar1;
  *(char *)puVar3 = (char)*puVar3 + (char)uVar1;
  unaff_RSI[-0x49e2fff5] = unaff_RSI[-0x49e2fff5] + cVar5;
  uVar1 = uVar1 | *puVar3;
  *(uint *)(ulonglong)uVar1 = *(uint *)(ulonglong)uVar1 | uVar1;
  uVar2 = uVar1 + 0xeb0fe91e;
  pbVar4 = (byte *)(ulonglong)uVar2;
  if (param_1 + -1 == 0 || uVar2 == 0) {
    *pbVar4 = *pbVar4 << 1 | uVar1 < 0x14f016e2;
    *unaff_RSI = *unaff_RSI;
    uVar2 = uVar2 | 0xb300c60;
    *(char *)(ulonglong)uVar2 = *(char *)(ulonglong)uVar2 + (char)uVar2;
    *(int *)CONCAT71(unaff_00000019,unaff_BL) =
         *(int *)CONCAT71(unaff_00000019,unaff_BL) + (int)(param_1 + -1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RDI = *unaff_RDI + param_2;
  pbVar4[(longlong)unaff_RSI * 8] = pbVar4[(longlong)unaff_RSI * 8] + (char)uVar2;
  *unaff_RSI = (*unaff_RSI - (char)uVar2) - CARRY1((byte)param_2,pbVar4[0x21]);
  *pbVar4 = *pbVar4 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

