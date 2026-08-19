// Function: FUN_1404b9b94
// Addr: 1404b9b94
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b9b94(char param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  char cVar5;
  char *in_RAX;
  char unaff_BL;
  char unaff_SPL;
  char *unaff_RDI;
  bool in_CF;
  bool in_ZF;
  longlong lVar4;
  
  if (!in_CF && !in_ZF) {
    *param_4 = *param_4 + unaff_SPL;
    *in_RAX = *in_RAX + (char)in_RAX;
    cVar2 = (char)in_RAX + (char)param_2;
    lVar4 = CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar2);
    *unaff_RDI = *unaff_RDI + param_1;
    LOCK();
    *unaff_RDI = unaff_BL;
    UNLOCK();
    pcVar1 = (char *)(lVar4 + 0xd);
    cVar5 = (char)((ulonglong)in_RAX >> 8);
    *pcVar1 = *pcVar1 + cVar5;
    *param_4 = *param_4 + unaff_SPL;
    pcVar1 = (char *)(lVar4 * 2);
    *pcVar1 = *pcVar1 + param_1;
    uVar3 = (int)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                          CONCAT11((cVar5 + (char)((ulonglong)param_2 >> 8)) * '\x02',cVar2)) +
            0x6d40000;
    *(char *)(ulonglong)uVar3 = *(char *)(ulonglong)uVar3 + (char)uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

