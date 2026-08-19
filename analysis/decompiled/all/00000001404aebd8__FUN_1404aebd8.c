// Function: FUN_1404aebd8
// Addr: 1404aebd8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aebd8(char *param_1,longlong param_2)

{
  undefined2 in_AX;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char unaff_SPL;
  undefined4 *unaff_RSI;
  bool in_CF;
  bool in_ZF;
  
  if (!in_CF && !in_ZF) {
    param_1[param_2 * 2] = param_1[param_2 * 2] + unaff_BH;
    *param_1 = *param_1 + unaff_SPL;
    *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) +
         ((byte)((ushort)in_AX >> 8) & (byte)((uint)*unaff_RSI >> 8));
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

