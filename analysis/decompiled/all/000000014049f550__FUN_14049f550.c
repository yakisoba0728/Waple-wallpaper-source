// Function: FUN_14049f550
// Addr: 14049f550
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049f550(longlong param_1,int *param_2,undefined8 param_3,byte *param_4)

{
  byte bVar1;
  byte bVar2;
  uint in_EAX;
  undefined4 in_register_00000004;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
  *(char *)(param_1 + -0x7eddffff) = *(char *)(param_1 + -0x7eddffff) + (char)in_EAX;
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(int *)CONCAT44(in_register_00000004,in_EAX) + in_EAX;
  bVar1 = *param_4;
  bVar2 = (byte)(in_EAX ^ 0xf4);
  *param_4 = *param_4 + bVar2;
  iRam00000001484b0667 = iRam00000001484b0667 + (in_EAX ^ 0xf4) + (uint)CARRY1(bVar1,bVar2);
  *param_2 = *param_2 + (int)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

