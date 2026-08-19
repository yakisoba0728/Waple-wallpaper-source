// Function: FUN_1404aea14
// Addr: 1404aea14
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aea14(undefined8 param_1,undefined2 param_2)

{
  byte bVar1;
  byte bVar2;
  undefined6 uVar3;
  
  uVar3 = (undefined6)((ulonglong)param_1 >> 0x10);
  bVar2 = (byte)((ulonglong)param_1 >> 8);
  bVar1 = (byte)param_1 ^ bVar2;
  *(char *)CONCAT62(uVar3,CONCAT11(bVar2,bVar1)) =
       *(char *)CONCAT62(uVar3,CONCAT11(bVar2,bVar1)) + -8;
  in(param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

