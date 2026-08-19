// Function: FUN_1404aff44
// Addr: 1404aff44
// Size: 1 bytes


void FUN_1404aff44(undefined1 *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  
  cVar3 = in((short)((int)in_EAX >> 0x1f));
  uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),cVar3);
  *param_1 = *param_1;
  *(char *)CONCAT44(in_register_00000004,uVar2) =
       *(char *)CONCAT44(in_register_00000004,uVar2) + cVar3;
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}

