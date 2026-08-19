// Function: FUN_1404ab314
// Addr: 1404ab314
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ab314(undefined8 param_1,longlong param_2)

{
  char in_AL;
  undefined7 in_register_00000001;
  char in_CF;
  
  *(char *)(param_2 + 0x21004a) =
       *(char *)(param_2 + 0x21004a) + (char)((ulonglong)param_2 >> 8) + in_CF;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

