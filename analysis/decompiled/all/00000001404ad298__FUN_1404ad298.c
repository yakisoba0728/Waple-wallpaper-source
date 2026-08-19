// Function: FUN_1404ad298
// Addr: 1404ad298
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ad298(longlong param_1,uint *param_2)

{
  char *pcVar1;
  char cVar2;
  byte in_AL;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  longlong unaff_RSI;
  int *unaff_RDI;
  
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       & CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       | in_AL;
  cVar2 = in_AH * '\x02';
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar2,in_AL))) =
       *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar2,in_AL)))
       | in_AL;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(cVar2,in_AL))) +
                   (longlong)param_2);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
  *(char *)((longlong)unaff_RDI + param_1) = *(char *)((longlong)unaff_RDI + param_1) + cVar2;
  *(char *)(unaff_RSI + param_1) = *(char *)(unaff_RSI + param_1) + (char)param_2;
  *param_2 = *param_2 >> 1 | (uint)((*param_2 & 1) != 0) << 0x1f;
  *unaff_RDI = *unaff_RDI + (int)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

