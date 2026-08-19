// Function: FUN_1404ae7ec
// Addr: 1404ae7ec
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ae7ec(undefined8 param_1,char *param_2,undefined8 param_3,char *param_4)

{
  byte bVar1;
  char *in_RAX;
  longlong unaff_RSI;
  longlong in_FS_OFFSET;
  
  *param_4 = *param_4;
  bVar1 = (byte)in_RAX;
  *param_2 = *param_2 + bVar1;
  *in_RAX = *in_RAX + bVar1;
  in_RAX[in_FS_OFFSET] = in_RAX[in_FS_OFFSET] | bVar1;
  *(undefined1 *)(unaff_RSI + 0x13) = *(undefined1 *)(unaff_RSI + 0x13);
  *param_4 = *param_4 + '\b';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

