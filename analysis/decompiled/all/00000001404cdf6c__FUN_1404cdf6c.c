// Function: FUN_1404cdf6c
// Addr: 1404cdf6c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cdf6c(void)

{
  uint in_EAX;
  undefined4 in_register_00000004;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

