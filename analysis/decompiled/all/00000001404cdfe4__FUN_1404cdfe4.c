// Function: FUN_1404cdfe4
// Addr: 1404cdfe4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cdfe4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  uint in_EAX;
  char *pcVar2;
  byte *unaff_RSI;
  undefined4 unaff_EDI;
  undefined4 unaff_0000003c;
  char unaff_R15B;
  float10 in_ST0;
  float10 in_ST1;
  
  pcVar2 = (char *)(ulonglong)(in_EAX | 0x9e00bf0);
  *(char *)CONCAT44(unaff_0000003c,unaff_EDI) =
       *(char *)CONCAT44(unaff_0000003c,unaff_EDI) << 1 |
       *(char *)CONCAT44(unaff_0000003c,unaff_EDI) < '\0';
  cVar1 = *pcVar2;
  *unaff_RSI = *unaff_RSI >> ((byte)param_1 & 0x1f);
  *pcVar2 = *pcVar2 + (char)((ulonglong)param_2 >> 8) + cVar1;
  *(short *)((longlong)pcVar2 * 2 + 0x7a) = (short)in_ST0;
  *pcVar2 = *pcVar2 + (char)(in_EAX | 0x9e00bf0);
  *pcVar2 = *pcVar2 + (char)((ulonglong)param_1 >> 8);
  *(char *)CONCAT44(unaff_0000003c,unaff_EDI) =
       *(char *)CONCAT44(unaff_0000003c,unaff_EDI) + unaff_R15B;
  *(short *)((longlong)pcVar2 * 2 + 2) = (short)in_ST1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

