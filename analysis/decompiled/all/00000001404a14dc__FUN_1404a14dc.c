// Function: FUN_1404a14dc
// Addr: 1404a14dc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a14dc(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  char cVar2;
  undefined6 uVar3;
  
  uVar3 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar2 = (char)((ulonglong)param_2 >> 8);
  uVar1 = (undefined1)param_2;
  func_0x0001414a5ef8();
  *(char *)CONCAT62(uVar3,CONCAT11(cVar2,uVar1)) =
       *(char *)CONCAT62(uVar3,CONCAT11(cVar2,uVar1)) + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

