// Function: FUN_1404c862c
// Addr: 1404c862c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c862c(longlong param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  undefined8 in_RAX;
  char unaff_SPL;
  longlong unaff_RBP;
  longlong unaff_RSI;
  char in_CF;
  
  uVar3 = (int)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                        CONCAT11((char)((ulonglong)in_RAX >> 8) + *(char *)(param_2 + param_1) +
                                 in_CF,(char)in_RAX)) + 0x60000954;
  *(char *)(unaff_RSI + -0x73ffcf58) = *(char *)(unaff_RSI + -0x73ffcf58) + (char)param_1;
  LOCK();
  *param_4 = *param_4 + unaff_SPL;
  UNLOCK();
  cVar2 = (char)uVar3;
  *(char *)((ulonglong)uVar3 * 2) = *(char *)((ulonglong)uVar3 * 2) + cVar2;
  pcVar1 = (char *)(unaff_RBP +
                   (ulonglong)
                   CONCAT31((int3)(CONCAT22((short)(uVar3 >> 0x10),
                                            CONCAT11((char)(uVar3 >> 8) * '\x02',cVar2)) >> 8),cVar2
                           ));
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

