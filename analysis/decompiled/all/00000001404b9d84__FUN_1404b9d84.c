// Function: FUN_1404b9d84
// Addr: 1404b9d84
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b9d84(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  byte *in_RAX;
  char cVar4;
  uint *puVar3;
  
  cVar4 = (char)((ulonglong)param_2 >> 8);
  cRam00000001406c9dd5 = (char)((ulonglong)in_RAX >> 8);
  uVar2 = (int)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                        CONCAT11(cRam00000001406c9dd5 * '\x02' + (char)param_2,
                                 (byte)in_RAX | *in_RAX)) + 0xcc40000;
  puVar3 = (uint *)(ulonglong)uVar2;
  *(char *)puVar3 = (char)*puVar3 + (char)uVar2;
  uVar1 = *puVar3;
  *(char *)(param_2 + param_1) = *(char *)(param_2 + param_1) + cVar4;
  *(char *)(ulonglong)(uVar2 | uVar1) = *(char *)(ulonglong)(uVar2 | uVar1) + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

