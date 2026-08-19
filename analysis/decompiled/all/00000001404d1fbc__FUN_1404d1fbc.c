// Function: FUN_1404d1fbc
// Addr: 1404d1fbc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d1fbc(undefined8 param_1,byte param_2)

{
  char in_AL;
  undefined7 in_register_00000001;
  
  cRam000000015e4d6ce1 = cRam000000015e4d6ce1 + in_AL;
  *(byte *)CONCAT71(in_register_00000001,in_AL) =
       *(byte *)CONCAT71(in_register_00000001,in_AL) | param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

