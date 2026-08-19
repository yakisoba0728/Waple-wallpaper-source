// Function: FUN_1404a82f8
// Addr: 1404a82f8
// Size: 1 bytes


void FUN_1404a82f8(char *param_1,uint param_2)

{
  longlong in_RAX;
  
  *(uint *)(param_1 + in_RAX + 0x10c49400) = *(uint *)(param_1 + in_RAX + 0x10c49400) & param_2;
  *param_1 = *param_1 + (char)param_2;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

