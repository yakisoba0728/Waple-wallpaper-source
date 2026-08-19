// Function: FUN_1404cf4fc
// Addr: 1404cf4fc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cf4fc(void)

{
  uint in_EAX;
  undefined4 in_register_00000004;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

