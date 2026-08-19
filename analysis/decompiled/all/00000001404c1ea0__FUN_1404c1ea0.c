// Function: FUN_1404c1ea0
// Addr: 1404c1ea0
// Size: 1 bytes


/* WARNING: This function may have set the stack pointer */

void FUN_1404c1ea0(uint *param_1,uint *param_2)

{
  byte *pbVar1;
  byte in_AL;
  char cVar2;
  char in_AH;
  undefined6 in_register_00000002;
  
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) ^ in_AL;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  *param_1 = *param_1 & (uint)param_2;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) | in_AL;
  pbVar1 = (byte *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + (longlong)param_2);
  *pbVar1 = *pbVar1 | (byte)param_2;
  do {
    param_1 = (uint *)((longlong)param_1 + -1);
  } while (param_1 != (uint *)0x0 && *pbVar1 != 0);
  cVar2 = in_AL - *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL));
  cVar2 = cVar2 - *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar2));
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar2)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar2)) + cVar2;
  *(char *)param_2 = (char)*param_2 + '\x01';
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar2 + in_AH)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar2 + in_AH)) + (byte)param_2;
                    /* WARNING: Could not recover jumptable at 0x0001404c1ec5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulonglong)*param_2)();
  return;
}

