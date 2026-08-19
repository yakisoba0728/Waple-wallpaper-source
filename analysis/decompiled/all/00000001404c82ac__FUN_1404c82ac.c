// Function: FUN_1404c82ac
// Addr: 1404c82ac
// Size: 1 bytes


void FUN_1404c82ac(byte *param_1,undefined8 param_2)

{
  uint *puVar1;
  char cVar2;
  uint in_EAX;
  undefined4 uVar3;
  undefined4 in_register_00000004;
  
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(byte *)CONCAT44(in_register_00000004,in_EAX) ^ (byte)param_1;
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) ^ in_EAX;
  puVar1 = (uint *)(CONCAT44(in_register_00000004,in_EAX) + 0x21 +
                   CONCAT44(in_register_00000004,in_EAX));
  *puVar1 = *puVar1 | 0x5000205;
  cVar2 = in(10);
  param_1[-0xdffcef8] = param_1[-0xdffcef8] + (char)((ulonglong)param_1 >> 8);
  *param_1 = *param_1 | (byte)((ulonglong)param_2 >> 8);
  uVar3 = CONCAT31((int3)(in_EAX >> 8),cVar2 + (char)param_2);
  puVar1 = (uint *)(CONCAT44(in_register_00000004,uVar3) + 0x21 +
                   CONCAT44(in_register_00000004,uVar3));
  *puVar1 = *puVar1 | 0x5000205;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

