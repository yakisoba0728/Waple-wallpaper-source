// Function: FUN_1404cdd84
// Addr: 1404cdd84
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cdd84(longlong param_1,longlong param_2)

{
  char *pcVar1;
  uint uVar2;
  uint *in_RAX;
  uint uVar4;
  char unaff_BL;
  undefined7 unaff_00000019;
  char *pcVar3;
  
  uVar4 = (uint)param_2 | *(uint *)(param_2 + param_1);
  uVar4 = uVar4 | *(uint *)((ulonglong)uVar4 + 7);
  LOCK();
  *(uint *)(ulonglong)uVar4 = *(uint *)(ulonglong)uVar4 & (uint)param_1;
  UNLOCK();
  *in_RAX = *in_RAX | (uint)in_RAX;
  uVar2 = (uint)in_RAX + 0x70000834;
  pcVar3 = (char *)(ulonglong)uVar2;
  out((short)uVar4,uVar2);
  pcVar1 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + -0x4fffbf11);
  *pcVar1 = *pcVar1 + unaff_BL;
  *pcVar3 = *pcVar3 + (char)uVar2;
  pcVar3[-0x11] = pcVar3[-0x11] + (char)(uVar4 >> 8);
  pcVar1 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + -0x4fffbf11);
  *pcVar1 = *pcVar1 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

