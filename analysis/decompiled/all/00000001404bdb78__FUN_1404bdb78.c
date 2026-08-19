// Function: FUN_1404bdb78
// Addr: 1404bdb78
// Size: 1 bytes


void FUN_1404bdb78(longlong param_1,longlong param_2)

{
  char *pcVar1;
  uint uVar2;
  undefined8 in_RAX;
  uint *puVar3;
  
  puVar3 = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                            CONCAT11(((char)((ulonglong)in_RAX >> 8) +
                                     (char)((ulonglong)param_2 >> 8)) * '\x02' + (char)in_RAX,
                                     (char)in_RAX));
  uVar2 = (uint)puVar3 | *puVar3;
  *(char *)(param_2 + param_1) = *(char *)(param_2 + param_1) + (char)(uVar2 >> 8);
  pcVar1 = (char *)((ulonglong)(uVar2 & 0x255d8900) + 0x21004aea);
  *pcVar1 = *pcVar1 + (char)param_2;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

