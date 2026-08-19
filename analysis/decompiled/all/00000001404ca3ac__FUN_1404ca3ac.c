// Function: FUN_1404ca3ac
// Addr: 1404ca3ac
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ca3ac(longlong param_1,int param_2)

{
  char *pcVar1;
  char in_AL;
  char in_AH;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + param_1);
  *pcVar1 = *pcVar1 + in_AH + in_AL;
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x680032b0);
  *pcVar1 = *pcVar1 + unaff_BH;
  iRam000000017461a3ce = iRam000000017461a3ce + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

