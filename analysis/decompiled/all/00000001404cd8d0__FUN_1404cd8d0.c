// Function: FUN_1404cd8d0
// Addr: 1404cd8d0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cd8d0(void)

{
  uint *puVar1;
  uint in_EAX;
  undefined4 in_register_00000004;
  uint unaff_ESI;
  
  puVar1 = (uint *)(CONCAT44(in_register_00000004,in_EAX) + 8);
  *puVar1 = *puVar1 | unaff_ESI | in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

