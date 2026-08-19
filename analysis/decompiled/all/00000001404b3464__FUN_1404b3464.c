// Function: FUN_1404b3464
// Addr: 1404b3464
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b3464(undefined8 param_1,longlong param_2)

{
  uint in_EAX;
  char unaff_BL;
  
  uRam000000012450346c = uRam000000012450346c & in_EAX;
  *(char *)(param_2 + -0x20) = *(char *)(param_2 + -0x20) + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

