// Function: FUN_1404c469c
// Addr: 1404c469c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c469c(char *param_1)

{
  char in_AL;
  undefined7 in_register_00000001;
  
  out(0x35,in_AL);
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  *param_1 = *param_1 + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

