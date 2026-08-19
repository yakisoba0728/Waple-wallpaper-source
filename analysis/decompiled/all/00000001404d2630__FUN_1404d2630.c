// Function: FUN_1404d2630
// Addr: 1404d2630
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d2630(undefined8 param_1,int *param_2)

{
  char *pcVar1;
  longlong in_RAX;
  char unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RSI;
  
  *(int *)(in_RAX + 0xd) = *(int *)(in_RAX + 0xd) + (int)in_RAX;
  *(char *)(in_RAX + -0x78) = *(char *)(in_RAX + -0x78) + (char)in_RAX;
  *(char *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + unaff_BL
  ;
  *param_2 = *param_2 + (int)param_2;
  pcVar1 = (char *)((ulonglong)((int)in_RAX + 0x7683700) + unaff_RSI * 8);
  *pcVar1 = *pcVar1 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

