// Function: FUN_1404aeccc
// Addr: 1404aeccc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aeccc(char *param_1,longlong param_2)

{
  char *pcVar1;
  char *in_RAX;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char unaff_SPL;
  undefined4 *unaff_RSI;
  
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x13);
  *pcVar1 = *pcVar1 + unaff_BH;
  *in_RAX = *in_RAX + (char)((ulonglong)param_1 >> 8);
  if ((POPCOUNT(*in_RAX) & 1U) == 0) {
    param_1[param_2 * 2] = param_1[param_2 * 2] + unaff_BH;
    *param_1 = *param_1 + unaff_SPL;
    *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) +
         ((byte)((ulonglong)in_RAX >> 8) & (byte)((uint)*unaff_RSI >> 8));
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

