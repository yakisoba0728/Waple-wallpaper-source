// Function: FUN_1404c95e0
// Addr: 1404c95e0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c95e0(undefined8 param_1,longlong param_2)

{
  char in_AL;
  undefined7 in_register_00000001;
  char unaff_BH;
  
  (&stack0x0021004c)[param_2 * 4] = (&stack0x0021004c)[param_2 * 4] + unaff_BH;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

