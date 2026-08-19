// Function: FUN_1404b1c34
// Addr: 1404b1c34
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b1c34(undefined8 param_1,char param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  uint uVar2;
  longlong in_RAX;
  byte unaff_BL;
  undefined7 unaff_00000019;
  char unaff_SPL;
  longlong unaff_RSI;
  
  *(byte *)CONCAT71(unaff_00000019,unaff_BL) = *(byte *)CONCAT71(unaff_00000019,unaff_BL) & unaff_BL
  ;
  *param_4 = *param_4 + unaff_SPL;
  *(char *)(in_RAX * 2) = *(char *)(in_RAX * 2) + (char)in_RAX;
  uVar2 = (int)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                        CONCAT11((char)((ulonglong)in_RAX >> 8) + param_2,(char)in_RAX)) + 0xc540000
  ;
  pcVar1 = (char *)(unaff_RSI + 0x470a0016 + (ulonglong)uVar2 * 2);
  *pcVar1 = *pcVar1 + (char)(uVar2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

