// Function: FUN_1404b2ac0
// Addr: 1404b2ac0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b2ac0(byte param_1)

{
  uint in_EAX;
  undefined4 in_register_00000004;
  longlong unaff_RSI;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
  *(byte *)(unaff_RSI + -0x71bfffe9) = *(byte *)(unaff_RSI + -0x71bfffe9) & param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

