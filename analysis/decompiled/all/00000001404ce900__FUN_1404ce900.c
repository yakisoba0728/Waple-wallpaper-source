// Function: FUN_1404ce900
// Addr: 1404ce900
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ce900(longlong param_1)

{
  uint in_EAX;
  undefined4 in_register_00000004;
  char unaff_SIL;
  longlong unaff_R15;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
  if (param_1 + -1 == 0 || *(char *)CONCAT44(in_register_00000004,in_EAX) == '\0') {
    *(char *)(unaff_R15 + 0x3b) = *(char *)(unaff_R15 + 0x3b) + (char)(param_1 + -1);
    *(char *)(unaff_R15 + 0x2f01004c) = *(char *)(unaff_R15 + 0x2f01004c) + unaff_SIL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

