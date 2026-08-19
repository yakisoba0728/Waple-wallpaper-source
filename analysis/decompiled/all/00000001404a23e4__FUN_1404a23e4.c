// Function: FUN_1404a23e4
// Addr: 1404a23e4
// Size: 1 bytes


void FUN_1404a23e4(void)

{
  code *pcVar1;
  uint in_EAX;
  undefined4 in_register_00000004;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}

