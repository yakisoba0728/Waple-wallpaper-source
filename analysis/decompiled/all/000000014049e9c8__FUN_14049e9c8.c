// Function: FUN_14049e9c8
// Addr: 14049e9c8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049e9c8(longlong param_1,longlong param_2)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  undefined6 uVar4;
  byte in_CF;
  
  uVar4 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar1 = (byte)param_2 + *(byte *)(param_2 + param_1);
  cVar2 = bVar1 + in_CF;
  cVar3 = (char)((ulonglong)param_2 >> 8) + *(char *)(param_1 * 2) +
          (CARRY1((byte)param_2,*(byte *)(param_2 + param_1)) || CARRY1(bVar1,in_CF));
  *(char *)CONCAT62(uVar4,CONCAT11(cVar3,cVar2)) =
       *(char *)CONCAT62(uVar4,CONCAT11(cVar3,cVar2)) + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

