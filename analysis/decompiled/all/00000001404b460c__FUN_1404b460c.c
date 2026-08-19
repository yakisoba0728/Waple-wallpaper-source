// Function: FUN_1404b460c
// Addr: 1404b460c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b460c(longlong param_1)

{
  byte bVar1;
  uint uVar2;
  uint *in_RAX;
  int *piVar3;
  longlong lVar4;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  uVar2 = *in_RAX;
  bVar1 = (byte)in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX + bVar1;
  lVar4 = param_1 + -1;
  if (lVar4 == 0 || (byte)*in_RAX == 0) {
    *in_RAX = (*in_RAX - (uint)in_RAX) - (uint)CARRY1((byte)uVar2,bVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  piVar3 = (int *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar1 + (byte)*in_RAX + (char)lVar4);
  uVar2 = (int)piVar3 + *piVar3;
  *(int *)(ulonglong)uVar2 =
       (*(int *)(ulonglong)uVar2 - uVar2) - (uint)((uint)lVar4 < *(uint *)(param_1 + -0x76afffe8));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

