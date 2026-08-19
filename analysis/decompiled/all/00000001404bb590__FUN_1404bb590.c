// Function: FUN_1404bb590
// Addr: 1404bb590
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bb590(void)

{
  uint in_EAX;
  undefined4 in_register_00000004;
  bool in_OF;
  
  if (!in_OF) {
    *(uint *)CONCAT44(in_register_00000004,in_EAX) =
         *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

