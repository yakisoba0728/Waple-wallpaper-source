// Function: FUN_1404a2938
// Addr: 1404a2938
// Size: 1 bytes


void FUN_1404a2938(byte *param_1)

{
  byte bVar1;
  char *in_RAX;
  char unaff_BL;
  byte unaff_SPL;
  
  *in_RAX = *in_RAX + (char)((ulonglong)param_1 >> 8);
  bVar1 = *param_1;
  *param_1 = *param_1 + unaff_SPL;
  *in_RAX = (*in_RAX - (char)param_1) - CARRY1(bVar1,unaff_SPL);
  *in_RAX = *in_RAX + unaff_BL;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

