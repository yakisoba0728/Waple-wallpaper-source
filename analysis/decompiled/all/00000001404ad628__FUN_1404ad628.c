// Function: FUN_1404ad628
// Addr: 1404ad628
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ad628(void)

{
  uint in_EAX;
  uint uVar1;
  int *piVar2;
  
  uVar1 = in_EAX + 0xb0000c74;
  piVar2 = (int *)(ulonglong)uVar1;
  *piVar2 = *piVar2 + uVar1 + (uint)(0x4ffff38b < in_EAX);
  *piVar2 = *piVar2 + uVar1 + 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

