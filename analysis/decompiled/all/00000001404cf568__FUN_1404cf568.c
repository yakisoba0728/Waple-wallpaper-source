// Function: FUN_1404cf568
// Addr: 1404cf568
// Size: 1 bytes


void FUN_1404cf568(void)

{
  undefined1 in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  int unaff_ESI;
  
  (&stack0xffffffffad28004c)
  [(ulonglong)(uint)(unaff_ESI + *(int *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL))) * 8]
       = (&stack0xffffffffad28004c)
         [(ulonglong)
          (uint)(unaff_ESI + *(int *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL))) * 8] +
         in_AH;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

