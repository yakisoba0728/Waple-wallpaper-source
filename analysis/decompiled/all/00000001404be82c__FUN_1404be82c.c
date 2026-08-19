// Function: FUN_1404be82c
// Addr: 1404be82c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404be82c(char param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  uint uVar2;
  undefined8 in_RAX;
  undefined1 *puVar3;
  char cVar4;
  char unaff_SPL;
  char in_CF;
  
  cVar4 = (char)((ulonglong)param_2 >> 8);
  uVar2 = (uint)CONCAT61((int6)((ulonglong)in_RAX >> 0x10),
                         (char)((ulonglong)in_RAX >> 8) + cVar4 + in_CF) & 0x25f44f;
  pcVar1 = (char *)((ulonglong)(uVar2 << 8) + 0xd);
  *pcVar1 = *pcVar1 + (char)uVar2;
  *param_4 = *param_4 + unaff_SPL;
  pcVar1 = (char *)((ulonglong)(uVar2 << 8) * 2);
  *pcVar1 = *pcVar1 + param_1;
  puVar3 = (undefined1 *)
           (ulonglong)
           ((uint)CONCAT21((short)(uVar2 >> 8),((char)uVar2 + cVar4) * '\x02') * 0x100 + 0x6d40000);
  *puVar3 = *puVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

