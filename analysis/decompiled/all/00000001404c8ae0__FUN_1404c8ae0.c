// Function: FUN_1404c8ae0
// Addr: 1404c8ae0
// Size: 1 bytes


void FUN_1404c8ae0(void)

{
  byte bVar1;
  uint in_EAX;
  undefined4 in_register_00000004;
  longlong unaff_RSI;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  bVar1 = *(byte *)CONCAT44(in_register_00000004,in_EAX);
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (byte)in_EAX;
  *(char *)(unaff_RSI + 0x31) = *(char *)(unaff_RSI + 0x31) - CARRY1(bVar1,(byte)in_EAX);
  return;
}

