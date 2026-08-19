// Function: FUN_1404af9a4
// Addr: 1404af9a4
// Size: 1 bytes


void FUN_1404af9a4(uint param_1,undefined8 param_2)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  undefined4 uVar4;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & param_1;
  cVar3 = (char)in_EAX + *(char *)CONCAT44(in_register_00000004,in_EAX);
  uVar4 = CONCAT31((int3)((uint)in_EAX >> 8),cVar3);
  (&stack0x00000000)[CONCAT44(in_register_00000004,uVar4) * 4] =
       (&stack0x00000000)[CONCAT44(in_register_00000004,uVar4) * 4] |
       (byte)((ulonglong)param_2 >> 8);
  pcVar1 = (char *)(CONCAT44(in_register_00000004,uVar4) + -0x28ffeb51);
  *pcVar1 = *pcVar1 + cVar3;
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

