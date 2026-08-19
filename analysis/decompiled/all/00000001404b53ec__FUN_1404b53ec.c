// Function: FUN_1404b53ec
// Addr: 1404b53ec
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b53ec(char param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  uint uVar1;
  longlong in_RAX;
  char unaff_SPL;
  
  *param_4 = *param_4 + unaff_SPL;
  *(char *)(in_RAX * 2) = *(char *)(in_RAX * 2) + param_1;
  uVar1 = (int)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                        CONCAT11(((char)((ulonglong)in_RAX >> 8) + (char)((ulonglong)param_2 >> 8))
                                 * '\x02',(char)in_RAX)) + 0x6d40000;
  *(char *)(ulonglong)uVar1 = *(char *)(ulonglong)uVar1 + (char)uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

