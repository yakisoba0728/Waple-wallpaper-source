// Function: FUN_1404bac98
// Addr: 1404bac98
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bac98(undefined4 *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  byte bVar2;
  uint uVar3;
  uint *in_RAX;
  longlong unaff_RBX;
  char unaff_SPL;
  longlong unaff_RBP;
  bool in_PF;
  
  if (!in_PF) {
    *in_RAX = *in_RAX & (uint)in_RAX;
  }
  *param_4 = *param_4 + unaff_SPL;
  uVar3 = (uint)in_RAX + 0xe4050002;
  bVar2 = (byte)uVar3 | *(byte *)(ulonglong)uVar3;
  uVar3 = CONCAT31((int3)(uVar3 >> 8),bVar2);
  if ((POPCOUNT(bVar2) & 1U) != 0) {
    *(uint *)(ulonglong)uVar3 = *(uint *)(ulonglong)uVar3 & uVar3;
  }
  SegmentLimit(*param_1);
  pcVar1 = (char *)(unaff_RBX + 0x2521004b + unaff_RBP * 4);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

