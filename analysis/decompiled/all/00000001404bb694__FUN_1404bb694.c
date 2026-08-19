// Function: FUN_1404bb694
// Addr: 1404bb694
// Size: 1 bytes


void FUN_1404bb694(byte *param_1,char *param_2)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  uint in_EAX;
  uint uVar4;
  undefined4 in_register_00000004;
  char unaff_BL;
  char unaff_BH;
  
  *param_1 = *param_1;
  *param_2 = *param_2 + (char)in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
  uVar4 = in_EAX ^ 6;
  pcVar1 = (char *)((CONCAT44(in_register_00000004,in_EAX) ^ 6) + 0x6a);
  bVar3 = (byte)uVar4;
  *pcVar1 = *pcVar1 + bVar3;
  *(uint *)(CONCAT44(in_register_00000004,in_EAX) ^ 6) =
       *(uint *)(CONCAT44(in_register_00000004,in_EAX) ^ 6) & uVar4;
  *(char *)(CONCAT44(in_register_00000004,in_EAX) ^ 6) =
       *(char *)(CONCAT44(in_register_00000004,in_EAX) ^ 6) + unaff_BH;
  *param_1 = *param_1;
  *(byte *)(CONCAT44(in_register_00000004,in_EAX) ^ 6) =
       *(char *)(CONCAT44(in_register_00000004,in_EAX) ^ 6) + bVar3;
  pcVar1 = (char *)((CONCAT44(in_register_00000004,in_EAX) ^ 6) + 0x6a);
  *pcVar1 = *pcVar1 + bVar3;
  *(uint *)(CONCAT44(in_register_00000004,in_EAX) ^ 6) =
       *(uint *)(CONCAT44(in_register_00000004,in_EAX) ^ 6) & uVar4;
  *(char *)(CONCAT44(in_register_00000004,in_EAX) ^ 6) =
       *(char *)(CONCAT44(in_register_00000004,in_EAX) ^ 6) + unaff_BH;
  bVar2 = *param_1;
  *param_1 = *param_1 + bVar3;
  *param_1 = (*param_1 - (char)param_1) - CARRY1(bVar2,bVar3);
  *(char *)(CONCAT44(in_register_00000004,in_EAX) ^ 6) =
       *(char *)(CONCAT44(in_register_00000004,in_EAX) ^ 6) + unaff_BL;
  return;
}

