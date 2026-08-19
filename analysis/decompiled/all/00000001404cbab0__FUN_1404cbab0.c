// Function: FUN_1404cbab0
// Addr: 1404cbab0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404cbad5) */

void FUN_1404cbab0(char *param_1,longlong param_2)

{
  char cVar1;
  char *in_RAX;
  char *pcVar2;
  byte *unaff_RSI;
  byte bVar3;
  
  bVar3 = (byte)((ulonglong)param_2 >> 8) | *(byte *)(param_2 + 6);
  pcVar2 = (char *)CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(bVar3,(char)param_2));
  *unaff_RSI = *unaff_RSI >> 1;
  *in_RAX = *in_RAX + bVar3;
  *in_RAX = *in_RAX + (char)in_RAX;
  *param_1 = *param_1 + (char)in_RAX;
  cVar1 = (char)((ulonglong)in_RAX >> 8);
  *pcVar2 = *pcVar2 + cVar1;
  *pcVar2 = *pcVar2 + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

