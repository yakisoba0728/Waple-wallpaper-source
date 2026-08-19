// Function: FUN_1404c70c4
// Addr: 1404c70c4
// Size: 1 bytes


void FUN_1404c70c4(undefined8 param_1,undefined2 param_2)

{
  code *pcVar1;
  byte in_AL;
  byte bVar2;
  undefined7 in_register_00000001;
  
  *(byte *)CONCAT71(in_register_00000001,in_AL) =
       *(byte *)CONCAT71(in_register_00000001,in_AL) ^ in_AL;
  bVar2 = in(param_2);
  *(byte *)CONCAT71(in_register_00000001,bVar2) =
       *(byte *)CONCAT71(in_register_00000001,bVar2) ^ bVar2;
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

