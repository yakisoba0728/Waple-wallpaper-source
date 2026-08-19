// Function: FUN_1404b26c8
// Addr: 1404b26c8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b26c8(undefined8 param_1,int param_2)

{
  uint in_EAX;
  undefined4 in_register_00000004;
  longlong unaff_RSI;
  int *unaff_RDI;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
  *(char *)(unaff_RSI + 3) = *(char *)(unaff_RSI + 3) + (char)((uint)(param_2 + *unaff_RDI) >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

