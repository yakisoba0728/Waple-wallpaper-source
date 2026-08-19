// Function: FUN_1404cceac
// Addr: 1404cceac
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cceac(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  uint in_EAX;
  undefined4 in_register_00000004;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  bVar1 = *(byte *)CONCAT44(in_register_00000004,in_EAX);
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (byte)in_EAX;
  *(char *)(param_2 + 0x35) = *(char *)(param_2 + 0x35) + CARRY1(bVar1,(byte)in_EAX);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

