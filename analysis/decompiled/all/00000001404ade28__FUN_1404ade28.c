// Function: FUN_1404ade28
// Addr: 1404ade28
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ade28(undefined8 param_1)

{
  char cVar1;
  undefined6 uVar2;
  char unaff_BL;
  char unaff_SPL;
  
  uVar2 = (undefined6)((ulonglong)param_1 >> 0x10);
  cVar1 = (char)((ulonglong)param_1 >> 8) - unaff_BL;
  *(char *)CONCAT62(uVar2,CONCAT11(cVar1,(char)param_1)) =
       *(char *)CONCAT62(uVar2,CONCAT11(cVar1,(char)param_1)) + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

