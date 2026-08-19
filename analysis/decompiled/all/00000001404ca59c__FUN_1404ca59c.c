// Function: FUN_1404ca59c
// Addr: 1404ca59c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ca59c(char *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 in_RAX;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  char unaff_R12B;
  
  uVar1 = (int)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                        CONCAT11((byte)((ulonglong)in_RAX >> 8) | (byte)((ulonglong)param_2 >> 8),
                                 (char)in_RAX)) + 0x32dcf000;
  cRam00000000f44cd886 = cRam00000000f44cd886 + (char)param_1;
  *unaff_RDI = *unaff_RSI;
  *param_1 = *param_1 + unaff_R12B;
  *(char *)(ulonglong)uVar1 = *(char *)(ulonglong)uVar1 + (char)uVar1;
  cRam00000000f44cd896 = cRam00000000f44cd896 + (char)param_1;
  unaff_RDI[1] = unaff_RSI[1];
  *param_1 = *param_1 + unaff_R12B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

