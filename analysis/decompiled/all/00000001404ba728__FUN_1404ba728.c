// Function: FUN_1404ba728
// Addr: 1404ba728
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ba728(char param_1,longlong param_2)

{
  char in_AL;
  undefined7 in_register_00000001;
  
  cRam21004ba6340020e9 = in_AL;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  *(char *)(param_2 + -0x5dffdf17) = *(char *)(param_2 + -0x5dffdf17) + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

