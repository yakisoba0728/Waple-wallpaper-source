// Function: FUN_1404c7bac
// Addr: 1404c7bac
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c7bac(void)

{
  uint in_EAX;
  undefined4 in_register_00000004;
  
  uRam0000000124517bb8 = uRam0000000124517bb8 & in_EAX;
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) | in_EAX;
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) ^ in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

