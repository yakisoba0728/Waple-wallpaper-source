// Function: FUN_14049f948
// Addr: 14049f948
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049f948(byte *param_1,int *param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  byte in_AL;
  byte in_AH;
  byte bVar2;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char cVar3;
  longlong unaff_RSI;
  char unaff_retaddr;
  
  cVar3 = (char)param_2;
  bVar2 = in_AH | in_AL;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar2,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar2,in_AL)))
       + cVar3;
  *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar2,in_AL))) =
       *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar2,in_AL))) +
       CONCAT22(in_register_00000002,CONCAT11(bVar2,in_AL));
  *param_4 = *param_4 + unaff_retaddr;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar2,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar2,in_AL)))
       + in_AL;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar2,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar2,in_AL)))
       + cVar3;
  *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar2,in_AL))) =
       *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar2,in_AL))) +
       CONCAT22(in_register_00000002,CONCAT11(bVar2,in_AL));
  *param_4 = *param_4 + in_AL;
  *param_1 = *param_1 & (byte)param_1;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar2,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar2,in_AL)))
       + bVar2;
  *param_2 = *param_2 + -0x435cffff;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(bVar2,in_AL))) + unaff_RSI * 8);
  *pcVar1 = *pcVar1 + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

