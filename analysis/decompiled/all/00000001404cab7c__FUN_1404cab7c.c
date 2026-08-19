// Function: FUN_1404cab7c
// Addr: 1404cab7c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cab7c(undefined8 param_1,longlong param_2)

{
  char in_AL;
  undefined7 in_register_00000001;
  
  *(char *)(param_2 + 0x21004c) = *(char *)(param_2 + 0x21004c) + -6;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

