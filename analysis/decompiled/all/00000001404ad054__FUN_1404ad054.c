// Function: FUN_1404ad054
// Addr: 1404ad054
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ad054(void)

{
  int in_EAX;
  undefined4 in_register_00000004;
  char unaff_SPL;
  char *in_R9;
  byte in_CF;
  bool in_OF;
  
  if (!in_OF) {
    *in_R9 = *in_R9 + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(int *)CONCAT44(in_register_00000004,in_EAX) + in_EAX + (uint)in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

