// Function: FUN_1404a2f64
// Addr: 1404a2f64
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a2f64(char *param_1,undefined8 param_2)

{
  char in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  byte bVar1;
  undefined6 uVar2;
  undefined2 in_ES;
  
  uVar2 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar1 = (byte)((ulonglong)param_2 >> 8);
  param_1[0x15000588] = param_1[0x15000588] + bVar1;
  uRam000000018a788f77 = in_ES;
  *param_1 = *param_1 + in_AH;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  param_1[0x15000588] = param_1[0x15000588] + bVar1;
  uRam000000018a788f87 = in_ES;
  *param_1 = *param_1 + in_AL;
  bVar1 = bVar1 | *(byte *)((longlong)param_1 * 2);
  *(char *)CONCAT62(uVar2,CONCAT11(bVar1,(char)param_2)) =
       *(char *)CONCAT62(uVar2,CONCAT11(bVar1,(char)param_2)) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

