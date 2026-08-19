// Function: FUN_1404bd2b4
// Addr: 1404bd2b4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bd2b4(uint param_1)

{
  uint uVar1;
  uint *in_RAX;
  char *pcVar2;
  
  uVar1 = (uint)in_RAX;
  *in_RAX = *in_RAX + uVar1;
  *(uint *)((longlong)in_RAX + 0x78180012) = *(uint *)((longlong)in_RAX + 0x78180012) & param_1;
  pcVar2 = (char *)(ulonglong)(uVar1 + *in_RAX);
  pcVar2[0x14] = pcVar2[0x14] + (char)(param_1 >> 8) + CARRY4(uVar1,*in_RAX);
  *pcVar2 = *pcVar2 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

