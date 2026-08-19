// Function: FUN_1404af830
// Addr: 1404af830
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404af830(char *param_1,undefined2 param_2)

{
  char *pcVar1;
  uint in_EAX;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char unaff_SIL;
  char in_CF;
  
  pcVar1 = (char *)((undefined4 *)(ulonglong)in_EAX + 1);
  out(*(undefined4 *)(ulonglong)in_EAX,param_2);
  *param_1 = *param_1 + unaff_SIL + in_CF + -9;
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + unaff_BH;
  *pcVar1 = *pcVar1 + (char)((ushort)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

