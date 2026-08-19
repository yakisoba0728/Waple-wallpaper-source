// Function: FUN_1404beadc
// Addr: 1404beadc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404beadc(char param_1)

{
  byte bVar1;
  uint in_EAX;
  undefined4 in_register_00000004;
  longlong unaff_RBX;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  bVar1 = *(byte *)CONCAT44(in_register_00000004,in_EAX);
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (byte)in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       (*(char *)CONCAT44(in_register_00000004,in_EAX) + -0x26) - CARRY1(bVar1,(byte)in_EAX);
  *(char *)(unaff_RBX + -0x47ffd9dd) = *(char *)(unaff_RBX + -0x47ffd9dd) + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

