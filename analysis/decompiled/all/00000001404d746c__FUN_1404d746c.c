// Function: FUN_1404d746c
// Addr: 1404d746c
// Size: 1 bytes


void FUN_1404d746c(void)

{
  uint in_EAX;
  byte unaff_retaddr;
  
  *(char *)(ulonglong)(in_EAX | 0xf740b00) =
       *(char *)(ulonglong)(in_EAX | 0xf740b00) + (byte)in_EAX + CARRY1(unaff_retaddr,(byte)in_EAX);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

