// Function: FUN_1404c8488
// Addr: 1404c8488
// Size: 1 bytes


void FUN_1404c8488(char *param_1)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  uint in_EAX;
  undefined4 in_register_00000004;
  char *unaff_RBX;
  char unaff_R12B;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  bVar2 = *(byte *)CONCAT44(in_register_00000004,in_EAX);
  bVar3 = (byte)in_EAX;
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + bVar3;
  *unaff_RBX = *unaff_RBX + (char)param_1 + CARRY1(bVar2,bVar3);
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) ^ in_EAX;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,in_EAX) + -0x7d);
  *pcVar1 = *pcVar1 + bVar3;
  *param_1 = *param_1 + unaff_R12B;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)param_1;
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + bVar3;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

