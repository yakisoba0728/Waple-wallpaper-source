// Function: FUN_1404cba98
// Addr: 1404cba98
// Size: 1 bytes


void FUN_1404cba98(undefined8 param_1)

{
  code *pcVar1;
  uint in_EAX;
  undefined4 in_register_00000004;
  undefined8 unaff_retaddr;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
  pcVar1 = (code *)swi(1);
  (*pcVar1)(param_1,unaff_retaddr);
  return;
}

