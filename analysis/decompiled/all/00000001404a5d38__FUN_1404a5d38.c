// Function: FUN_1404a5d38
// Addr: 1404a5d38
// Size: 1 bytes


void FUN_1404a5d38(longlong param_1)

{
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  byte unaff_BH;
  
  *(byte *)(param_1 + -0x46c5fff8) = *(byte *)(param_1 + -0x46c5fff8) & unaff_BH;
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(byte *)CONCAT44(in_register_00000004,in_EAX) | (byte)in_EAX;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

