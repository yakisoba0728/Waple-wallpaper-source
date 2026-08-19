// Function: FUN_1404c50f8
// Addr: 1404c50f8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c50f8(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  undefined4 in_EAX;
  uint uVar2;
  undefined4 uVar3;
  undefined4 in_register_00000004;
  byte in_CF;
  undefined3 uVar4;
  
  *(int *)(param_2 + 0x1c01300d) = *(int *)(param_2 + 0x1c01300d) + (int)param_2 + (uint)in_CF;
  bVar1 = (byte)in_EAX;
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(byte *)CONCAT44(in_register_00000004,in_EAX) | bVar1;
  uVar4 = (undefined3)((uint)in_EAX >> 8);
  uVar2 = CONCAT31(uVar4,bVar1 + 0x8c);
  *(uint *)CONCAT44(in_register_00000004,uVar2) =
       *(uint *)CONCAT44(in_register_00000004,uVar2) | uVar2;
  uVar3 = CONCAT31(uVar4,bVar1 + 0x28);
  *(byte *)CONCAT44(in_register_00000004,uVar3) =
       *(byte *)CONCAT44(in_register_00000004,uVar3) | bVar1 + 0x28;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

