// Function: FUN_1404ba3a0
// Addr: 1404ba3a0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ba3a0(int *param_1,char *param_2,undefined8 param_3,byte *param_4)

{
  char *pcVar1;
  byte bVar2;
  byte in_AL;
  undefined7 in_register_00000001;
  char unaff_BL;
  int unaff_ESI;
  undefined2 in_FS;
  
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + 0x21004ba2);
  *pcVar1 = *pcVar1 + (char)param_2;
  *(byte *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + -0x54ffdf74);
  *pcVar1 = *pcVar1 + in_AL;
  *(undefined2 *)CONCAT71(in_register_00000001,in_AL) = in_FS;
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + -0x5e);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
  bVar2 = *param_4;
  *param_4 = *param_4 + in_AL;
  *(uint *)CONCAT71(in_register_00000001,in_AL) =
       (*(int *)CONCAT71(in_register_00000001,in_AL) - (int)param_1) - (uint)CARRY1(bVar2,in_AL);
  *(char *)param_1 = (char)*param_1 + unaff_BL;
  *param_1 = *param_1 + unaff_ESI;
  *param_2 = *param_2 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

