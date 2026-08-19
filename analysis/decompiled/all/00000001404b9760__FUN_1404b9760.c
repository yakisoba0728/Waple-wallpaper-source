// Function: FUN_1404b9760
// Addr: 1404b9760
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b9760(uint param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  uint uVar1;
  char cVar2;
  longlong in_RAX;
  char unaff_SPL;
  
  *(uint *)(param_2 + 0x1f) = *(uint *)(param_2 + 0x1f) ^ param_1;
  cVar2 = (char)((ulonglong)in_RAX >> 8);
  *(char *)(in_RAX + 0xd) = *(char *)(in_RAX + 0xd) + cVar2;
  *param_4 = *param_4 + unaff_SPL;
  *(char *)(in_RAX * 2) = *(char *)(in_RAX * 2) + (char)param_1;
  uVar1 = (int)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                        CONCAT11((cVar2 + (char)((ulonglong)param_2 >> 8)) * '\x02',(char)in_RAX)) +
          0x6d40000;
  *(char *)(ulonglong)uVar1 = *(char *)(ulonglong)uVar1 + (char)uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

