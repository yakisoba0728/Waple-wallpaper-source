// Function: FUN_1404c8fac
// Addr: 1404c8fac
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c8fac(undefined8 param_1,longlong param_2)

{
  uint in_EAX;
  undefined4 in_register_00000004;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
  *(char *)(param_2 + -0x7da1ffcf) = *(char *)(param_2 + -0x7da1ffcf) + (char)in_EAX;
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) ^ in_EAX;
  *unaff_RDI = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

