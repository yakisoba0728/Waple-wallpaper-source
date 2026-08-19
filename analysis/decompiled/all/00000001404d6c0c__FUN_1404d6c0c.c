// Function: FUN_1404d6c0c
// Addr: 1404d6c0c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d6c0c(undefined8 param_1)

{
  int in_EAX;
  undefined4 in_register_00000004;
  
  *(int *)CONCAT44(in_register_00000004,in_EAX) =
       *(int *)CONCAT44(in_register_00000004,in_EAX) + in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

