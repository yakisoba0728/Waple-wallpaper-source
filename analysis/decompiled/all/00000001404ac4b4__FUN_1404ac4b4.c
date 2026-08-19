// Function: FUN_1404ac4b4
// Addr: 1404ac4b4
// Size: 1 bytes


undefined4 FUN_1404ac4b4(char *param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  char in_AL;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  
  *param_1 = *param_1 + in_AH;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) + -0x3efff004);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
  uVar2 = LocalDescriptorTableRegister();
  return uVar2;
}

