// Function: FUN_1404c5a04
// Addr: 1404c5a04
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c5a04(void)

{
  int in_EAX;
  undefined4 in_register_00000004;
  
  *(int *)CONCAT44(in_register_00000004,in_EAX) =
       *(int *)CONCAT44(in_register_00000004,in_EAX) + in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

