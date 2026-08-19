// Function: FUN_1404c70e0
// Addr: 1404c70e0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c70e0(void)

{
  byte bVar1;
  uint in_EAX;
  undefined4 in_register_00000004;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  bVar1 = (byte)in_EAX;
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + bVar1;
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(byte *)CONCAT44(in_register_00000004,in_EAX) ^ bVar1;
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(byte *)CONCAT44(in_register_00000004,in_EAX) ^ bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

