// Function: FUN_14049e3c4
// Addr: 14049e3c4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049e3c4(int *param_1,longlong param_2)

{
  byte bVar1;
  byte in_AL;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  byte bVar2;
  int unaff_ESI;
  undefined4 unaff_00000034;
  byte *unaff_RDI;
  
  bVar2 = (byte)((ulonglong)param_1 >> 8);
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       & CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  bVar1 = *(byte *)CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)));
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  *param_1 = *param_1 + unaff_ESI + (uint)CARRY1(bVar1,in_AL);
  *(byte *)CONCAT44(unaff_00000034,unaff_ESI) = *(char *)CONCAT44(unaff_00000034,unaff_ESI) + bVar2;
  *(char *)(param_2 + 0x210049) = *(char *)(param_2 + 0x210049) + in_AH;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  *unaff_RDI = *unaff_RDI ^ bVar2;
  *(char *)param_1 = (char)*param_1 + (char)param_2;
  *(char *)(param_2 + 0x7010049) = *(char *)(param_2 + 0x7010049) + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

