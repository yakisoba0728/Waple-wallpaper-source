// Function: FUN_1404a4c94
// Addr: 1404a4c94
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a4cb1) overlaps instruction at (ram,0x0001404a4cac)
    */
/* WARNING: Removing unreachable block (ram,0x0001404a4cb1) */

void FUN_1404a4c94(char *param_1)

{
  uint in_EAX;
  uint uVar1;
  
  uVar1 = in_EAX | 0xb500c60;
  *(byte *)(ulonglong)uVar1 = *(byte *)(ulonglong)uVar1 ^ (byte)uVar1;
  *param_1 = *param_1 + (byte)uVar1;
  uRam00000001a44f4cb4 = uRam00000001a44f4cb4 & (in_EAX | 0x3ffd0d76);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

