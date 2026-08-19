// Function: FUN_14049f540
// Addr: 14049f540
// Size: 1 bytes


void FUN_14049f540(longlong param_1)

{
  uint in_EAX;
  int iVar1;
  undefined4 in_register_00000004;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (byte)in_EAX;
  iVar1 = CONCAT31((int3)(in_EAX >> 8),(byte)in_EAX & *(byte *)(param_1 + -0x7ec1ffff));
  *(int *)CONCAT44(in_register_00000004,iVar1) =
       *(int *)CONCAT44(in_register_00000004,iVar1) + iVar1;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

