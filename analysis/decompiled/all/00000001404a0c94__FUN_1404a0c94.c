// Function: FUN_1404a0c94
// Addr: 1404a0c94
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a0c94(void)

{
  uint unaff_EBX;
  uint *unaff_RDI;
  
  *unaff_RDI = *unaff_RDI & unaff_EBX;
  *(undefined1 *)((ulonglong)&stack0x00000000 & 0xffffffff) =
       *(undefined1 *)((ulonglong)&stack0x00000000 & 0xffffffff);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

