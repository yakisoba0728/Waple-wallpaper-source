// Function: FUN_1404a0c84
// Addr: 1404a0c84
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404a0c19) */

void FUN_1404a0c84(uint param_1,uint *param_2)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *unaff_RBX;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  
  puVar4 = (uint *)((ulonglong)&stack0x00000000 & 0xffffffff);
  uVar2 = *param_2;
  *puVar4 = *puVar4 & (uint)&stack0x00000000;
  *(char *)puVar4 = (char)*puVar4;
  *unaff_RDI = *unaff_RSI;
  uVar3 = *unaff_RBX;
  pcVar1 = (char *)((longlong)unaff_RBX + (ulonglong)(param_1 | uVar2) + 0x1f21004a);
  *pcVar1 = *pcVar1 + (char)param_2;
  *(byte *)(ulonglong)uVar3 = *(byte *)(ulonglong)uVar3 | (byte)uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

