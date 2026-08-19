// Function: FUN_1404a4bcc
// Addr: 1404a4bcc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a4bcc(void)

{
  uint in_EAX;
  undefined4 in_register_00000004;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

