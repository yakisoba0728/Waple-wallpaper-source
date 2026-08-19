// Function: FUN_1404bd428
// Addr: 1404bd428
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bd428(char *param_1,longlong param_2,undefined8 param_3,undefined1 *param_4)

{
  char *pcVar1;
  uint in_EAX;
  undefined1 *puVar2;
  int *piVar3;
  char unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RBP;
  
  *(int *)CONCAT71(unaff_00000019,unaff_BL) =
       *(int *)CONCAT71(unaff_00000019,unaff_BL) << ((byte)param_1 & 0x1f);
  puVar2 = (undefined1 *)(ulonglong)(in_EAX & 0x4bd31c00);
  *param_1 = *param_1 + (char)((in_EAX & 0x4bd31c00) >> 8);
  *puVar2 = *puVar2;
  puVar2[0x23] = puVar2[0x23] + (char)((ulonglong)param_2 >> 8);
  piVar3 = (int *)(ulonglong)(in_EAX & 0x1031000);
  pcVar1 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + param_2 * 8);
  *pcVar1 = *pcVar1 + unaff_BL;
  *param_4 = *param_4;
  LocalDescriptorTableRegister((short)piVar3[unaff_RBP * 2]);
  *(char *)(param_2 + -0x28) = *(char *)(param_2 + -0x28) + (byte)param_1;
  *piVar3 = *piVar3 + (in_EAX & 0x1031000);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

