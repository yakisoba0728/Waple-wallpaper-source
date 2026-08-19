// Function: FUN_1404badc8
// Addr: 1404badc8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404badc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  uint in_EAX;
  uint uVar1;
  char *pcVar2;
  char *unaff_RBX;
  char unaff_SPL;
  
  uVar1 = (in_EAX ^ 0x5a002105) + 0xacc40021;
  *param_4 = *param_4 + unaff_SPL;
  *(char *)(ulonglong)uVar1 = *(char *)(ulonglong)uVar1 + (char)uVar1;
  *unaff_RBX = *unaff_RBX + (char)(uVar1 >> 8);
  uVar1 = (in_EAX ^ 0x5a002105) + 0xb1f90042;
  *(uint *)(ulonglong)uVar1 = *(uint *)(ulonglong)uVar1 & uVar1;
  pcVar2 = (char *)CONCAT71((uint7)(uint3)(uVar1 >> 8),0xac);
  *param_4 = *param_4 + unaff_SPL;
  *pcVar2 = *pcVar2 + -0x54;
  pcVar2[0x23002104] = pcVar2[0x23002104] + (char)((ulonglong)param_2 >> 8);
  *param_4 = *param_4 + -0x33;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

