// Function: FUN_1404b4a7c
// Addr: 1404b4a7c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b4a7c(undefined8 param_1,undefined8 param_2)

{
  char in_AL;
  undefined7 in_register_00000001;
  int unaff_ESI;
  char in_CF;
  
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + (char)((ulonglong)param_2 >> 8) + in_CF;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  *(int *)CONCAT71(in_register_00000001,in_AL) =
       *(int *)CONCAT71(in_register_00000001,in_AL) + unaff_ESI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

