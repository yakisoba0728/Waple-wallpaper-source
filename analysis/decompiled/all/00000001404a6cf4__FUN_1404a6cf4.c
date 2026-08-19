// Function: FUN_1404a6cf4
// Addr: 1404a6cf4
// Size: 1 bytes


void FUN_1404a6cf4(longlong param_1,longlong param_2)

{
  char *pcVar1;
  code *pcVar2;
  char in_AL;
  undefined1 in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  
  pcVar1 = (char *)(param_2 + param_1 * 2);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_1 >> 8);
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       & CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

