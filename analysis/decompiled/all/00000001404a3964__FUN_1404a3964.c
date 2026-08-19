// Function: FUN_1404a3964
// Addr: 1404a3964
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a3964(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined1 uVar2;
  byte bVar3;
  undefined6 uVar4;
  
  uVar4 = (undefined6)((ulonglong)param_2 >> 0x10);
  uVar2 = (undefined1)param_2;
  bVar3 = (byte)((ulonglong)param_2 >> 8) | *(byte *)(param_1 + param_2);
  cVar1 = *(char *)CONCAT62(uVar4,CONCAT11(bVar3,uVar2));
  *(char *)CONCAT62(uVar4,CONCAT11(bVar3,uVar2)) =
       *(char *)CONCAT62(uVar4,CONCAT11(bVar3,uVar2)) + (char)param_1;
  if (!SCARRY1(cVar1,(char)param_1)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

