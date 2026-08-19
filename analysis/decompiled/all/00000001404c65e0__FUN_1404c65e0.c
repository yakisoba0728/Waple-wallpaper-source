// Function: FUN_1404c65e0
// Addr: 1404c65e0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c65e0(longlong param_1,char param_2)

{
  undefined1 in_AL;
  undefined7 in_register_00000001;
  char in_ZF;
  
  if (param_1 == 1 || in_ZF != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(CONCAT71(in_register_00000001,in_AL) ^ 10) =
       *(char *)(CONCAT71(in_register_00000001,in_AL) ^ 10) + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

