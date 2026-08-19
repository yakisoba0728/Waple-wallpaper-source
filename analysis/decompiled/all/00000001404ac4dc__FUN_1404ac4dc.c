// Function: FUN_1404ac4dc
// Addr: 1404ac4dc
// Size: 1 bytes


void FUN_1404ac4dc(uint param_1,longlong param_2)

{
  byte bVar1;
  char in_AL;
  byte bVar2;
  byte in_AH;
  undefined6 in_register_00000002;
  byte *unaff_RDI;
  
  *(uint *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(uint *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) & param_1;
  bVar2 = in_AL + *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL));
  (&stack0x00000000)[param_2] = (&stack0x00000000)[param_2] | in_AH;
  *unaff_RDI = *unaff_RDI & bVar2;
  bVar1 = *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar2));
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar2)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar2)) + bVar2;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar2)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar2)) + bVar2 + CARRY1(bVar1,bVar2);
  return;
}

