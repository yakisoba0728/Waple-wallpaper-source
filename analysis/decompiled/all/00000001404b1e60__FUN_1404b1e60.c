// Function: FUN_1404b1e60
// Addr: 1404b1e60
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b1e60(longlong param_1,longlong param_2)

{
  char *pcVar1;
  uint uVar2;
  undefined8 in_RAX;
  uint *puVar3;
  
  puVar3 = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                            CONCAT11((char)((ulonglong)in_RAX >> 8) * '\x02',(char)in_RAX));
  uVar2 = *puVar3;
  *(char *)(param_2 + param_1) = *(char *)(param_2 + param_1) + (char)param_2;
  pcVar1 = (char *)((ulonglong)((uint)puVar3 | uVar2) + param_1);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

