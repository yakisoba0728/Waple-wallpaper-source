// Function: FUN_1404c3950
// Addr: 1404c3950
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c3950(void)

{
  char in_AL;
  undefined7 in_register_00000001;
  
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

