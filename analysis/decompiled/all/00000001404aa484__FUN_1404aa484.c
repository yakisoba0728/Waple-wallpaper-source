// Function: FUN_1404aa484
// Addr: 1404aa484
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aa484(char param_1,undefined8 param_2)

{
  char *pcVar1;
  char *in_RAX;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  undefined2 in_FS;
  
  *(undefined2 *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x21004a) = in_FS;
  *in_RAX = *in_RAX + (char)in_RAX;
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,
                             CONCAT11(unaff_BH + (char)((ulonglong)param_2 >> 8),unaff_BL)) +
                   0x21004a);
  *pcVar1 = *pcVar1 + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

