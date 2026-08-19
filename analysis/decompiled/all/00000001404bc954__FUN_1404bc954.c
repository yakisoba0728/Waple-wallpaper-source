// Function: FUN_1404bc954
// Addr: 1404bc954
// Size: 1 bytes


void FUN_1404bc954(longlong param_1,undefined8 *param_2)

{
  char *pcVar1;
  char in_AL;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  undefined4 *unaff_RSI;
  
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       & CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,
                                      CONCAT11(in_AH,in_AL + *(char *)CONCAT44(in_register_00000004,
                                                                               CONCAT22(
                                                  in_register_00000002,CONCAT11(in_AH,in_AL)))))) +
                   0xd);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_1 >> 8);
  *(char *)(param_1 + -1) = *(char *)(param_1 + -1) + in_AH;
  out(*unaff_RSI,(short)param_2);
                    /* WARNING: Could not recover jumptable at 0x0001404bc961. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_2)();
  return;
}

