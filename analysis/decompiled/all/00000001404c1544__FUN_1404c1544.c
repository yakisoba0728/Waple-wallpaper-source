// Function: FUN_1404c1544
// Addr: 1404c1544
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c1544(undefined8 param_1,char *param_2,undefined8 param_3,char *param_4)

{
  ulonglong in_RAX;
  char *pcVar1;
  char *pcVar2;
  int *piVar3;
  char unaff_BL;
  longlong unaff_retaddr;
  
  pcVar1 = (char *)(in_RAX & 0xffffffffffffff29);
  pcVar1[0x210049ed] = pcVar1[0x210049ed] + (char)((ulonglong)param_1 >> 8);
  *param_2 = *param_2 + (char)pcVar1;
  *pcVar1 = *pcVar1 + (char)pcVar1;
  pcVar2 = (char *)((ulonglong)pcVar1 ^ 6);
  *pcVar2 = *pcVar2 + (char)pcVar2;
  piVar3 = (int *)(CONCAT71((int7)((ulonglong)pcVar1 >> 8),(char)pcVar2) & 0xffffffffffffff29);
  *(char *)(unaff_retaddr + 0x24) = *(char *)(unaff_retaddr + 0x24) + unaff_BL;
  *piVar3 = *piVar3 - (int)piVar3;
  *param_4 = *param_4 + '\b';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

