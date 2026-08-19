// Function: FUN_1404d71f8
// Addr: 1404d71f8
// Size: 1 bytes


char FUN_1404d71f8(char *param_1,undefined8 param_2)

{
  char cVar1;
  char in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  undefined8 *puVar2;
  undefined8 *unaff_RBP;
  undefined8 uStack_10;
  
  param_1[0x4d] = param_1[0x4d] + (char)((ulonglong)param_2 >> 8);
  *param_1 = *param_1 + in_AH;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  puVar2 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar1 = '\x11';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar2 = puVar2 + -1;
    *puVar2 = *unaff_RBP;
    cVar1 = cVar1 + -1;
  } while ('\0' < cVar1);
  return in_AL + in_AH;
}

