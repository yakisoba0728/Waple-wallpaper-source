// Function: FUN_1404a6530
// Addr: 1404a6530
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a6530(longlong param_1,longlong param_2)

{
  byte bVar1;
  longlong in_RAX;
  char cVar2;
  char cVar3;
  char cVar4;
  undefined6 uVar5;
  byte in_CF;
  
  uVar5 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar3 = (char)((ulonglong)param_2 >> 8);
  bVar1 = (byte)param_2 + *(byte *)(param_2 * 2);
  cVar2 = bVar1 + in_CF;
  cVar4 = cVar3 + *(char *)(in_RAX + CONCAT62(uVar5,CONCAT11(cVar3,cVar2))) +
          (CARRY1((byte)param_2,*(byte *)(param_2 * 2)) || CARRY1(bVar1,in_CF));
  cVar3 = *(char *)CONCAT62(uVar5,CONCAT11(cVar4,cVar2));
  *(char *)CONCAT62(uVar5,CONCAT11(cVar4,cVar2)) =
       *(char *)CONCAT62(uVar5,CONCAT11(cVar4,cVar2)) + cVar2;
  if (param_1 != 1 && *(char *)CONCAT62(uVar5,CONCAT11(cVar4,cVar2)) != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!SCARRY1(cVar3,cVar2)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

