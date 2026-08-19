// Function: FUN_1404bc8cc
// Addr: 1404bc8cc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bc8cc(uint *param_1)

{
  char cVar1;
  uint in_EAX;
  uint uVar2;
  uint *unaff_RBX;
  char *pcVar3;
  
  uVar2 = in_EAX | *param_1;
  *(byte *)(ulonglong)uVar2 = *(byte *)(ulonglong)uVar2 & (byte)uVar2;
  cVar1 = (byte)uVar2 + 0x30;
  pcVar3 = (char *)(ulonglong)CONCAT31((int3)(uVar2 >> 8),cVar1);
  *pcVar3 = *pcVar3 + cVar1;
  *unaff_RBX = *unaff_RBX & (uint)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

