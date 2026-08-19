// Function: FUN_1404a66e0
// Addr: 1404a66e0
// Size: 1 bytes


void FUN_1404a66e0(char *param_1)

{
  undefined8 in_RAX;
  char *unaff_RBX;
  
  *(int *)(unaff_RBX + 0x65f40009) = *(int *)(unaff_RBX + 0x65f40009) + 0x4a;
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
  *unaff_RBX = *unaff_RBX + (char)((ulonglong)param_1 >> 8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

