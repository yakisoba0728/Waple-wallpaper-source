// Function: FUN_1404c6614
// Addr: 1404c6614
// Size: 1 bytes


void FUN_1404c6614(undefined8 param_1,longlong param_2)

{
  undefined1 in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  char *unaff_RBX;
  
  *(uint *)(param_2 + 5) = *(uint *)(param_2 + 5) | (uint)param_2;
  *unaff_RBX = *unaff_RBX;
  *unaff_RBX = *unaff_RBX +
               in_AH + *(char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + 0x21);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

