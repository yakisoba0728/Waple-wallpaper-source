// Function: FUN_1404b7ba4
// Addr: 1404b7ba4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b7ba4(longlong param_1)

{
  char in_AL;
  undefined7 in_register_00000001;
  
  *(undefined1 *)(param_1 + -0x553affe3) = 0;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

