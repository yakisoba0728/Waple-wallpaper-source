// Function: FUN_1404a566c
// Addr: 1404a566c
// Size: 1 bytes


void FUN_1404a566c(byte *param_1)

{
  byte bVar1;
  int in_EAX;
  char unaff_BL;
  
  *param_1 = *param_1 ^ (byte)((uint)in_EAX >> 8);
  param_1[-0x6bfff7b0] = param_1[-0x6bfff7b0] + unaff_BL;
  bVar1 = *param_1;
  *param_1 = *param_1 - 8;
  *(int *)(ulonglong)(in_EAX + 0xdc559002) =
       (*(int *)(ulonglong)(in_EAX + 0xdc559002) - (int)param_1) - (uint)(7 < bVar1);
  *param_1 = *param_1 + unaff_BL;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

