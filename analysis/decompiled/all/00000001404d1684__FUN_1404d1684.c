// Function: FUN_1404d1684
// Addr: 1404d1684
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d1684(undefined8 param_1,undefined8 param_2)

{
  char in_AL;
  undefined1 uVar1;
  char cVar2;
  undefined6 uVar3;
  
  uVar3 = (undefined6)((ulonglong)param_2 >> 0x10);
  uVar1 = (undefined1)param_2;
  cVar2 = (char)((ulonglong)param_2 >> 8) + in_AL;
  *(undefined1 *)(CONCAT62(uVar3,CONCAT11(cVar2,uVar1)) + 0x39) = 0;
  *(byte *)CONCAT62(uVar3,CONCAT11(cVar2,uVar1)) =
       *(byte *)CONCAT62(uVar3,CONCAT11(cVar2,uVar1)) ^ 0x80;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

