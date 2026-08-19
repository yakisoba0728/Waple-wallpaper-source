// Function: FUN_1404b7f3c
// Addr: 1404b7f3c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b7f3c(longlong param_1,longlong param_2)

{
  char *pcVar1;
  undefined8 in_RAX;
  uint *puVar2;
  ulonglong uVar3;
  char cVar4;
  
  cVar4 = (char)((ulonglong)param_2 >> 8);
  puVar2 = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                            CONCAT11(((char)((ulonglong)in_RAX >> 8) + cVar4) * '\x02',(char)in_RAX)
                           );
  uVar3 = (ulonglong)((uint)puVar2 | *puVar2);
  *(char *)(param_2 + param_1) = *(char *)(param_2 + param_1) + (char)param_2;
  pcVar1 = (char *)(uVar3 + param_1);
  *pcVar1 = *pcVar1 + cVar4;
  pcVar1 = (char *)(uVar3 - 0x20ffe239);
  *pcVar1 = *pcVar1 + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

