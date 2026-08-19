// Function: FUN_1404c9690
// Addr: 1404c9690
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c9690(undefined8 param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  int in_EAX;
  uint uVar1;
  char cVar2;
  char unaff_SPL;
  undefined7 unaff_00000021;
  char *unaff_RSI;
  
  cVar2 = (char)((ulonglong)param_2 >> 8);
  uVar1 = in_EAX + 0xc0000674;
  *unaff_RSI = *unaff_RSI + cVar2;
  *param_4 = *param_4 + unaff_SPL;
  *(char *)(ulonglong)uVar1 = *(char *)(ulonglong)uVar1 + (char)uVar1;
  *unaff_RSI = *unaff_RSI + cVar2;
  *param_4 = *param_4 + unaff_SPL;
  *(char *)CONCAT71(unaff_00000021,unaff_SPL) =
       *(char *)CONCAT71(unaff_00000021,unaff_SPL) + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

