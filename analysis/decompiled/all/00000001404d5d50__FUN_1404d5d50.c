// Function: FUN_1404d5d50
// Addr: 1404d5d50
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d5d50(uint *param_1,uint param_2)

{
  char in_AL;
  undefined7 in_register_00000001;
  
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  *param_1 = *param_1 & param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

