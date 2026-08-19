// Function: FUN_1404c6b44
// Addr: 1404c6b44
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c6b44(char *param_1,char *param_2,char param_3)

{
  uint uVar1;
  char cVar3;
  longlong in_RAX;
  char cVar4;
  char unaff_R12B;
  char *pcVar2;
  
  cVar4 = (char)param_2;
  cVar3 = (char)((ulonglong)in_RAX >> 8);
  *param_1 = *param_1 + cVar3;
  *(char *)(in_RAX * 2) = *(char *)(in_RAX * 2) + (char)in_RAX;
  uVar1 = (int)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(cVar3 * '\x02',(char)in_RAX)) +
          0xa640000;
  pcVar2 = (char *)(ulonglong)uVar1;
  pcVar2[-0x5dffd096] = pcVar2[-0x5dffd096] + cVar4;
  pcVar2[0x6a] = pcVar2[0x6a] + (char)param_1;
  *param_1 = *param_1 + unaff_R12B;
  *pcVar2 = *pcVar2 + (char)uVar1;
  pcVar2[-0x5dffd096] = pcVar2[-0x5dffd096] + cVar4;
  pcVar2[0x6a] = pcVar2[0x6a] + (char)param_1;
  *param_1 = *param_1 + param_3;
  *param_2 = *param_2 + cVar4;
  *param_2 = *param_2 + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

