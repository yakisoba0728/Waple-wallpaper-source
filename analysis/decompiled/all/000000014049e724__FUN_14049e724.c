// Function: FUN_14049e724
// Addr: 14049e724
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049e724(longlong param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  byte bVar1;
  uint in_EAX;
  undefined4 in_register_00000004;
  byte bVar2;
  undefined6 uVar3;
  longlong unaff_RBX;
  
  uVar3 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar2 = (byte)((ulonglong)param_2 >> 8);
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  bVar1 = (byte)in_EAX;
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + bVar1;
  *(char *)(unaff_RBX + -0x26) = *(char *)(unaff_RBX + -0x26) + bVar2;
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + bVar1;
  *param_4 = *param_4 + (bVar1 ^ 0xe6);
  bVar2 = bVar2 | *(byte *)(CONCAT44(in_register_00000004,
                                     CONCAT31((int3)(in_EAX >> 8),
                                              bVar1 ^ 0xe6 |
                                              *(byte *)((CONCAT44(in_register_00000004,in_EAX) ^
                                                        0xe6) + (CONCAT44(in_register_00000004,
                                                                          in_EAX) ^ 0xe6)))) +
                           param_1);
  *(char *)CONCAT62(uVar3,CONCAT11(bVar2,(char)param_2)) =
       *(char *)CONCAT62(uVar3,CONCAT11(bVar2,(char)param_2)) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

