// Function: FUN_1404affe8
// Addr: 1404affe8
// Size: 1 bytes


void FUN_1404affe8(char *param_1)

{
  int in_EAX;
  byte *unaff_RBX;
  char unaff_SPL;
  undefined4 *unaff_RSI;
  
  *unaff_RBX = *unaff_RBX | (byte)param_1;
  *param_1 = *param_1 + unaff_SPL;
  *unaff_RBX = *unaff_RBX +
               ((byte)((uint)(in_EAX + -0x5ffff1ac >> ((byte)param_1 & 0x1f)) >> 8) &
               (byte)((uint)*unaff_RSI >> 8));
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

