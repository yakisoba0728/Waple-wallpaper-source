// Function: FUN_1404b4f84
// Addr: 1404b4f84
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b4f84(undefined8 param_1,longlong param_2)

{
  uint in_EAX;
  undefined4 in_register_00000004;
  
  *(byte *)(param_2 + 0x3002e004) = *(byte *)(param_2 + 0x3002e004) | (byte)in_EAX;
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (byte)in_EAX;
  uRam0000000194504f94 = uRam0000000194504f94 & in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

