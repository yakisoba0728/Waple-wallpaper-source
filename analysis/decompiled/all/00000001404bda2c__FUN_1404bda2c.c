// Function: FUN_1404bda2c
// Addr: 1404bda2c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bda2c(longlong param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  uint in_EAX;
  undefined1 *puVar2;
  char unaff_BL;
  undefined7 unaff_00000019;
  char *unaff_RSI;
  
  puVar2 = (undefined1 *)(ulonglong)(in_EAX & 0x25514a00);
  pcVar1 = (char *)(param_1 + CONCAT71(unaff_00000019,unaff_BL) * 8);
  *pcVar1 = *pcVar1 + unaff_BL;
  *param_4 = *param_4 + -8;
  *puVar2 = *puVar2;
  puVar2[0x50] = puVar2[0x50];
  pcVar1 = (char *)(param_1 + CONCAT71(unaff_00000019,unaff_BL) * 8);
  *pcVar1 = *pcVar1 + unaff_BL;
  *param_4 = *param_4;
  *(char *)(param_2 + -0x7dfff208) = *(char *)(param_2 + -0x7dfff208) + *unaff_RSI;
  *(char *)((ulonglong)(in_EAX & 0x25514a00) * 2) = (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

