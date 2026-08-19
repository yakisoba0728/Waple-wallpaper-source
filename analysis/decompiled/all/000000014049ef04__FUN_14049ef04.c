// Function: FUN_14049ef04
// Addr: 14049ef04
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049ef04(char param_1,int param_2)

{
  byte *pbVar1;
  char *pcVar2;
  byte in_AL;
  byte in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  byte bVar3;
  int unaff_EBX;
  undefined4 unaff_0000001c;
  int *unaff_RSI;
  
  *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) +
       unaff_EBX;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       | CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  pcVar2 = (char *)((longlong)unaff_RSI + CONCAT44(unaff_0000001c,unaff_EBX));
  bVar3 = (byte)((uint)param_2 >> 8);
  *pcVar2 = *pcVar2 - bVar3;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + (char)unaff_EBX;
  *unaff_RSI = *unaff_RSI + param_2;
  pcVar2 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) +
                   (longlong)unaff_RSI * 8);
  *pcVar2 = *pcVar2 + param_1;
  pbVar1 = (byte *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH | in_AL,in_AL))) + 7);
  *pbVar1 = *pbVar1 | bVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

