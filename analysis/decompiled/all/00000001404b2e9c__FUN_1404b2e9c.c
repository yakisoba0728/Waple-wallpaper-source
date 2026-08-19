// Function: FUN_1404b2e9c
// Addr: 1404b2e9c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b2e9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  uint uVar1;
  undefined8 in_RAX;
  char *pcVar2;
  char cVar3;
  char unaff_SPL;
  
  cVar3 = (char)((ulonglong)param_2 >> 8);
  uVar1 = (uint)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                         CONCAT11((char)((ulonglong)in_RAX >> 8) * '\x02',(char)in_RAX)) ^
          0x3c740000;
  *(char *)(ulonglong)uVar1 = *(char *)(ulonglong)uVar1 + (char)in_RAX;
  pcVar2 = (char *)((ulonglong)uVar1 ^ 0x3b);
  pcVar2[0x120017a8] = pcVar2[0x120017a8] + cVar3;
  *param_4 = *param_4 + unaff_SPL;
  *pcVar2 = *pcVar2 + (char)pcVar2;
  pcVar2[0x120017a8] = pcVar2[0x120017a8] + cVar3;
  *param_4 = *param_4 + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

