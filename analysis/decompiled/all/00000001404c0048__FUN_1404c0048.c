// Function: FUN_1404c0048
// Addr: 1404c0048
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c0048(undefined8 param_1,byte *param_2)

{
  byte in_AL;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  byte bVar1;
  uint unaff_EBX;
  undefined4 unaff_0000001c;
  byte unaff_retaddr;
  
  bVar1 = (byte)((ulonglong)param_2 >> 8);
  *(int *)CONCAT44(unaff_0000001c,unaff_EBX) = *(int *)CONCAT44(unaff_0000001c,unaff_EBX) + -1;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       & unaff_EBX;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       | in_AL;
  *(char *)CONCAT44(unaff_0000001c,unaff_EBX) =
       *(char *)CONCAT44(unaff_0000001c,unaff_EBX) + in_AH + (unaff_retaddr < bVar1);
  *param_2 = *param_2 | bVar1;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

