// Function: FUN_1404c7214
// Addr: 1404c7214
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c7214(char *param_1)

{
  short sVar1;
  int in_EAX;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RSI;
  char *unaff_RDI;
  char unaff_R12B;
  char *pcVar2;
  
  sVar1 = (short)(char)((char)(in_EAX + 0x7b000f34) * *unaff_RDI) * (short)*unaff_RDI;
  pcVar2 = (char *)(ulonglong)CONCAT22((short)((uint)(in_EAX + 0x7b000f34) >> 0x10),sVar1);
  param_1[unaff_RSI * 2] = param_1[unaff_RSI * 2] + unaff_BL;
  *param_1 = *param_1 + unaff_R12B;
  *pcVar2 = *pcVar2 + (char)sVar1;
  pcVar2 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -10);
  *pcVar2 = *pcVar2 + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

