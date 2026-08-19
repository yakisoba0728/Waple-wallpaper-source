// Function: FUN_1404aa168
// Addr: 1404aa168
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aa168(longlong param_1,undefined2 param_2,undefined8 param_3,char *param_4)

{
  undefined3 uVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  undefined8 in_RAX;
  longlong in_FS_OFFSET;
  char *pcVar5;
  ulonglong uVar6;
  
  uVar4 = (int)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                        CONCAT11((char)((ulonglong)in_RAX >> 8) * '\x02',(char)in_RAX)) + 0xbc40000;
  pcVar5 = (char *)(ulonglong)uVar4;
  *pcVar5 = *pcVar5 + (byte)uVar4;
  uVar1 = (undefined3)(uVar4 >> 8);
  bVar3 = (byte)uVar4 | pcVar5[in_FS_OFFSET];
  uVar6 = (ulonglong)CONCAT31(uVar1,bVar3);
  *(char *)(param_1 * 2) = *(char *)(param_1 * 2) + (char)param_2;
  pcVar5 = (char *)(uVar6 + param_1);
  *pcVar5 = *pcVar5 + (char)((ushort)param_2 >> 8);
  pcVar5 = (char *)(uVar6 - 0x36);
  *pcVar5 = *pcVar5 + (char)param_2;
  cVar2 = bVar3 * '\x02';
  out(param_2,CONCAT31(uVar1,cVar2) | 0xdca5c00);
  *param_4 = *param_4 + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

