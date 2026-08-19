// Function: FUN_1404c638c
// Addr: 1404c638c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c638c(longlong param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  uint uVar1;
  char cVar2;
  char cVar4;
  char *pcVar3;
  
  uVar1 = uRam21004b5d20002efb;
  pcVar3 = (char *)(ulonglong)uRam21004b5d20002efb;
  cVar2 = (char)uRam21004b5d20002efb;
  *pcVar3 = *pcVar3 + cVar2;
  cVar4 = (char)(uVar1 >> 8);
  pcVar3[-5] = pcVar3[-5] + cVar4;
  *(char *)(param_1 + 0x20002efb) = *(char *)(param_1 + 0x20002efb) + cVar4;
  *param_4 = *param_4 + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

