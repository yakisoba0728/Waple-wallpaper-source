// Function: FUN_1404cfa84
// Addr: 1404cfa84
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cfa84(undefined8 param_1)

{
  uint in_EAX;
  undefined4 in_register_00000004;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

