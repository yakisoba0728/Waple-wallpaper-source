// Function: FUN_1404b535c
// Addr: 1404b535c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b535c(char param_1,char *param_2,undefined8 param_3,char *param_4)

{
  uint uVar1;
  byte bVar2;
  char *in_RAX;
  byte unaff_BL;
  char unaff_SPL;
  
  *param_4 = *param_4 + unaff_SPL;
  *in_RAX = *in_RAX + (char)in_RAX;
  bVar2 = (byte)((ulonglong)in_RAX >> 8);
  *param_2 = *param_2 - CARRY1(unaff_BL,bVar2);
  *param_4 = *param_4 + unaff_SPL;
  *(char *)((longlong)in_RAX * 2) = *(char *)((longlong)in_RAX * 2) + param_1;
  uVar1 = (int)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                        CONCAT11((bVar2 + (char)((ulonglong)param_2 >> 8)) * '\x02',(char)in_RAX)) +
          0x6d40000;
  *(char *)(ulonglong)uVar1 = *(char *)(ulonglong)uVar1 + (char)uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

