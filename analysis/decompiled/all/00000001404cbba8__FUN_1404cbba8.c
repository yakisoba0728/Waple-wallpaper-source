// Function: FUN_1404cbba8
// Addr: 1404cbba8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cbba8(undefined8 param_1,undefined2 param_2)

{
  uint in_EAX;
  undefined4 in_register_00000004;
  undefined1 *unaff_RSI;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
  out(*unaff_RSI,param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

