// Function: FUN_1404bb6a8
// Addr: 1404bb6a8
// Size: 1 bytes


void FUN_1404bb6a8(byte *param_1)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  uint in_EAX;
  undefined4 in_register_00000004;
  char unaff_BL;
  char unaff_BH;
  
  *param_1 = *param_1;
  bVar3 = (byte)in_EAX;
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + bVar3;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,in_EAX) + 0x6a);
  *pcVar1 = *pcVar1 + bVar3;
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + unaff_BH;
  bVar2 = *param_1;
  *param_1 = *param_1 + bVar3;
  *param_1 = (*param_1 - (char)param_1) - CARRY1(bVar2,bVar3);
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + unaff_BL;
  return;
}

