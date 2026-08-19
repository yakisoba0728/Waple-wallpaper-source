// Function: FUN_1404b4478
// Addr: 1404b4478
// Size: 1 bytes


void FUN_1404b4478(undefined8 param_1,longlong param_2)

{
  uint *puVar1;
  code *pcVar2;
  uint in_EAX;
  undefined4 in_register_00000004;
  
  puVar1 = (uint *)(param_2 + CONCAT44(in_register_00000004,in_EAX));
  *puVar1 = *puVar1 & in_EAX;
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

