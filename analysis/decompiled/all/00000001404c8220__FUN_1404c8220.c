// Function: FUN_1404c8220
// Addr: 1404c8220
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c8220(longlong param_1)

{
  uint in_EAX;
  undefined4 in_register_00000004;
  char in_ZF;
  
  if (param_1 == 1 || in_ZF != '\0') {
    *(uint *)CONCAT44(in_register_00000004,in_EAX) =
         *(uint *)CONCAT44(in_register_00000004,in_EAX) ^ in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) ^ in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

