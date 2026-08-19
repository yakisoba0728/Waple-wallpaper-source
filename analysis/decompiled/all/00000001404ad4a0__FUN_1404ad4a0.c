// Function: FUN_1404ad4a0
// Addr: 1404ad4a0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ad4a0(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  char in_AL;
  byte in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  byte bVar2;
  longlong unaff_RBX;
  
  bVar2 = (byte)((ulonglong)param_1 >> 8);
  out(0x11,in_AL);
  pcVar1 = (char *)(unaff_RBX + 0x21004a + param_2 * 8);
  *pcVar1 = *pcVar1 + bVar2;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) +
       CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  out(0x11,in_AL);
  pcVar1 = (char *)(unaff_RBX + 0x21004a + param_2 * 8);
  *pcVar1 = *pcVar1 + (bVar2 & in_AH);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

