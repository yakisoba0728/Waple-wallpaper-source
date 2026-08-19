// Function: FUN_1404c82bc
// Addr: 1404c82bc
// Size: 1 bytes


void FUN_1404c82bc(byte *param_1,undefined8 param_2)

{
  uint *puVar1;
  int in_EAX;
  byte bVar2;
  
  bVar2 = (byte)((ulonglong)param_2 >> 8);
  *param_1 = *param_1 | bVar2;
  *param_1 = *param_1 | bVar2;
  puVar1 = (uint *)((ulonglong)
                    CONCAT31((int3)((uint)(in_EAX + -0x56fff51c) >> 8),
                             (char)(in_EAX + -0x56fff51c) + (char)param_2 + bVar2) * 2 + 0x21);
  *puVar1 = *puVar1 | 0x5000205;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

