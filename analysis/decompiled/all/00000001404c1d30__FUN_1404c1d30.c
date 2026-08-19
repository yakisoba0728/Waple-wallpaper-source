// Function: FUN_1404c1d30
// Addr: 1404c1d30
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c1d30(undefined8 param_1,char param_2)

{
  char cVar1;
  undefined6 uVar2;
  undefined4 unaff_ESI;
  undefined4 unaff_00000034;
  
  uVar2 = (undefined6)((ulonglong)param_1 >> 0x10);
  cVar1 = (char)((ulonglong)param_1 >> 8) + *(char *)(CONCAT44(unaff_00000034,unaff_ESI) + 9);
  *(char *)CONCAT62(uVar2,CONCAT11(cVar1,(char)param_1)) =
       *(char *)CONCAT62(uVar2,CONCAT11(cVar1,(char)param_1)) + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

