// Function: FUN_1404b59e4
// Addr: 1404b59e4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b59e4(undefined8 param_1)

{
  char in_AH;
  char cVar1;
  undefined6 uVar2;
  
  uVar2 = (undefined6)((ulonglong)param_1 >> 0x10);
  cVar1 = (char)((ulonglong)param_1 >> 8) >> 9;
  *(char *)CONCAT62(uVar2,CONCAT11(cVar1,(char)param_1)) =
       *(char *)CONCAT62(uVar2,CONCAT11(cVar1,(char)param_1)) + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

