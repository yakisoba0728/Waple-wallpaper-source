// Function: FUN_1404d2e94
// Addr: 1404d2e94
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404d2ebd) overlaps instruction at (ram,0x0001404d2ebb)
    */

void FUN_1404d2e94(longlong param_1,char param_2,char *param_3)

{
  byte bVar1;
  byte bVar4;
  int in_EAX;
  uint uVar2;
  int iVar3;
  char *pcVar5;
  char *unaff_RDI;
  byte unaff_R13B;
  char in_ZF;
  
  pcVar5 = (char *)(param_1 + -1);
  if (pcVar5 != (char *)0x0 && in_ZF == '\0') {
    *unaff_RDI = *unaff_RDI + param_2;
    *pcVar5 = (char)in_EAX;
    *pcVar5 = *pcVar5 + param_2;
    if (-1 < *pcVar5) {
      cRam00000001904d3229 = cRam00000001904d3229 + (char)in_EAX;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar2 = (in_EAX + -0x6a000041) - (uint)CARRY1(unaff_R13B,(byte)unaff_RDI);
  *pcVar5 = *pcVar5;
  bVar1 = (byte)uVar2;
  *(char *)(ulonglong)uVar2 = *(char *)(ulonglong)uVar2 + bVar1;
  bVar4 = (byte)(uVar2 >> 8);
  iVar3 = (CONCAT31((int3)(uVar2 >> 8),bVar1 + bVar4) + -0x1dfd0041) - (uint)CARRY1(bVar1,bVar4);
  *param_3 = *param_3 + (char)iVar3;
  *pcVar5 = *pcVar5 + (char)((uint)iVar3 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

