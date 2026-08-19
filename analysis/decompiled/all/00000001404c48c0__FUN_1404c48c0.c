// Function: FUN_1404c48c0
// Addr: 1404c48c0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c48c0(longlong param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  undefined6 uVar3;
  char in_CF;
  
  uVar3 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar1 = (char)param_2;
  cVar2 = (char)((ulonglong)param_2 >> 8) + *(char *)(param_2 + param_1) + in_CF;
  *(char *)CONCAT62(uVar3,CONCAT11(cVar2,cVar1)) =
       *(char *)CONCAT62(uVar3,CONCAT11(cVar2,cVar1)) + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

