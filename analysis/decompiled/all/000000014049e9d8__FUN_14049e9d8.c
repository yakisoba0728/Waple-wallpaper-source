// Function: FUN_14049e9d8
// Addr: 14049e9d8
// Size: 1 bytes


void FUN_14049e9d8(void)

{
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(byte *)CONCAT44(in_register_00000004,in_EAX) | (byte)in_EAX;
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (byte)in_EAX;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

