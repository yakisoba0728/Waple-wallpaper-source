// Function: FUN_1404a6264
// Addr: 1404a6264
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a6264(void)

{
  uint in_EAX;
  undefined4 in_register_00000004;
  int unaff_EBP;
  byte in_CF;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(int *)CONCAT44(in_register_00000004,in_EAX) + unaff_EBP + (uint)in_CF;
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) | in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

