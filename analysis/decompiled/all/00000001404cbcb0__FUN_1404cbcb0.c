// Function: FUN_1404cbcb0
// Addr: 1404cbcb0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404cbcda) overlaps instruction at (ram,0x0001404cbcd6)
    */
/* WARNING: Removing unreachable block (ram,0x0001404cbcd2) */

void FUN_1404cbcb0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  byte *in_RAX;
  byte bVar2;
  char cVar4;
  undefined6 uVar5;
  byte *unaff_RSI;
  longlong lVar3;
  
  uVar5 = (undefined6)((ulonglong)param_2 >> 0x10);
  *in_RAX = *in_RAX | (byte)in_RAX;
  cVar1 = (byte)param_2 + *(byte *)(param_1 * 2);
  cVar4 = (char)((ulonglong)param_2 >> 8) + in_RAX[param_1] +
          CARRY1((byte)param_2,*(byte *)(param_1 * 2));
  *(char *)CONCAT62(uVar5,CONCAT11(cVar4,cVar1)) =
       *(char *)CONCAT62(uVar5,CONCAT11(cVar4,cVar1)) + cVar1;
  bVar2 = (byte)param_1 ^ *unaff_RSI;
  lVar3 = CONCAT71((int7)((ulonglong)param_1 >> 8),bVar2);
  if (lVar3 == 1 || bVar2 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (lVar3 != 2 && bVar2 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)CONCAT62(uVar5,CONCAT11(cVar4,cVar1)) =
       *(char *)CONCAT62(uVar5,CONCAT11(cVar4,cVar1)) + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

